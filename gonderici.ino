int dizi[] = {543, 783, 231, 23};
int elemanSayisi = 4;

void veriGonder(Stream &gonderici) {
  for (int i = 0; i < elemanSayisi; i++) {
    gonderici.println(dizi[i]);
    delay(500);
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  veriGonder(Serial);
  delay(3000);
}
