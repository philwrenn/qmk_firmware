#include QMK_KEYBOARD_H

typedef struct {
    bool is_press_action;
    uint8_t state;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP, // Send two single taps
    TRIPLE_TAP,
    TRIPLE_HOLD
};

enum {
    TD_A,
    TD_B,
    TD_C,
    TD_D,
    TD_E,
    TD_F,
    TD_G,
    TD_H,
    TD_I,
    TD_J,
    TD_K,
    TD_L,
    TD_M,
    TD_N,
    TD_O,
    TD_P,
    TD_Q,
    TD_R,
    TD_S,
    TD_T,
    TD_U,
    TD_V,
    TD_W,
    TD_X,
    TD_Y,
    TD_Z,
};

uint8_t cur_dance(qk_tap_dance_state_t *state);

void a_finished(qk_tap_dance_state_t *state, void *user_data);
void a_reset(qk_tap_dance_state_t *state, void *user_data);

void b_finished(qk_tap_dance_state_t *state, void *user_data);
void b_reset(qk_tap_dance_state_t *state, void *user_data);

void c_finished(qk_tap_dance_state_t *state, void *user_data);
void c_reset(qk_tap_dance_state_t *state, void *user_data);

void d_finished(qk_tap_dance_state_t *state, void *user_data);
void d_reset(qk_tap_dance_state_t *state, void *user_data);

void e_finished(qk_tap_dance_state_t *state, void *user_data);
void e_reset(qk_tap_dance_state_t *state, void *user_data);

void f_finished(qk_tap_dance_state_t *state, void *user_data);
void f_reset(qk_tap_dance_state_t *state, void *user_data);

void g_finished(qk_tap_dance_state_t *state, void *user_data);
void g_reset(qk_tap_dance_state_t *state, void *user_data);

void h_finished(qk_tap_dance_state_t *state, void *user_data);
void h_reset(qk_tap_dance_state_t *state, void *user_data);

void i_finished(qk_tap_dance_state_t *state, void *user_data);
void i_reset(qk_tap_dance_state_t *state, void *user_data);

void j_finished(qk_tap_dance_state_t *state, void *user_data);
void j_reset(qk_tap_dance_state_t *state, void *user_data);

void k_finished(qk_tap_dance_state_t *state, void *user_data);
void k_reset(qk_tap_dance_state_t *state, void *user_data);

void l_finished(qk_tap_dance_state_t *state, void *user_data);
void l_reset(qk_tap_dance_state_t *state, void *user_data);

void m_finished(qk_tap_dance_state_t *state, void *user_data);
void m_reset(qk_tap_dance_state_t *state, void *user_data);

void n_finished(qk_tap_dance_state_t *state, void *user_data);
void n_reset(qk_tap_dance_state_t *state, void *user_data);

void o_finished(qk_tap_dance_state_t *state, void *user_data);
void o_reset(qk_tap_dance_state_t *state, void *user_data);

void p_finished(qk_tap_dance_state_t *state, void *user_data);
void p_reset(qk_tap_dance_state_t *state, void *user_data);

void q_finished(qk_tap_dance_state_t *state, void *user_data);
void q_reset(qk_tap_dance_state_t *state, void *user_data);

void r_finished(qk_tap_dance_state_t *state, void *user_data);
void r_reset(qk_tap_dance_state_t *state, void *user_data);

void s_finished(qk_tap_dance_state_t *state, void *user_data);
void s_reset(qk_tap_dance_state_t *state, void *user_data);

void t_finished(qk_tap_dance_state_t *state, void *user_data);
void t_reset(qk_tap_dance_state_t *state, void *user_data);

void u_finished(qk_tap_dance_state_t *state, void *user_data);
void u_reset(qk_tap_dance_state_t *state, void *user_data);

void v_finished(qk_tap_dance_state_t *state, void *user_data);
void v_reset(qk_tap_dance_state_t *state, void *user_data);

void w_finished(qk_tap_dance_state_t *state, void *user_data);
void w_reset(qk_tap_dance_state_t *state, void *user_data);

void x_finished(qk_tap_dance_state_t *state, void *user_data);
void x_reset(qk_tap_dance_state_t *state, void *user_data);

void y_finished(qk_tap_dance_state_t *state, void *user_data);
void y_reset(qk_tap_dance_state_t *state, void *user_data);

