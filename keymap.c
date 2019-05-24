#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define L1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



  /* BASE
   * ,------------------------------------------------.   									,-------------------------------------------------.
	 * |  `   |   Q  |   W  |   E  |   R  |  T   |	\   |   									|  LAlt |  Y   |  U   |  I   |   O  |   P  |   ]  |
	 * |  ~	  |			 |			|			 |      |      |  |   |											|	 		  |			 |			|      |			|			 |	 }	|
   * |------+------+------+------+------+------+------|   									|--------------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   F  |  G   | ESC  |   									|   [   |  H   |   J  |   K  |   L  |   ;  |  '   |
	 * |			|			 |			|			 |      |      |      |											|	  {  	|			 |			|      |			|		:	 |	"  	|
   * |------+------+------+------+------+------+------|   									|-------|------+------+------+------+------+------|
   * | LAlt | L1   |   Z  |   X  |   C  |   V  |  B   |   									| L1    |  N   |  M   |   ,  |   .  |   /  | LALT |
	 * |			|			 |			|			 |      |      |      |											|	 		  |			 |			|   <  |	>		|		?	 |	  	|
   * |------+------+------+------+------+------+------|   									|-------+------+------+------+------+------+------|
   * |      |      |      |      | LSft | LCtrl|Space |   									| Space | LSft |  L1  |      |			|      |      |
   * `------------------------------------------------'   									`-------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_GRV,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_BSLS,  /* | */ KC_LALT, KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,    KC_RBRC,  \
    KC_TAB ,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_ESC,   /* | */ KC_LBRC,  KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN, KC_QUOT, \
    KC_LALT,  MO(L1),  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     /* | */ MO(L1), KC_N,    KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, KC_LALT, \
    XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  KC_LSFT, KC_LCTL, KC_SPC,  /* | */ KC_SPC,  KC_LSFT, MO(L1),	  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX \
 	),

  /* L1
   * ,-----------------------------------------------.   									,------------------------------------------------.
   * |      |  1  |   2  |   3  |   4  |   5  |      |   									|   6   |  7   |   8  |   9  |   0  |   -  |  =   |
   * |      |  !  |   @  |   #  |   $  |   %  |      |   									|   ^   |  &   |   *  |   (  |   )  |   _  |  +   |
   * |------+-----+------+------+------+------+------|   									|--------------+------+------+------+------+------|
   * | Enter|     |      | DEL  |   ~  |   %  | ESC  |   									|       | Left | Down | Up   | Right|      |      |
	 * |			|			|			 |			|      |      |      |									  |	    	|			 |			|      |			|			 |	  	|
   * |------+-----+------+------+------+------+------|   									|-------+------+------+------+------+------+------|
   * | LAlt | @@@ |      |  {   |  }   |	^	  |  $   |	   								|  @@@  | 		 | 		  |			 |      |      | LAlt |
   * |------+-----+------+------+------+------+------|   									|-------+------+------+------+------+------+------|
   * |      |     |      |      | LSft | LCtrl|Space |   									| Space | LSft | @@@  |      |			|      |      |
   * `-----------------------------------------------'   									`------------------------------------------------'
   */
  [L1] = LAYOUT( \
    XXXXXXX, KC_1,    KC_2,    KC_3,    	 KC_4,       KC_5,    XXXXXXX,  /* | */  KC_6,		 KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  \
    KC_ENT,  XXXXXXX, XXXXXXX, KC_DELT, 	 S(KC_GRV),  S(KC_5), _______,  /* | */  XXXXXXX,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
    _______, _______, XXXXXXX, S(KC_LBRC), S(KC_RBRC), S(KC_6), S(KC_4),  /* | */  _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, _______, _______, _______, 	 _______, 	 _______, _______,  /* | */  _______,  _______, _______, _______, _______, _______, _______ \
  ),


};

