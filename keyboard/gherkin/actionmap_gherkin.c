#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"


/*
 * Actions
 */
#define   AC_BLD                  ACTION_BACKLIGHT_DECREASE()
#define   AC_BLI                  ACTION_BACKLIGHT_INCREASE()

// Bottom Row
#define   AC_TM_LSHIFT_ESC        ACTION_MODS_TAP_KEY(MOD_LSFT,   KC_ESC)
#define   AC_TM_Z_LCTL            ACTION_MODS_TAP_KEY(MOD_LCTL,   KC_Z)
#define   AC_TM_X_LGUI            ACTION_MODS_TAP_KEY(MOD_LGUI,   KC_X)
#define   AC_TL_C_L1              ACTION_LAYER_TAP_KEY(1,         KC_C)
// Backspace
// Space
#define   AC_TL_V_L3              ACTION_LAYER_TAP_KEY(3,         KC_V)
#define   AC_TM_B_RALT            ACTION_MODS_TAP_KEY(MOD_RALT,   KC_B)
#define   AC_TM_N_RGUI            ACTION_MODS_TAP_KEY(MOD_RGUI,   KC_N)
#define   AC_TL_M_L4              ACTION_LAYER_TAP_KEY(4,         KC_M)

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

#define   AC_PASS                 ACTION_MODS_KEY(MOD_LALT | MOD_LSFT | MOD_LGUI, KC_BSLS)
#define   AC_LOCK                 ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT | MOD_LALT, KC_L)
#define   AC_MOOM                 ACTION_MODS_KEY(MOD_LSFT | MOD_LGUI, KC_BSLS)
#define   AC_CLIP                 ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_BSLS)

const action_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = ACTIONMAP(\
    Q,                  W,          E,          R,          T,       Y,      U,        I,         O,          P,           \
    A,                  S,          D,          F,          G,       H,      J,        K,         L,          ENT,         \
    TM_LSHIFT_ESC,      TM_Z_LCTL,  TM_X_LGUI,  TL_C_L1,    BSPACE,  SPACE,  TL_V_L3,  TM_B_RALT, TM_N_RGUI,  TL_M_L4),

    // Up / Layer 1
    [1] = ACTIONMAP(\
    1,                  2,          3,          4,          5,       6,      7,        8,        9,        0,           \
    TAB,                MINS,       EQL,        BSLS,       SLSH,    LBRC,   RBRC,     SCLN,     QUOT,     GRV,         \
    TRNS,               TRNS,       TRNS,       TRNS,       DEL,     TRNS,   TRNS,     COMM,     DOT,      TRNS),

    // Down / Layer 3
    [3] = ACTIONMAP(\
    BTN1,               MS_U,       BTN2,       WH_D,       TRNS,    TRNS,   BLD,      BLI,      TRNS,     TRNS,        \
    MS_L,               MS_D,       MS_R,       WH_U,       TRNS,    LEFT,   DOWN,     UP,       RGHT,     TRNS,        \
    TRNS,               MPRV,       MPLY,       MSTP,       MNXT,    MUTE,   TRNS,     VOLD,     VOLU,     TRNS),

    // FN / Layer 4
    [4] = ACTIONMAP(\
    F1,                 F2,         F3,         F4,         F5,      F6,     F7,       F8,       F9,       F10,         \
    F11,                F12,        F13,        F14,        F15,     F16,    F17,      F18,      F19,      F20,         \
    TRNS,               TRNS,       TRNS,       TRNS,       TRNS,    CLIP,   MOOM,     PASS,     LOCK,     TRNS)
};
