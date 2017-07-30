int a = 3;
int b = 2;
int c = 7;
int d = 8;
int e = 9;
int f = 4;
int g = 5;
int ponto = 6;
int tempo = 1000;

void clean(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(ponto, OUTPUT);
}

void write(int pinos[], int length){
  clean();
  for(int i = 0; i < length; i++) digitalWrite(pinos[i],LOW);
  delay(tempo);
}

void loop() {
  int n0[6] = {a,b,c,d,e,f};
  int n1[2] = {b,c};
  int n2[5] = {a,b,d,e,g};
  int n3[5] = {a,b,c,d,g};
  int n4[4] = {b,c,f,g};
  int n5[5] = {a,c,d,f,g};
  int n6[6] = {a,c,d,e,f,g};
  int n7[3] = {a,b,c};
  int n8[7] = {a,b,c,d,e,f,g};
  int n9[6] = {a,b,c,d,f,g};
  write(n0,6);
  write(n1,2);
  write(n2,5);
  write(n3,5);
  write(n4,4);
  write(n5,5);
  write(n6,6);
  write(n7,3);
  write(n8,7);
  write(n9,6);
}
