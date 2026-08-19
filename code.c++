// C++ code
//
int Led1 = 10, Led2 = 9, Botao1 = 5, Contagem = 0;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Botao1, INPUT);
}

void loop() {
  if (digitalRead(Botao1) == HIGH) {
    delay(100);

    while (digitalRead(Botao1) == HIGH) {
      delay(10);
    }

    Contagem++;

    if (Contagem > 3) {
      Contagem = 1;
    }

    if (Contagem == 1) {
      digitalWrite(Led1, HIGH);
      digitalWrite(Led2, LOW);
    } else if (Contagem == 2) {
      digitalWrite(Led1, LOW);
      digitalWrite(Led2, HIGH);
    } else if (Contagem == 3) {
      digitalWrite(Led1, LOW);
      digitalWrite(Led2, LOW);
    }
  }
}