# STM32 蜂鸣器音乐 —— 《春日影》(Haruhikage) - CRYCHIC

基于**达妙科技 DM-MC02 开发板**（STM32H723VGT6）的无源蜂鸣器音乐播放工程，在主循环中循环演奏《春日影》。

> 本项目为**原始版本**：曲谱是对照乐谱手工编写的。后续将推出基于 MIDI 自动生成曲谱代码的版本。

## 效果视频

[![效果视频](https://i2.hdslb.com/bfs/archive/1ed634a0f39582c373caaf92899a569273327242.jpg)](https://www.bilibili.com/video/BV1VARwBhEbV)

（点击图片跳转 B 站观看）

## 硬件

- 开发板：达妙科技 DM-MC02
- MCU：STM32H723VGT6，主频 240MHz（HSI + PLL）
- 蜂鸣器：无源蜂鸣器，接 **PB15（TIM12_CH2）**
- 调试/烧录口：SWD（PA13 / PA14）

## 工作原理

通过定时器 PWM 驱动无源蜂鸣器：

- **音高**：修改 `TIM12->ARR` 改变 PWM 频率。定时器时钟 1MHz，满足 `ARR × freq = 1MHz`，即 `freq = 1MHz / ARR`。
- **音量**：修改 `TIM12->CCR2` 改变占空比（`volume` 参数 0~100）。
- **节拍**：`Buzzer_Set_Frequency(freq, duration, delay, volume)` 播放指定时长的音符，音符间留有 `delay` 静音间隔避免连音。

`Core/Src/Buzzer.c` 内置 A0~C8 全音域频率常量表（含升降号），该蜂鸣器有效音域为 **G3~A7**。

## 构建

需要 `arm-none-eabi-gcc` 与 Ninja：

```bash
cmake --preset Debug
cmake --build --preset Debug
```

也有 `Release` preset 可用。生成的固件位于 `build/Debug/`（或 `build/Release/`）下，通过 SWD 烧录。

## 添加新曲目

参考 `Music/Haruhikage-CRYCHIC.c`：

1. 在 `Music/` 下新建曲谱文件，用宏定义将简谱数字映射到 `Buzzer.h` 中的频率常量（示例中 `_1`~`_7` 为中音区，`_1s` 为高音区，`_1_` 为低音区）。
2. 定义一拍时长（本曲 `HARUHIKAGE_INTERVAL 618` ms）。
3. 按谱调用 `Buzzer_Set_Frequency(音符, 时值, 间隔, 音量)`。
4. 在 `main.c` 中调用播放函数。

## 目录结构

```
├── Core/               # 应用代码（Buzzer 驱动、main、HAL 配置）
├── Music/              # 曲谱（Haruhikage-CRYCHIC）
├── Drivers/            # CMSIS 与 STM32H7 HAL 库
├── cmake/              # 工具链文件
├── Buzzer.ioc          # STM32CubeMX 工程
└── CMakeLists.txt      # CMake 构建
```
