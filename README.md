# Key Mapping

## Impact of Neutral Position

1. low
2. medium
3. high

```
-------------------------------------     -------------------------------------
|  3  |  2  |  1  |  1  |  2  |  3  |     |  3  |  2  |  1  |  1  |  2  |  3  |
|  1  |  1  |  1  |  1  |  1  |  1  |     |  1  |  1  |  1  |  1  |  1  |  1  |
|  3  |  1  |  3  |  3  |  2  |  3  |     |  3  |  2  |  3  |  3  |  1  |  3  |
------------------|  1  |  1  |  1  |     |  1  |  1  |  1  |------------------
                  -------------------     -------------------
```

## Key Code

| Name                    | Freq     | Seq                | Mod                | Behaviors          | Num of Keys   |
|-------------------------|----------|--------------------|--------------------|--------------------|---------------|
| Letters                 | high     | :white_check_mark: | :white_check_mark: | Default Layer      | 26            |
| Control & Whitespace    | high     |                    | :white_check_mark: | Default Layer      | 6 (~INS~)     |
| Numbers                 | high     | :white_check_mark: | :white_check_mark: | To Layer           | 10            |
| Modifiers               | high     |                    |                    | Mod-Tap            | 8             |
| Symbols / Punctuation   | medium   |                    | :white_check_mark: | Momentary Layer    | 24 (~;,./~)   |
| Navigation              | medium   | :white_check_mark: |                    | Momentary Layer    | 8             |
| Miscellaneous           | low      |                    | :white_check_mark: | Momentary Layer    | 1 (PSCRN)     |
| F Keys                  | low      |                    |                    | Momentary Layer    | 12            |
| Key Repeat              | low      |                    |                    | Momentary Layer    | 1             |
| Mouse Emulation         | low      |                    |                    | Momentary Layer    | 5             |
| Bluetooth               | low      |                    |                    | Momentary Layer    | 5             |
| Output Selection        | low      |                    |                    | Momentary Layer    | 2             |
| Reset                   | low      |                    |                    | Momentary Layer    | 2             |
| Power Management        | low      |                    |                    | Momentary Layer    | 1             |
| RGB Underglow           | low      |                    |                    | Momentary Layer    | 9             |

### Letters, Control & Whitespace

```
-------------------------------------     -------------------------------------
|     |  Q  |  W  |  E  |  R  |  T  |     |  Y  |  U  |  I  |  O  |  P  |     |     
| ESC |  A  |  S  |  D  |  F  |  G  |     |  H  |  J  |  K  |  L  |  ;  | DEL |     
|     |  Z  |  X  |  C  |  V  |  B  |     |  N  |  M  |  ,  |  .  |  /  |     |     
------------------|     | TAB |SPACE|     |ENTER|BSPC |     |------------------
                  -------------------     -------------------
```

### Modifiers

```
-------------------------------------     -------------------------------------
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
|     |LALT |LMETA|LSHFT|LCTRL|     |     |     |RCTRL|RSHFT|RMETA|RALT |     |     
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```


### Number

```
-------------------------------------     -------------------------------------
|     |     |     |     |     |     |     |  +  |  7  |  8  |  9  |  %  |     |     
|     |     |     |     |     |     |     |  -  |  4  |  5  |  6  |  *  |     |     
|     |     |     |     |     |     |     |  0  |  1  |  2  |  3  |  /  |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```

### Symbols / Punctuation

Frequency and Usage:
1. **'"`~**: string
2. **()**: function, tuple
3. **[]**: array
4. **{}**: dict
5. **=!**: condition
6. **&|**: logic
7. **_**: underline
8. **^$**: line movement
9. **%**: brackets movement (duplicate)
10. **#\***: search (**\*** duplicate)
11. **@**: macro
12. **\\**: special char, escape char
13. **+\-**: arithmetic (duplicate)

```
-------------------------------------     -------------------------------------
|     |     |  (  |  )  |  `  |  ~  |     |  +  |  &  |  |  |  \  |  %  |     |
|     |     |  [  |  ]  |  "  |  '  |     |  -  |  !  |  =  |  #  |  *  |     |
|     |     |  {  |  }  |  _  |  @  |     |  ^  |  $  |     |     |     |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```

### Navigation, Miscellaneous, F Keys, Key Repeat, Mouse Emulation

```
-------------------------------------     -------------------------------------
|     |     | F1  | F2  | F3  | F4  |     |PSCRN|KREPT| MB1 | MB2 | MB3 |     |     
|     |     | F5  | F6  | F7  | F8  |     |LEFT |DOWN | UP  |RIGHT| MB4 |     |     
|     |     | F9  | F10 | F11 | F12 |     |HOME |PG_DN|PG_UP| END | MB5 |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```

### Bluetooth, Output Selection, Reset, Power Management, RGB Underglow

- DEV***N***:
    - Single Tap: BT_SEL ***N***
    - Double Tap: BT_DISC ***N***
    - Hold: Macro(BT_SEL ***N***, BT_CLR)

```
-------------------------------------     -------------------------------------
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
|     |DEV1 |DEV2 |DEV3 |DEV4 |DEV5 |     | HUI | SAI | BRI | SPI | EFF |     |     
|     |     | ON  | OFF | BLE | USB |     | HUD | SAD | BRD | SPD |     |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```

# Template

```
-------------------------------------     -------------------------------------
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
|     |     |     |     |     |     |     |     |     |     |     |     |     |     
------------------|     |     |     |     |     |     |     |------------------
                  -------------------     -------------------
```

# Base Config

[Default](https://github.com/a741725193/zmk-config-zen-2/actions/runs/9887163274/job/27308328547)

[Turn off display](https://github.com/Lucas1382/zmk-config-zen-2/tree/patch-1)

