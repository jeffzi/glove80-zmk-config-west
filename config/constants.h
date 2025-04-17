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
 */

#include "constants.h"
// Keys
#define ___ &trans
#define XXX &none
#define KEYS_L 27 26 25 24 23 39 38 37 36 35 51 50 49 48 47
#define KEYS_R 28 29 30 31 32 40 41 42 43 44 58 59 60 61 62
#define THUMBS 69 70 71 72 73 74
#define HYPR LC(LS(LG(LALT)))
#define MEH LS(LC(LALT))
#define HYP(key) LS(LC(LA(LG(key))))

// layers
#define BASE 0
#define SYM 1
#define LOWER 2
#define MAGIC 3

// OS
#define WINDOWS 0
#define LINUX 1
#define MAC_OS 2
