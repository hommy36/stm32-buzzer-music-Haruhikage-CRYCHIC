#include "Haruhikage-CRYCHIC.h"
#include "Buzzer.h"
#include "main.h"

// 高音区
#define _1s BUZZER_FREQUENCY_B5
#define _2s BUZZER_FREQUENCY_C6_SHARP
#define _3s BUZZER_FREQUENCY_D6_SHARP
#define _4s BUZZER_FREQUENCY_E6
#define _5s BUZZER_FREQUENCY_F6_SHARP
#define _6s BUZZER_FREQUENCY_G6_SHARP
#define _7s BUZZER_FREQUENCY_A6_SHARP
// 中音区
#define _1 BUZZER_FREQUENCY_B4
#define _2 BUZZER_FREQUENCY_C5_SHARP
#define _3 BUZZER_FREQUENCY_D5_SHARP
#define _4 BUZZER_FREQUENCY_E5
#define _5 BUZZER_FREQUENCY_F5_SHARP
#define _6 BUZZER_FREQUENCY_G5_SHARP
#define _7 BUZZER_FREQUENCY_A5_SHARP
// 低音区
#define _1_ BUZZER_FREQUENCY_B3
#define _2_ BUZZER_FREQUENCY_C4_SHARP
#define _3_ BUZZER_FREQUENCY_D4_SHARP
#define _4_ BUZZER_FREQUENCY_E4
#define _5_ BUZZER_FREQUENCY_F4_SHARP
#define _6_ BUZZER_FREQUENCY_G4_SHARP
#define _7_ BUZZER_FREQUENCY_A4_SHARP


// 该曲子一拍间隔618.56ms
#define HARUHIKAGE_INTERVAL 618
#define Delay 25

static void prelude() {
    Buzzer_Set_Frequency(_3s, HARUHIKAGE_INTERVAL, Delay, 5);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 5);
    Buzzer_Set_Frequency(_1s, HARUHIKAGE_INTERVAL, Delay, 5);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 5);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 5);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 5);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 5);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 5);

    Buzzer_Set_Frequency(_3s, HARUHIKAGE_INTERVAL, Delay, 10);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 10);
    Buzzer_Set_Frequency(_1s, HARUHIKAGE_INTERVAL, Delay, 10);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 10);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 10);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 10);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 10);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 10);

    Buzzer_Set_Frequency(_3s, HARUHIKAGE_INTERVAL, Delay, 20);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 20);
    Buzzer_Set_Frequency(_1s, HARUHIKAGE_INTERVAL, Delay, 20);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 20);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 20);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 20);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 20);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 20);

    Buzzer_Set_Frequency(_3s, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL * 1.5f);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), 0, 100);

    Buzzer_Set_Frequency(_7, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_7, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5_, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
}

// 主歌
static void verse() {

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL * 1.5f);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_7, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5_, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_7_, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7_, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, HARUHIKAGE_INTERVAL, Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), 0, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);
}

// 副歌1
static void chorus1() {
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5 * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);  //#5
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 0.25f);
    Buzzer_Set_Frequency(_5 * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);  //#5

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 0.25f);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);


}

// 副歌2
static void chorus2() {

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL * 0.5f);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 0.5f);
    Buzzer_Set_Frequency(_7s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), 0, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL * 3);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s / 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);

    msDelay(HARUHIKAGE_INTERVAL * 1.5f);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5s * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_5s * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_7s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_6s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_6s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5 * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 0.25f);
    Buzzer_Set_Frequency(_5 * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 0.25f);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_4s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f * 1.5f), Delay, 100);
    Buzzer_Set_Frequency(_3s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_7, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), 0, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_6, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_5, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);

    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_3, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_1, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);
    msDelay(HARUHIKAGE_INTERVAL * 1.5f);

    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_4, (uint32_t)(HARUHIKAGE_INTERVAL), Delay, 100);
    Buzzer_Set_Frequency(_5 * 1.059, (uint32_t)(HARUHIKAGE_INTERVAL), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.5f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);
    Buzzer_Set_Frequency(_2s, (uint32_t)(HARUHIKAGE_INTERVAL * 0.25f), Delay, 100);

    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), 0, 100);
    Buzzer_Set_Frequency(_1s, (uint32_t)(HARUHIKAGE_INTERVAL * 1.5f), Delay, 100);

}

void Play_Haruhikage() {
    prelude();
    verse();
    chorus1();
    verse();
    chorus2();

}