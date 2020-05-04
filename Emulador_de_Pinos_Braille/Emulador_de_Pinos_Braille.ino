//------------------Bibliotecas-----------------------------------------
#include <PS2Keyboard.h>  //Biblioteca do Teclado
const int DataPin = 3;   //Fio branco
const int IRQpin =  2;   //Fio Verde
String textodigitado=" ";
PS2Keyboard keyboard;
byte letra =0;
//----------------------------------------------------------------------


//------------------Definição-das-portas--------------------------------
void setup() {

  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  keyboard.begin(DataPin, IRQpin, PS2Keymap_US);
  Serial.begin(9600);
  Serial.println("Maquina Braille - Start");
  Serial.println("Digite uma palavra:");
}
//---------------------------------------------------------------------

void loop() {
//------------------Checagem-------------------------------------------
  letra=0;
  if (keyboard.available()) {
    char c = keyboard.read();
    Serial.print(c);
    if (c == 'a') {      
      letra=1;
      textodigitado += c;
    }
    if (c == 'b') {
      letra=2;
      textodigitado += c;
    }
    if (c == 'c') {
      letra=3;
      textodigitado += c;
    }
    if (c == 'd') {
      letra=4;
      textodigitado += c;
    }
    if (c == 'e') {
      letra=5;
      textodigitado += c;
    }
    if (c == 'f') {
      letra=6;
      textodigitado += c;
    }
    if (c == 'g') {
      letra=7;
      textodigitado += c;
    }
    if (c == 'h') {
      letra=8;
      textodigitado += c;
    }
    if (c == 'i') {
      letra=9;
      textodigitado += c;
    }
    if (c == 'j') {
      letra=10;
      textodigitado += c;
    }
    if (c == 'k') {
      letra=11;
      textodigitado += c;
    }
    if (c == 'l') {
      letra=12;
      textodigitado += c;
    }
    if (c == 'm') {
      letra=13;
      textodigitado += c;
    }
    if (c == 'n') {
      letra=14;
      textodigitado += c;
    }
    if (c == 'o') {
      letra=15;
      textodigitado += c;
    }
    if (c == 'p') {
      letra=16;
      textodigitado += c;
    }
    if (c == 'q') {
      letra=17;
      textodigitado += c;
    }
    if (c == 'r') {
      letra=18;
      textodigitado += c;
    }
    if (c == 's') {
      letra=19;
      textodigitado += c;
    }
    if (c == 't') {
      letra=20;
      textodigitado += c;
    }
    if (c == 'u') {
      letra=21;
      textodigitado += c;
    }
    if (c == 'v') {
      letra=22;
      textodigitado += c;
    }
    if (c == 'w') {
      letra=23;
      textodigitado += c;
    }
    if (c == 'x') {
      letra=24;
      textodigitado += c;
    }
    if (c == 'y') {
      letra=25;
      textodigitado += c;
    }
    if (c == 'z') {
      letra=26;
      textodigitado += c;
    }
    if (c == ' ') { 
      String textodigitado=" ";
      Serial.println(".");
    }
    if (c == 'ç') {
      letra=27;
      textodigitado += c;
    }
    if (c == 'á') {
      letra=28;
      textodigitado += c;
    }
    if (c == 'é') {
      letra=29;
      textodigitado += c;
    }
    if (c == 'í') {
      letra=30;
      textodigitado += c;
    }
    if (c == 'ó') {
      letra=31;
      textodigitado += c;
    }
    if (c == 'ú') {
      letra=32;
      textodigitado += c;
    }
    if (c == 'â') {
      letra=33;
      textodigitado += c;
    }
    if (c == 'ê') {
      letra=34;
      textodigitado += c;
    }
    if (c == 'ô') {
      letra=35;
      textodigitado += c;
    }
    if (c == 'ã') {
      letra=36;
      textodigitado += c;
    }
    if (c == 'õ') {
      letra=37;
      textodigitado += c;
    }
    if (c == 'à') {
      letra=38;
      textodigitado += c;
    }
    if (c == ',') {
      letra=39;
      textodigitado += c;
    }
    if (c == ';') {
      letra=40;
      textodigitado += c;
    }
    if (c == '°') {
      letra=41;
      textodigitado += c;
    }
    if (c == ':') {
      letra=42;
      textodigitado += c;
    }
    if (c == '.') {
      letra=43;
      textodigitado += c;
    }
    if (c == '?') {
      letra=44;
      textodigitado += c;
    }
    if (c == '!') {
      letra=45;
      textodigitado += c;
    }
    if (c == '(') {
      letra=46;
      textodigitado += c;
    }
    if (c == ')') {
      letra=47;
      textodigitado += c;
    }
    if (c == '"') {
      letra=48;
      textodigitado += c;
    }
    if (c == '-') {
      letra=49;
      textodigitado += c;
    }
    if (c == '_') {
      letra=50;
      textodigitado += c;
    }
    if (c == '/') {
      letra=51;
      textodigitado += c;
    }
    if (c == '$') {
      letra=52;
      textodigitado += c;
    }
    if (c == '@') {
      letra=53;
      textodigitado += c;
    }
    if (c == '+') {
      letra=54;
      textodigitado += c;
    }
    if (c == '>') {
      letra=55;
      textodigitado += c;
    }
    if (c == '<') {
      letra=56;
      textodigitado += c;
    }
    if (c == '%') {
      letra=57;
      textodigitado += c;
    }
    if (c == '=') {
      letra=58;
      textodigitado += c;
    }
    if (c == '[') {
      letra=59;
      textodigitado += c;
    }
    if (c == ']') {
      letra=60;
      textodigitado += c;
    }
    if (c == '{') {
      letra=61;
      textodigitado += c;
    }
    if (c == '}') {
      letra=62;
      textodigitado += c;
    }
  }
//----------------------------------------------------------------------------

//------------------Tradução--------------------------------------------------
  switch(letra){
    case 1:  //A
    PORTC=B100000;
    //delay(1000);
    break;
    
    case 2:  //B
    PORTC=B110000;
    //delay(1000);
    break;
    
    case 3:   //C
    PORTC=B100100;
    //delay(1000);
    break;
    
    case 4:    //D
    PORTC=B100110;
    //delay(1000);
    break;
    
    case 5:    //E
    PORTC=B100010; 
    //delay(1000);
    break;
    
    case 6:    //F
    PORTC=B110100;
    //delay(1000);
    break;
    
    case 7:   //G
    PORTC=B110110;
    //delay(1000);
    break;
    
    case 8:   //H
    PORTC=B110010;
    //delay(1000);
    break;
    
    case 9:   //I
    PORTC=B010100;
    //delay(1000);
    break;
    
    case 10:  //J
    PORTC=B010110;
    //delay(1000);
    break;
    
    case 11:   //K
    PORTC=B101000;
    //delay(1000);
    break;
    
    case 12:   //L
    PORTC=B111000;
    //delay(1000);
    break;
    
    case 13:   //M
    PORTC=B101100;
    //delay(1000);
    break;
    
    case 14:   //N
    PORTC=B101110;
    //delay(1000);
    break;
    
    case 15:   //O
    PORTC=B101010;
    //delay(1000);
    break;
    
    case 16:   //P
    PORTC=B111100;
    //delay(1000);
    break;
    
    case 17:   //Q
    PORTC=B111110;
    //delay(1000);
    break;
    
    case 18:   //R
    PORTC=B111010;
    //delay(1000);
    break;
    
    case 19:   //S
    PORTC=B011100;
    //delay(1000);
    break;
    
    case 20:    //T
    PORTC=B011110;
    //delay(1000);
    break;
    
    case 21:   //U
    PORTC=B101001;
    //delay(1000);
    break;
    
    case 22:   //V
    PORTC=B111001;
    //delay(1000);
    break;
    
    case 23:   //W
    PORTC=B010111;
    //delay(1000);
    break;
    
    case 24:   //X
    PORTC=B101101;
    //delay(1000);
    break;
    
    case 25:   //Y
    PORTC=B101111;
    //delay(1000);
    break;
    
    case 26:   //Z
    PORTC=B101011;
    //delay(1000);
    break;
    
    case 27:   //Ç
    PORTC=B111101;
    //delay(1000);
    break;

    case 28:   //Á
    PORTC=B111011;
    //delay(1000);
    break;

    case 29:   //É
    PORTC=B111111;
    //delay(1000);
    break;

    case 30:   //Í
    PORTC=B001100;
    //delay(1000);
    break;

    case 31:   //Ó
    PORTC=B101100;
    //delay(1000);
    break;

    case 32:   //Ú
    PORTC=B011111;
    //delay(1000);
    break;

    case 33:   //Â
    PORTC=B100001;
    //delay(1000);
    break;

    case 34:   //Ê
    PORTC=B110001;
    //delay(1000);
    break;

    case 35:   //Ô
    PORTC=B100111;
    //delay(1000);
    break;

    case 36:   //Ã
    PORTC=B001110;
    //delay(1000);
    break;

    case 37:   //Õ
    PORTC=B010101;
    //delay(1000);
    break;

    case 38:   //À
    PORTC=B110101;
    //delay(1000);
    break;

    case 39:   //,
    PORTC=B010000;
    //delay(1000);
    break;

    case 40:   //;
    PORTC=B011000;
    //delay(1000);
    break;
    
    case 41:   //°
    PORTC=B001111;
    //delay(1000);
    break;

    case 42:   //:
    PORTC=B101011;
    //delay(1000);
    break;
    
    case 43:   //.
    PORTC=B001000;
    //delay(1000);
    break;

    case 44:   //?
    PORTC=B010001;
    //delay(1000);
    break;
    
    case 45:   //!
    PORTC=B011010;
    //delay(1000);
    break;

    case 46:   //(
    PORTC=B110001;
    //delay(1000);
    break;

    case 47:   //)
    PORTC=B001110;
    //delay(1000);
    break;

    case 48:   //"
    PORTC=B011001;
    //delay(1000);
    break;
    
    case 49:   //-
    PORTC=B001001;
    //delay(1000);
    break;

    case 51:   ///
    PORTC=B001100;
    //delay(1000);
    break;

    case 52:   //$
    PORTC=B000011;
    //delay(1000);
    break;
    
    case 53:   //@
    PORTC=B100011;
    //delay(1000);
    break;

    case 54:   //+
    PORTC=B011010;
    //delay(1000);
    break;

    case 55:   //>
    PORTC=B101010;
    //delay(1000);
    break;

    case 56:   //<
    PORTC=B010101;
    //delay(1000);
    break;

    case 58:   //=
    PORTC=B011011;
    //delay(1000);
    break;

    case 59:   //[
    PORTC=B111011;
    //delay(1000);
    break;

    case 60:   //]
    PORTC=B011111;
    //delay(1000);
    break;
    
    default:
    delay(1000);
    PORTC=B000000;
    break;
  }
//----------------------------------------------------------------------- 
}



