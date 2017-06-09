#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"


/*
 * Actions
 */
#define   AC_BLD                  ACTION_BACKLIGHT_DECREASE()
#define   AC_BLI                  ACTION_BACKLIGHT_INCREASE()

#define   AC_TM_Z_LCTL            ACTION_MODS_TAP_KEY(MOD_LCTL,   KC_Z)
#define   AC_TM_X_LALT            ACTION_MODS_TAP_KEY(MOD_LALT,   KC_X)
#define   AC_TM_C_LGUI            ACTION_MODS_TAP_KEY(MOD_LGUI,   KC_C)
#define   AC_TL_V_L1              ACTION_LAYER_TAP_KEY(1,         KC_V)

#define   AC_TL_B_L3              ACTION_LAYER_TAP_KEY(3,         KC_B)
#define   AC_TL_N_L4              ACTION_LAYER_TAP_KEY(4,         KC_N)
#define   AC_TM_M_RGUI            ACTION_MODS_TAP_KEY(MOD_RGUI,   KC_M)

#define   AC_TM_RSHIFT_ESC        ACTION_MODS_TAP_KEY(MOD_RSFT,   KC_ESC)

#define   AC_S01                  ACTION_MODS_KEY(MOD_LSFT,       KC_1)
#define   AC_S02                  ACTION_MODS_KEY(MOD_LSFT,       KC_2)
#define   AC_S03                  ACTION_MODS_KEY(MOD_LSFT,       KC_3)
#define   AC_S04                  ACTION_MODS_KEY(MOD_LSFT,       KC_4)
#define   AC_S05                  ACTION_MODS_KEY(MOD_LSFT,       KC_5)
#define   AC_S06                  ACTION_MODS_KEY(MOD_LSFT,       KC_6)
#define   AC_S07                  ACTION_MODS_KEY(MOD_LSFT,       KC_7)
#define   AC_S08                  ACTION_MODS_KEY(MOD_LSFT,       KC_8)
#define   AC_S09                  ACTION_MODS_KEY(MOD_LSFT,       KC_9)
#define   AC_S10                  ACTION_MODS_KEY(MOD_LSFT,       KC_0)

#define   AC_S11                  ACTION_MODS_KEY(MOD_LSFT,       KC_MINS)
#define   AC_S12                  ACTION_MODS_KEY(MOD_LSFT,       KC_EQL)
#define   AC_S13                  ACTION_MODS_KEY(MOD_LSFT,       KC_LBRC)
#define   AC_S14                  ACTION_MODS_KEY(MOD_LSFT,       KC_RBRC)
#define   AC_S15                  ACTION_MODS_KEY(MOD_LSFT,       KC_BSLS)
#define   AC_S16                  ACTION_MODS_KEY(MOD_LSFT,       KC_COMM)
#define   AC_S17                  ACTION_MODS_KEY(MOD_LSFT,       KC_DOT)
#define   AC_S18                  ACTION_MODS_KEY(MOD_LSFT,       KC_SLSH)
#define   AC_S19                  ACTION_MODS_KEY(MOD_LSFT,       KC_SCLN)
#define   AC_S20                  ACTION_MODS_KEY(MOD_LSFT,       KC_QUOT)
#define   AC_S21                  ACTION_MODS_KEY(MOD_LSFT,       KC_GRV)

#define   AC_PASS                 ACTION_MODS_KEY(MOD_LALT | MOD_LSFT | MOD_LGUI, KC_L)
#define   AC_LOCK                 ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT | MOD_LALT, KC_L)

const action_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = ACTIONMAP( \
    Q,          W,          E,          R,        T,         Y,         U,        I,          O,          P,        \
    A,          S,          D,          F,        G,         H,         J,        K,          L,          ENT,      \
    TM_Z_LCTL,  TM_X_LALT,  TM_C_LGUI,  TL_V_L1,  BSPACE,    SPACE,     TL_B_L3,  TL_N_L4,    TM_M_RGUI,  TM_RSHIFT_ESC),

    [1] = ACTIONMAP( \
    1,     2,     3,     4,     5,     6,     7,     8,     9,     0,      \
    TAB,   MINS,  EQL,   BSLS,  SLSH,  LBRC,  RBRC,  SCLN,  QUOT,  GRV,    \
    TRNS,  TRNS,  TRNS,  TRNS,  DEL,   TRNS,  TRNS,  COMM,  DOT,   TRNS),

    [2] = ACTIONMAP( \
    S01,   S02,   S03,   S04,   S05,   S06,   S07,   S08,   S09,   S10,    \
    TRNS,  S11,   S12,   S15,   S18,   S13,   S14,   S19,   S20,   S21,    \
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS),

    [3] = ACTIONMAP( \
    BTN1,  MS_U,  BTN2,  WH_D,  TRNS,  TRNS,  BLD,   BLI,   TRNS,  TRNS,   \
    MS_L,  MS_D,  MS_R,  WH_U,  TRNS,  LEFT,  DOWN,  UP,    RGHT,  TRNS,   \
    MPRV,  MPLY,  MSTP,  MNXT,  TRNS,  MUTE,  TRNS,  VOLD,  VOLU,  TRNS),

    [4] = ACTIONMAP( \
    F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,   \
    F11,   F12,   F13,   F14,   F15,   F16,   F17,   F18,   F19,   F20,   \
    BTLD,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  PASS,  LOCK)
};
