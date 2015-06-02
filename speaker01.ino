const int loudspeaker_pin = 13;
const int base_time = 16 * 4;//16の倍数が都合がいい

void setup() {
  // put your setup code here, to run once:
  pinMode(loudspeaker_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 440);
  delay(base_time / 16);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 440);
  delay(base_time / 16);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 440);
  delay(base_time / 16);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 494);
  delay(base_time / 4);
  tone(loudspeaker_pin, 247);
  delay(base_time / 8);
  tone(loudspeaker_pin, 370);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 247);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 494);
  delay(base_time / 16);
  tone(loudspeaker_pin, 494);
  delay(base_time / 4);
}
