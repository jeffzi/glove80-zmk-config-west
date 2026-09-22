#pragma once

/* GLOVE80 KEY MATRIX
 ╭────────────────────╮       ╭────────────────────╮
 │  0   1   2   3   4 ╰───┬───╯  5   6   7   8   9 │
 │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │
 │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │
 │ 34  35  36  37  38  39 │ 40  41  42  43  44  45 │
 │ 46  47  48  49  50  51 │ 58  59  60  61  62  63 │
 │ 64  65  66  67  68 ╭───┴───╮ 75  76  77  78  79 │
 ╰───────────┬────────┴───┬───┴────────┬───────────╯
             │ 52  53  54 │ 55  56  57 │
             │ 69  70  71 │ 72  73  74 │
             ╰────────────┴────────────╯
 Key labels for these positions (LM2, RB0, LH5, ...) come from zmk-helpers/key-labels/glove80.h.
 */

#include <zmk-helpers/helper.h>
#include <zmk-helpers/key-labels/glove80.h>

// Keys
#define ___ &trans
#define XXX &none

#define KEYS_R                                                                                     \
    RC1 RC2 RC3 RC4 RC5                                                                            \
    RN0 RN1 RN2 RN3 RN4 RN5                                                                        \
    RT0 RT1 RT2 RT3 RT4 RT5                                                                        \
    RM0 RM1 RM2 RM3 RM4 RM5                                                                        \
    RB0 RB1 RB2 RB3 RB4 RB5                                                                        \
    RF1 RF2 RF3 RF4 RF5
#define THUMBS LH0 LH1 LH2 LH3 LH4 LH5 RH0 RH1 RH2 RH3 RH4 RH5

#define NAV_LEFT &mt LG(LEFT) LEFT     // Tap: left  | Long-tap: start of line
#define NAV_RIGHT &mt LG(RIGHT) RIGHT  // Tap: right | Long-tap: end of line
#define NAV_UP &mt PAGE_UP UP          // Tap: up    | Long-tap: page up
#define NAV_DOWN &mt PAGE_DOWN DOWN    // Tap: down  | Long-tap: page down
#define NAV_BSPC &mt LA(BSPC) BSPC     // Tap: bspc  | Long-tap: delete word bwd
#define NAV_DEL &mt LA(DEL) DEL        // Tap: del   | Long-tap: delete word fwd

#define TGRAVE &grave_tap 0 GRAVE
#define TUNDER &under_tap 0 UNDER

#define TCOPY(key) &long_press LG(C) key
#define TCUT(key) &long_press LG(X) key
#define TPASTE(key) &long_press LG(V) key

#define SEL_FWD &kp LA(LS(RIGHT))
#define SEL_BWD &kp LA(LS(LEFT))

#define HYPR LC(LS(LG(LALT)))
#define MEH LS(LC(LALT))
#define HYP(key) LS(LC(LA(LG(key))))

// Layers
// Must match order in which they are defined
#define BASE 0
#define ACC 1
#define SYM 2
#define LOWER 3
#define MAGIC 4

// Timings (ms)
#define TAPPING_TERM_MS 200     // Layer-taps, tap-dances and tap-preferred hold-taps
#define NAV_TAPPING_TERM_MS 220 // Nav-cluster mod-taps; also their quick-tap
#define LONG_PRESS_TERM_MS 190  // Long-press shortcuts
#define HRM_TAPPING_TERM_MS 280
#define QUICK_TAP_MS 175
#define PRIOR_IDLE_MS 150 // Homerow mods and combos
#define COMBO_TERM_MS 50
