// incomplete - not a program

// relegated to another program that handles 
// the ansi stuff (running on the 'terminal'
// target Trinket M0).

// (if memory serves; unverified on 01 Aug 2019)

  Serial.print("\033\133"); // ESC [
  Serial.print("\063\063"); // 33 - yellow fg
  Serial.print("m");        // for the stanza

  Serial.print("\033\133"); // ESC [
  Serial.print("\064\064"); // 44 - blue bg
  Serial.print("m");        // for the stanza

    Serial.print("\033\133"); // ESC [
    Serial.print("\064\060"); // 40 - black bg
    Serial.print("m");        // for the stanza

