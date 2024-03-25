// # Product name: Joystick Module
// # Product SKU : DFR0061
// # Version     : 1.0
// # Подключение джойстика к Arduino:
// #        X-Axis  -> A0 (Analog pin 0)
// #        Y-Axis  -> A1 (Analog pin 1)
// #        Z-Axis  -> Digital pin 3
 
int JoyStick_X = 1; //x
int JoyStick_Y = 2; //y
int JoyStick_X1 = 3; //key
int JoyStick_Y1 = 4;
 
void setup() 
{
 
  Serial.begin(9600); // инициализируем скорость серийного порта 9600 bps
}
void loop() 
{
  int x,y,x1,y1,ix,iy,ix1,iy1;
  x=analogRead(JoyStick_X); //считать угол наклона джойстика по оси-X
  y=analogRead(JoyStick_Y); //считать угол наклона джойстика по оси-Y
  x1=analogRead(JoyStick_X1);
  y1=analogRead(JoyStick_Y1);// // считать нажатие кнопки джойстика
  if(480<x<520){ix=1500;};if(x>=520){ix=1500+((x-500)*0.75);};if(x<=480){ix=1500+((x-500)*0.75);};
  if(480<y<520){iy=1500;};if(y>=520){iy=1500+((y-500)*0.75);};if(y<=480){iy=1500+((y-500)*0.75);};
  if(480<x1<520){ix1=1500;};if(x1>=520){ix1=1500+((x1-500)*0.75);};if(x1<=480){ix1=1500+((x1-500)*0.75);};
  if(480<y1<520){iy1=1500;};if(y1>=520){iy1=1500+((y1-500)*0.75);};if(y1<=480){iy1=1500+((y1-500)*0.75);};
  Serial.print(ix ,DEC);
  Serial.print(" ");
  Serial.print(iy ,DEC);
  Serial.print(" ");
  Serial.print(ix1 ,DEC);
  Serial.print(" ");
  Serial.println(iy1 ,DEC);
  delay(100);
}
