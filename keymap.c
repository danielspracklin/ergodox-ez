// I still need to set KC_LEAD() somewhere.

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_TWO_KEYS(KC_G, KC_B) {
      // When I press KC_LEAD and then G and B, this sends "group_by"
      SEND_STRING("group_by");
    }
  }
}
