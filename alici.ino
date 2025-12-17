int gelenDizi[4];
int index = 0;

void veriAl(Stream &alici) {
  if (alici.available()) {
    int okunan = alici.parseInt();

    // 0 gelirse YOK SAY
    if (okunan == 0) {
      return;
    }

    gelenDizi[index] = okunan;
    index++;

    if (index == 4) {
      Serial.print("gelen veri: ");

      for (int i = 0; i < 4; i++) {
        Serial.print(gelenDizi[i]);
        if (i < 3) {
          Serial.print(", ");
        }
      }

      Serial.println();
      index = 0;
    }
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  veriAl(Serial);
}
