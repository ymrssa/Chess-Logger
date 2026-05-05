#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C mon(0x27, 16, 2);

int d0 = 6;
int d1 = 5;
int d2 = 4;
int d3 = 3;
int d4 = 2;

String bnw_move[2] = {"", ""};
int x = 0;
bool black_to_move = 0;

void setup() {
  mon.init();
  mon.backlight();
  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  pinMode(d3, INPUT);
  pinMode(d4, INPUT);

  mon.print("W       B");
  mon.setCursor(0, 1);
}

void clear_line(){
  mon.setCursor(0, 0);
  mon.print("                ");
  mon.setCursor(0, 0);
  mon.print(bnw_move[0]);
  mon.setCursor(8, 0);
  mon.print(bnw_move[1]);
  mon.setCursor(0, 1);
  mon.print("                ");
  mon.setCursor(0, 1);
  bnw_move[0] = "";
  bnw_move[1] = "";
}

void loop(){
  mon.setCursor(x, 1);
  //1 :: 1
  if(!digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("1");
    x++;
    if(black_to_move){
    bnw_move[1] += "1";
    }
    else{
    bnw_move[0] += "1";
    }
  }

  //2 :: 2
  if(!digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("2");
    x++;
    if(black_to_move){
    bnw_move[1] += "2";
    }
    else{
    bnw_move[0] += "2";
    }
  }
  
  //3 :: 3
  if(!digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("3");
    x++;
    if(black_to_move){
    bnw_move[1] += "3";
    }
    else{
    bnw_move[0] += "3";
    }
  }

  //4 :: 4
  if(!digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("4");
    x++;
    if(black_to_move){
    bnw_move[1] += "4";
    }
    else{
    bnw_move[0] += "4";
    }
  }

  //5 :: 5
  if(!digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("5");
    x++;
    if(black_to_move){
    bnw_move[1] += "5";
    }
    else{
    bnw_move[0] += "5";
    }
  }

  //6 :: 6
  if(!digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("6");
    x++;
    if(black_to_move){
    bnw_move[1] += "6";
    }
    else{
    bnw_move[0] += "6";
    }
  }

  //7 :: 7
  if(!digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("7");
    x++;
    if(black_to_move){
    bnw_move[1] += "7";
    }
    else{
    bnw_move[0] += "7";
    }
  }

  //8 :: 8
  if(!digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("8");
    x++;
    if(black_to_move){
    bnw_move[1] += "8";
    }
    else{
    bnw_move[0] += "8";
    }
  }

  //a :: 9
  if(!digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("a");
    x++;
    if(black_to_move){
    bnw_move[1] += "a";
    }
    else{
    bnw_move[0] += "a";
    }
  }

  //b :: 10
  if(!digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("b");
    x++;
    if(black_to_move){
    bnw_move[1] += "b";
    }
    else{
    bnw_move[0] += "b";
    }
  }

  //c :: 11
  if(!digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("c");
    x++;
    if(black_to_move){
    bnw_move[1] += "c";
    }
    else{
    bnw_move[0] += "c";
    }
  }

  //d :: 12
  if(!digitalRead(d4) && digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("d");
    x++;
    if(black_to_move){
    bnw_move[1] += "d";
    }
    else{
    bnw_move[0] += "d";
    }
  }

  //e :: 13
  if(!digitalRead(d4) && digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("e");
    x++;
    if(black_to_move){
    bnw_move[1] += "e";
    }
    else{
    bnw_move[0] += "e";
    }
  }

  //f :: 14
  if(!digitalRead(d4) && digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("f");
    x++;
    if(black_to_move){
    bnw_move[1] += "f";
    }
    else{
    bnw_move[0] += "f";
    }
  }

  //g :: 15
  if(!digitalRead(d4) && digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("g");
    x++;
    if(black_to_move){
    bnw_move[1] += "g";
    }
    else{
    bnw_move[0] += "g";
    }
  }

  //h :: 16
  if(digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("h");
    x++;
    if(black_to_move){
    bnw_move[1] += "h";
    }
    else{
    bnw_move[0] += "h";
    }
  }

  //K :: 17
  if(digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("K");
    x++;
    if(black_to_move){
    bnw_move[1] += "K";
    }
    else{
    bnw_move[0] += "K";
    }
  }

  //Q :: 18
  if(digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("Q");
    x++;
    if(black_to_move){
    bnw_move[1] += "Q";
    }
    else{
    bnw_move[0] += "Q";
    }
  }

  //R :: 19
  if(digitalRead(d4) && !digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("R");
    x++;
    if(black_to_move){
    bnw_move[1] += "R";
    }
    else{
    bnw_move[0] += "R";
    }
  }

  //B :: 20
  if(digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("B");
    x++;
    if(black_to_move){
    bnw_move[1] += "B";
    }
    else{
    bnw_move[0] += "B";
    }
  }

  //N :: 21
  if(digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("N");
    x++;
    if(black_to_move){
    bnw_move[1] += "N";
    }
    else{
    bnw_move[0] += "N";
    }
  }

  //O-O :: 22
  if(digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("O-O");
    if(black_to_move){
    bnw_move[1] += "O-O";
    black_to_move = 0;
    x = 0;
    }
    else{
    bnw_move[0] += "O-O";
    black_to_move = 1;
    x = 8;
    }
  }

  //O-O-O :: 23
  if(digitalRead(d4) && !digitalRead(d3) && digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    mon.print("O-O-O");
    if(black_to_move){
    bnw_move[1] += "O-O-O";
    black_to_move = 0;
    x = 0;
    }
    else{
    bnw_move[0] += "O-O-O";
    black_to_move = 1;
    x = 8;
    }
  }

  //x :: 24
  if(digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    mon.print("x");
    x++;
    if(black_to_move){
    bnw_move[1] += "x";
    }
    else{
    bnw_move[0] += "x";
    }
  }

  //+ :: 25
  if(digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && !digitalRead(d1) && digitalRead(d0)){
    mon.print("+");
    x++;
    if(black_to_move){
    bnw_move[1] += "+";
    }
    else{
    bnw_move[0] += "+";
    }
  }

  //= :: 26
  if(digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && !digitalRead(d0)){
    mon.print("=");
    x++;
    if(black_to_move){
    bnw_move[1] += "=";
    }
    else{
    bnw_move[0] += "=";
    }
  }

  //ENTER :: 27
  if(digitalRead(d4) && digitalRead(d3) && !digitalRead(d2) && digitalRead(d1) && digitalRead(d0)){
    if(black_to_move){
      black_to_move = 0;
      clear_line();
      x = 0;
    }
    else{
      black_to_move = 1;
      x = 8;
    }
  }

  //BACKSPACE :: 28
  if(digitalRead(d4) && digitalRead(d3) && digitalRead(d2) && !digitalRead(d1) && !digitalRead(d0)){
    if(x == 0 || x == 8){
      
    }
    else{
      mon.setCursor(x - 1, 1);
      mon.print(" ");
      x--;
      if(black_to_move){
      bnw_move[1].remove(bnw_move[1].length() - 1);
      }
      else{
      bnw_move[0].remove(bnw_move[0].length() - 1);
      }
    }
    
  }

  //# :: 29
  delay(50);
  while(digitalRead(d0) || digitalRead(d1) || digitalRead(d2) || digitalRead(d3) || digitalRead(d4)){
    
  }
}