void z_finished(qk_tap_dance_state_t *state, void *user_data);
void z_reset(qk_tap_dance_state_t *state, void *user_data);

enum layer_names {
    _QW,
    _RS,
    _LW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    TD(TD_Q),  TD(TD_W),  TD(TD_E),  TD(TD_R),  TD(TD_T),                      TD(TD_Y),  TD(TD_U),  TD(TD_I),  TD(TD_O),  TD(TD_P),
    TD(TD_A),  TD(TD_S),  TD(TD_D),  TD(TD_F),  TD(TD_G),                      TD(TD_H),  TD(TD_J),  TD(TD_K),  TD(TD_L),  KC_SCLN ,
    TD(TD_Z),  TD(TD_X),  TD(TD_C),  TD(TD_V),  TD(TD_B),  KC_GRV,   KC_BSLS,  TD(TD_N),  TD(TD_M),  KC_COMM,   KC_DOT,    KC_SLSH ,
    KC_ESC,    KC_TAB,    KC_LGUI,   KC_LSFT,   KC_BSPC,   KC_LCTL,  KC_LALT,  KC_SPC,    MO(_RS),   KC_MINS,   KC_QUOT,   KC_ENT ),

  /*
   *  !       @     up     {    }        ||     pgup    7     8     9    *
   *  #     left   down  right  $        ||     pgdn    4     5     6    +
   *  [       ]      (     )    &        ||       `     1     2     3    \
   * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
    KC_EXLM, KC_AT,   KC_UP,   KC_DLR,  KC_PERC,                  KC_PGUP, KC_7,    KC_8,   KC_9, KC_BSPC,
    KC_LPRN, KC_LEFT, KC_DOWN, KC_RGHT, KC_RPRN,                  KC_PGDN, KC_4,    KC_5,   KC_6, KC_BSLS,
    KC_LBRC, KC_RBRC, KC_HASH, KC_LCBR, KC_RCBR, KC_CIRC, KC_AMPR,KC_ASTR, KC_1,    KC_2,   KC_3, KC_PLUS,
    TG(_LW), KC_INS,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT,KC_SPC,  KC_TRNS, KC_DOT, KC_0, KC_EQL ),
  /*
   * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
   *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
   *       volup             reset      ||             F1    F2    F3   F12
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,   KC_F6,   KC_F11  ,
    KC_NO,   KC_VOLU, KC_NO,   KC_NO,   RESET,   _______, _______, KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12  ,
    KC_NO,   KC_VOLD, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  TO(_QW), KC_PSCR, KC_SLCK, KC_PAUS )
};

uint8_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        // DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TRIPLE_SINGLE_TAP', and define that enum just like 'DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TRIPLE_TAP;
        else return TRIPLE_HOLD;
    } else return 8; // Magic number. At some point this method will expand to work for more presses
}


// A

static tap atap_state = {
    .is_press_action = true,
    .state = 0
};

void a_finished(qk_tap_dance_state_t *state, void *user_data) {
    atap_state.state = cur_dance(state);
    switch (atap_state.state) {
        case SINGLE_TAP: register_code(KC_A); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_A)); break;
        case DOUBLE_TAP: register_code(KC_A); register_code(KC_A); break;
        case TRIPLE_TAP: register_code(KC_A); register_code(KC_A); register_code(KC_A); break;
    }
}

void a_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (atap_state.state) {
        case SINGLE_TAP: unregister_code(KC_A); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_A)); break;
        case DOUBLE_TAP: unregister_code(KC_A); unregister_code(KC_A); break;
        case TRIPLE_TAP: unregister_code(KC_A); unregister_code(KC_A); unregister_code(KC_A); break;
    }
    atap_state.state = 0;
}

// B

static tap btap_state = {
    .is_press_action = true,
    .state = 0
};

void b_finished(qk_tap_dance_state_t *state, void *user_data) {
    btap_state.state = cur_dance(state);
    switch (btap_state.state) {
        case SINGLE_TAP: register_code(KC_B); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_B)); break;
        case DOUBLE_TAP: register_code(KC_B); register_code(KC_B); break;
        case TRIPLE_TAP: register_code(KC_B); register_code(KC_B); register_code(KC_B); break;
    }
}

void b_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (btap_state.state) {
        case SINGLE_TAP: unregister_code(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_B)); break;
        case DOUBLE_TAP: unregister_code(KC_B); unregister_code(KC_B); break;
        case TRIPLE_TAP: unregister_code(KC_B); unregister_code(KC_B); unregister_code(KC_B); break;
    }
    btap_state.state = 0;
}

// C

static tap ctap_state = {
    .is_press_action = true,
    .state = 0
};

void c_finished(qk_tap_dance_state_t *state, void *user_data) {
    ctap_state.state = cur_dance(state);
    switch (ctap_state.state) {
        case SINGLE_TAP: register_code(KC_C); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code(KC_C); register_code(KC_C); break;
        case TRIPLE_TAP: register_code(KC_C); register_code(KC_C); register_code(KC_C); break;
    }
}

void c_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ctap_state.state) {
        case SINGLE_TAP: unregister_code(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code(KC_C); unregister_code(KC_C); break;
        case TRIPLE_TAP: unregister_code(KC_C); unregister_code(KC_C); unregister_code(KC_C); break;
    }
    ctap_state.state = 0;
}

// D

static tap dtap_state = {
    .is_press_action = true,
    .state = 0
};

void d_finished(qk_tap_dance_state_t *state, void *user_data) {
    dtap_state.state = cur_dance(state);
    switch (dtap_state.state) {
        case SINGLE_TAP: register_code(KC_D); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_D)); break;
        case DOUBLE_TAP: register_code(KC_D); register_code(KC_D); break;
        case TRIPLE_TAP: register_code(KC_D); register_code(KC_D); register_code(KC_D); break;
    }
}

void d_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (dtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_D); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_D)); break;
        case DOUBLE_TAP: unregister_code(KC_D); unregister_code(KC_D); break;
        case TRIPLE_TAP: unregister_code(KC_D); unregister_code(KC_D); unregister_code(KC_D); break;
    }
    dtap_state.state = 0;
}

// E

static tap etap_state = {
    .is_press_action = true,
    .state = 0
};

void e_finished(qk_tap_dance_state_t *state, void *user_data) {
    etap_state.state = cur_dance(state);
    switch (etap_state.state) {
        case SINGLE_TAP: register_code(KC_E); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_E)); break;
        case DOUBLE_TAP: register_code(KC_E); register_code(KC_E); break;
        case TRIPLE_TAP: register_code(KC_E); register_code(KC_E); register_code(KC_E); break;
    }
}

void e_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (etap_state.state) {
        case SINGLE_TAP: unregister_code(KC_E); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_E)); break;
        case DOUBLE_TAP: unregister_code(KC_E); unregister_code(KC_E); break;
        case TRIPLE_TAP: unregister_code(KC_E); unregister_code(KC_E); unregister_code(KC_E); break;
    }
    etap_state.state = 0;
}

// F

static tap ftap_state = {
    .is_press_action = true,
    .state = 0
};

void f_finished(qk_tap_dance_state_t *state, void *user_data) {
    ftap_state.state = cur_dance(state);
    switch (ftap_state.state) {
        case SINGLE_TAP: register_code(KC_F); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: register_code(KC_F); register_code(KC_F); break;
        case TRIPLE_TAP: register_code(KC_F); register_code(KC_F); register_code(KC_F); break;
    }
}

void f_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ftap_state.state) {
        case SINGLE_TAP: unregister_code(KC_F); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: unregister_code(KC_F); unregister_code(KC_F); break;
        case TRIPLE_TAP: unregister_code(KC_F); unregister_code(KC_F); unregister_code(KC_F); break;

    }
    ftap_state.state = 0;
}

// G

static tap gtap_state = {
    .is_press_action = true,
    .state = 0
};

void g_finished(qk_tap_dance_state_t *state, void *user_data) {
    gtap_state.state = cur_dance(state);
    switch (gtap_state.state) {
        case SINGLE_TAP: register_code(KC_G); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_G)); break;
        case DOUBLE_TAP: register_code(KC_G); register_code(KC_G); break;
        case TRIPLE_TAP: register_code(KC_G); register_code(KC_G); register_code(KC_G); break;
    }
}

void g_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (gtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_G); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_G)); break;
        case DOUBLE_TAP: unregister_code(KC_G); unregister_code(KC_G); break;
        case TRIPLE_TAP: unregister_code(KC_G); unregister_code(KC_G); unregister_code(KC_G); break;
    }
    gtap_state.state = 0;
}

// H

static tap htap_state = {
    .is_press_action = true,
    .state = 0
};

void h_finished(qk_tap_dance_state_t *state, void *user_data) {
    htap_state.state = cur_dance(state);
    switch (htap_state.state) {
        case SINGLE_TAP: register_code(KC_H); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_H)); break;
        case DOUBLE_TAP: register_code(KC_H); register_code(KC_H); break;
        case TRIPLE_TAP: register_code(KC_H); register_code(KC_H); register_code(KC_H); break;
    }
}

void h_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (htap_state.state) {
        case SINGLE_TAP: unregister_code(KC_H); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_H)); break;
        case DOUBLE_TAP: unregister_code(KC_H); unregister_code(KC_H); break;
        case TRIPLE_TAP: unregister_code(KC_H); unregister_code(KC_H); unregister_code(KC_H); break;
    }
    htap_state.state = 0;
}

// I

static tap itap_state = {
    .is_press_action = true,
    .state = 0
};

void i_finished(qk_tap_dance_state_t *state, void *user_data) {
    itap_state.state = cur_dance(state);
    switch (itap_state.state) {
        case SINGLE_TAP: register_code(KC_I); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_I)); break;
        case DOUBLE_TAP: register_code(KC_I); register_code(KC_I); break;
        case TRIPLE_TAP: register_code(KC_I); register_code(KC_I); register_code(KC_I); break;
    }
}

void i_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (itap_state.state) {
        case SINGLE_TAP: unregister_code(KC_I); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_I)); break;
        case DOUBLE_TAP: unregister_code(KC_I); unregister_code(KC_I); break;
        case TRIPLE_TAP: unregister_code(KC_I); unregister_code(KC_I); unregister_code(KC_I); break;
    }
    itap_state.state = 0;
}

// J

static tap jtap_state = {
    .is_press_action = true,
    .state = 0
};

void j_finished(qk_tap_dance_state_t *state, void *user_data) {
    jtap_state.state = cur_dance(state);
    switch (jtap_state.state) {
        case SINGLE_TAP: register_code(KC_J); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_J)); break;
        case DOUBLE_TAP: register_code(KC_J); register_code(KC_J); break;
        case TRIPLE_TAP: register_code(KC_J); register_code(KC_J); register_code(KC_J); break;
    }
}

void j_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (jtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_J); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_J)); break;
        case DOUBLE_TAP: unregister_code(KC_J); unregister_code(KC_J); break;
        case TRIPLE_TAP: unregister_code(KC_J); unregister_code(KC_J); unregister_code(KC_J); break;
    }
    jtap_state.state = 0;
}

// K

static tap ktap_state = {
    .is_press_action = true,
    .state = 0
};

void k_finished(qk_tap_dance_state_t *state, void *user_data) {
    ktap_state.state = cur_dance(state);
    switch (ktap_state.state) {
        case SINGLE_TAP: register_code(KC_K); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_K)); break;
        case DOUBLE_TAP: register_code(KC_K); register_code(KC_K); break;
        case TRIPLE_TAP: register_code(KC_K); register_code(KC_K); register_code(KC_K); break;

    }
}

void k_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ktap_state.state) {
        case SINGLE_TAP: unregister_code(KC_K); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_K)); break;
        case DOUBLE_TAP: unregister_code(KC_K); unregister_code(KC_K); break;
        case TRIPLE_TAP: unregister_code(KC_K); unregister_code(KC_K); unregister_code(KC_K); break;
    }
    ktap_state.state = 0;
}

// L

static tap ltap_state = {
    .is_press_action = true,
    .state = 0
};

void l_finished(qk_tap_dance_state_t *state, void *user_data) {
    ltap_state.state = cur_dance(state);
    switch (ltap_state.state) {
        case SINGLE_TAP: register_code(KC_L); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_L)); break;
        case DOUBLE_TAP: register_code(KC_L); register_code(KC_L); break;
        case TRIPLE_TAP: register_code(KC_L); register_code(KC_L); register_code(KC_L); break;
    }
}

void l_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ltap_state.state) {
        case SINGLE_TAP: unregister_code(KC_L); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_L)); break;
        case DOUBLE_TAP: unregister_code(KC_L); unregister_code(KC_L); break;
        case TRIPLE_TAP: unregister_code(KC_L); unregister_code(KC_L); unregister_code(KC_L); break;
    }
    ltap_state.state = 0;
}

// M

static tap mtap_state = {
    .is_press_action = true,
    .state = 0
};

void m_finished(qk_tap_dance_state_t *state, void *user_data) {
    mtap_state.state = cur_dance(state);
    switch (mtap_state.state) {
        case SINGLE_TAP: register_code(KC_M); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_M)); break;
        case DOUBLE_TAP: register_code(KC_M); register_code(KC_M); break;
        case TRIPLE_TAP: register_code(KC_M); register_code(KC_M); register_code(KC_M); break;
    }
}

void m_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (mtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_M); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_M)); break;
        case DOUBLE_TAP: unregister_code(KC_M); unregister_code(KC_M); break;
        case TRIPLE_TAP: unregister_code(KC_M); unregister_code(KC_M); unregister_code(KC_M); break;
    }
    mtap_state.state = 0;
}

// N

static tap ntap_state = {
    .is_press_action = true,
    .state = 0
};

void n_finished(qk_tap_dance_state_t *state, void *user_data) {
    ntap_state.state = cur_dance(state);
    switch (ntap_state.state) {
        case SINGLE_TAP: register_code(KC_N); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_N)); break;
        case DOUBLE_TAP: register_code(KC_N); register_code(KC_N); break;
        case TRIPLE_TAP: register_code(KC_N); register_code(KC_N); register_code(KC_N); break;
    }
}

void n_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ntap_state.state) {
        case SINGLE_TAP: unregister_code(KC_N); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_N)); break;
        case DOUBLE_TAP: unregister_code(KC_N); unregister_code(KC_N); break;
        case TRIPLE_TAP: unregister_code(KC_N); unregister_code(KC_N); unregister_code(KC_N); break;
    }
    ntap_state.state = 0;
}

// O

static tap otap_state = {
    .is_press_action = true,
    .state = 0
};

void o_finished(qk_tap_dance_state_t *state, void *user_data) {
    otap_state.state = cur_dance(state);
    switch (otap_state.state) {
        case SINGLE_TAP: register_code(KC_O); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_O)); break;
        case DOUBLE_TAP: register_code(KC_O); register_code(KC_O); break;
        case TRIPLE_TAP: register_code(KC_O); register_code(KC_O); register_code(KC_O); break;
    }
}

void o_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (otap_state.state) {
        case SINGLE_TAP: unregister_code(KC_O); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_O)); break;
        case DOUBLE_TAP: unregister_code(KC_O); unregister_code(KC_O); break;
        case TRIPLE_TAP: unregister_code(KC_O); unregister_code(KC_O); unregister_code(KC_O); break;
    }
    otap_state.state = 0;
}

// P

static tap ptap_state = {
    .is_press_action = true,
    .state = 0
};

void p_finished(qk_tap_dance_state_t *state, void *user_data) {
    ptap_state.state = cur_dance(state);
    switch (ptap_state.state) {
        case SINGLE_TAP: register_code(KC_P); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_P)); break;
        case DOUBLE_TAP: register_code(KC_P); register_code(KC_P); break;
        case TRIPLE_TAP: register_code(KC_P); register_code(KC_P); register_code(KC_P); break;
    }
}

void p_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ptap_state.state) {
        case SINGLE_TAP: unregister_code(KC_P); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_P)); break;
        case DOUBLE_TAP: unregister_code(KC_P); unregister_code(KC_P); break;
        case TRIPLE_TAP: unregister_code(KC_P); unregister_code(KC_P); unregister_code(KC_P); break;
    }
    ptap_state.state = 0;
}

// Q

static tap qtap_state = {
    .is_press_action = true,
    .state = 0
};

void q_finished(qk_tap_dance_state_t *state, void *user_data) {
    qtap_state.state = cur_dance(state);
    switch (qtap_state.state) {
        case SINGLE_TAP: register_code(KC_Q); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Q)); break;
        case DOUBLE_TAP: register_code(KC_Q); register_code(KC_Q); break;
        case TRIPLE_TAP: register_code(KC_Q); register_code(KC_Q); register_code(KC_Q); break;
    }
}

void q_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (qtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_Q); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Q)); break;
        case DOUBLE_TAP: unregister_code(KC_Q); unregister_code(KC_Q); break;
        case TRIPLE_TAP: unregister_code(KC_Q); unregister_code(KC_Q); unregister_code(KC_Q); break;
    }
    qtap_state.state = 0;
}

// R

static tap rtap_state = {
    .is_press_action = true,
    .state = 0
};

void r_finished(qk_tap_dance_state_t *state, void *user_data) {
    rtap_state.state = cur_dance(state);
    switch (rtap_state.state) {
        case SINGLE_TAP: register_code(KC_R); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_R)); break;
        case DOUBLE_TAP: register_code(KC_R); register_code(KC_R); break;
        case TRIPLE_TAP: register_code(KC_R); register_code(KC_R); register_code(KC_R); break;
    }
}

void r_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (rtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_R); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_R)); break;
        case DOUBLE_TAP: unregister_code(KC_R); unregister_code(KC_R); break;
        case TRIPLE_TAP: unregister_code(KC_R); unregister_code(KC_R); unregister_code(KC_R); break;
    }
    rtap_state.state = 0;
}

// S

static tap stap_state = {
    .is_press_action = true,
    .state = 0
};

void s_finished(qk_tap_dance_state_t *state, void *user_data) {
    stap_state.state = cur_dance(state);
    switch (stap_state.state) {
        case SINGLE_TAP: register_code(KC_S); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: register_code(KC_S); register_code(KC_S); break;
        case TRIPLE_TAP: register_code(KC_S); register_code(KC_S); register_code(KC_S); break;
    }
}

void s_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (stap_state.state) {
        case SINGLE_TAP: unregister_code(KC_S); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: unregister_code(KC_S); unregister_code(KC_S); break;
        case TRIPLE_TAP: unregister_code(KC_S); unregister_code(KC_S); unregister_code(KC_S); break;
    }
    stap_state.state = 0;
}

// T

static tap ttap_state = {
    .is_press_action = true,
    .state = 0
};

void t_finished(qk_tap_dance_state_t *state, void *user_data) {
    ttap_state.state = cur_dance(state);
    switch (ttap_state.state) {
        case SINGLE_TAP: register_code(KC_T); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_T)); break;
        case DOUBLE_TAP: register_code(KC_T); register_code(KC_T); break;
        case TRIPLE_TAP: register_code(KC_T); register_code(KC_T); register_code(KC_T); break;
    }
}

void t_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ttap_state.state) {
        case SINGLE_TAP: unregister_code(KC_T); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_T)); break;
        case DOUBLE_TAP: unregister_code(KC_T); unregister_code(KC_T); break;
        case TRIPLE_TAP: unregister_code(KC_T); unregister_code(KC_T); unregister_code(KC_T); break;
    }
    ttap_state.state = 0;
}

// U

static tap utap_state = {
    .is_press_action = true,
    .state = 0
};

void u_finished(qk_tap_dance_state_t *state, void *user_data) {
    utap_state.state = cur_dance(state);
    switch (utap_state.state) {
        case SINGLE_TAP: register_code(KC_U); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: register_code(KC_U); register_code(KC_U); break;
        case TRIPLE_TAP: register_code(KC_U); register_code(KC_U); register_code(KC_U); break;
    }
}

void u_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (utap_state.state) {
        case SINGLE_TAP: unregister_code(KC_U); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: unregister_code(KC_U); unregister_code(KC_U); break;
        case TRIPLE_TAP: unregister_code(KC_U); unregister_code(KC_U); unregister_code(KC_U); break;
    }
    utap_state.state = 0;
}

// V

static tap vtap_state = {
    .is_press_action = true,
    .state = 0
};

void v_finished(qk_tap_dance_state_t *state, void *user_data) {
    vtap_state.state = cur_dance(state);
    switch (vtap_state.state) {
        case SINGLE_TAP: register_code(KC_V); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code(KC_V); register_code(KC_V); break;
        case TRIPLE_TAP: register_code(KC_V); register_code(KC_V); register_code(KC_V); break;
    }
}

void v_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (vtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code(KC_V); unregister_code(KC_V); break;
        case TRIPLE_TAP: unregister_code(KC_V); unregister_code(KC_V); unregister_code(KC_V); break;
    }
    vtap_state.state = 0;
}

// W

static tap wtap_state = {
    .is_press_action = true,
    .state = 0
};

void w_finished(qk_tap_dance_state_t *state, void *user_data) {
    wtap_state.state = cur_dance(state);
    switch (wtap_state.state) {
        case SINGLE_TAP: register_code(KC_W); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_W)); break;
        case DOUBLE_TAP: register_code(KC_W); register_code(KC_W); break;
        case TRIPLE_TAP: register_code(KC_W); register_code(KC_W); register_code(KC_W); break;
    }
}

void w_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (wtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_W); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_W)); break;
        case DOUBLE_TAP: unregister_code(KC_W); unregister_code(KC_W); break;
        case TRIPLE_TAP: unregister_code(KC_W); unregister_code(KC_W); unregister_code(KC_W); break;
    }
    wtap_state.state = 0;
}

// X

static tap xtap_state = {
    .is_press_action = true,
    .state = 0
};

void x_finished(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: register_code(KC_X); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code(KC_X); register_code(KC_X); break;
        case TRIPLE_TAP: register_code(KC_X); register_code(KC_X); register_code(KC_X); break;
    }
}

void x_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code(KC_X); unregister_code(KC_X); break;
        case TRIPLE_TAP: unregister_code(KC_X); unregister_code(KC_X); unregister_code(KC_X); break;
    }
    xtap_state.state = 0;
}

// Y

static tap ytap_state = {
    .is_press_action = true,
    .state = 0
};

void y_finished(qk_tap_dance_state_t *state, void *user_data) {
    ytap_state.state = cur_dance(state);
    switch (ytap_state.state) {
        case SINGLE_TAP: register_code(KC_Y); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code(KC_Y); register_code(KC_Y); break;
        case TRIPLE_TAP: register_code(KC_Y); register_code(KC_Y); register_code(KC_Y); break;
    }
}

void y_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ytap_state.state) {
        case SINGLE_TAP: unregister_code(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code(KC_Y); unregister_code(KC_Y); break;
        case TRIPLE_TAP: unregister_code(KC_Y); unregister_code(KC_Y); unregister_code(KC_Y); break;
    }
    ytap_state.state = 0;
}

// Z

static tap ztap_state = {
    .is_press_action = true,
    .state = 0
};

void z_finished(qk_tap_dance_state_t *state, void *user_data) {
    ztap_state.state = cur_dance(state);
    switch (ztap_state.state) {
        case SINGLE_TAP: register_code(KC_Z); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code(KC_Z); register_code(KC_Z); break;
        case TRIPLE_TAP: register_code(KC_Z); register_code(KC_Z); register_code(KC_Z); break;
    }
}

void z_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (ztap_state.state) {
        case SINGLE_TAP: unregister_code(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code(KC_Z); unregister_code(KC_Z); break;
        case TRIPLE_TAP: unregister_code(KC_Z); unregister_code(KC_Z); unregister_code(KC_Z); break;
    }
    ztap_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_A] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, a_finished, a_reset),
    [TD_B] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, b_finished, b_reset),
    [TD_C] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, c_finished, c_reset),
    [TD_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, d_finished, d_reset),
    [TD_E] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, e_finished, e_reset),
    [TD_F] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, f_finished, f_reset),
    [TD_G] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, g_finished, g_reset),
    [TD_H] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, h_finished, h_reset),
    [TD_I] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, i_finished, i_reset),
    [TD_J] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, j_finished, j_reset),
    [TD_K] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, k_finished, k_reset),
    [TD_L] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, l_finished, l_reset),
    [TD_M] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, m_finished, m_reset),
    [TD_N] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, n_finished, n_reset),
    [TD_O] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, o_finished, o_reset),
    [TD_P] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p_finished, p_reset),
    [TD_Q] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, q_finished, q_reset),
    [TD_R] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, r_finished, r_reset),
    [TD_S] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, s_finished, s_reset),
    [TD_T] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, t_finished, t_reset),
    [TD_U] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, u_finished, u_reset),
    [TD_V] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, v_finished, v_reset),
    [TD_W] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, w_finished, w_reset),
    [TD_X] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished, x_reset),
    [TD_Y] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, y_finished, y_reset),
    [TD_Z] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, z_finished, z_reset),
};
