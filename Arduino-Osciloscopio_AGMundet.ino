/* Project: Arduino dibuja logo Instituto sobre Osciloscopio */
/* Author: Jordi Rodriguez & Llorenç Marin */

// Uso de potenciómetro para afinar la señal
int POT = A0;
int pot_delay = 1000;

// Conexión de osciloscopio a pines 5 y 6 de Arduino (usan el Timer0)
int X_PIN = 6;
int Y_PIN = 5;

// Definir matriz de puntos 
#define POINTS_AG 17
byte X_axis_ag [POINTS_AG] = {40,40,60,60,40,60,60,70,70,90,70,70,90,90,80,90,90};
byte Y_axis_ag [POINTS_AG] = {110,150,150,130,130,130,110,110,150,150,150,110,110,130,130,130,110};

#define POINTS_AG_S 27
byte X_axis_ag_s [POINTS_AG_S] = {40,40,60,60,40,60,60,70,70,90,70,70,90,90,80,90,90,
240,180,200,220,160,220,200,180,240,200};
byte Y_axis_ag_s [POINTS_AG_S] = {110,150,150,130,130,130,110,110,150,150,150,110,110,130,130,130,110,
110,130,70,130,110,90,150,90,110,110};


#define POINTS_M 5
byte X_axis_m [POINTS_M] = {30,30,40,50,50};
byte Y_axis_m [POINTS_M] = {30,70,50,70,30};

#define POINTS_MU 11
byte X_axis_mu [POINTS_MU] = {30,30,40,50,50,50,60,60,80,80,80};
byte Y_axis_mu [POINTS_MU] = {30,70,50,70,30,70,70,30,30,70,30};

#define POINTS_MUN 16
byte X_axis_mun [POINTS_MUN] = {30,30,40,50,50,50,60,60,80,80,80,90,90,110,110,110};
byte Y_axis_mun [POINTS_MUN] = {30,70,50,70,30,70,70,30,30,70,30,30,70,30,70,30};

#define POINTS_MUND 23
byte X_axis_mund [POINTS_MUND] = {30,30,40,50,50,50,60,60,80,80,80,90,90,110,110,110,120,120,130,140,140,130,120};
byte Y_axis_mund [POINTS_MUND] = {30,70,50,70,30,70,70,30,30,70,30,30,70,30,70,30,30,70,70,60,40,30,30};

#define POINTS_MUNDE 32
byte X_axis_munde [POINTS_MUNDE] = {30,30,40,50,50,50,60,60,80,80,80,90,90,110,110,110,120,120,130,140,140,130,120,
150,150,170,150,150,160,150,150,170};
byte Y_axis_munde [POINTS_MUNDE] = {30,70,50,70,30,70,70,30,30,70,30,30,70,30,70,30,30,70,70,60,40,30,30,
30,70,70,70,50,50,50,30,30};

#define POINTS_MUNDET 38
byte X_axis_mundet [POINTS_MUNDET] = {30,30,40,50,50,50,60,60,80,80,80,90,90,110,110,110,120,120,130,140,140,130,120,
150,150,170,150,150,160,150,150,170,190,190,180,200,190,190};
byte Y_axis_mundet [POINTS_MUNDET] = {30,70,50,70,30,70,70,30,30,70,30,30,70,30,70,30,30,70,70,60,40,30,30,
30,70,70,70,50,50,50,30,30,30,70,70,70,70,30};

#define POINTS_MUNDET_LOGO 46
byte X_axis_mundet_logo [POINTS_MUNDET_LOGO] = {30,30,40,50,50,50,60,60,80,80,80,90,90,110,110,110,120,120,130,140,140,130,120,
150,150,170,150,150,160,150,150,170,190,190,180,200,190,190,
20,200,200,200,200,220,200,20};
byte Y_axis_mundet_logo [POINTS_MUNDET_LOGO] = {30,70,50,70,30,70,70,30,30,70,30,30,70,30,70,30,30,70,70,60,40,30,30,
30,70,70,70,50,50,50,30,30,30,70,70,70,70,30,
20,20,110,5,20,20,20,20};


int i = 0;


void setup() {
  pinMode (X_PIN, OUTPUT);
  pinMode (Y_PIN, OUTPUT);
  pinMode (POT, INPUT);

  setPWMPrescaler(5,1);
  setPWMPrescaler(6,1);
}

void loop() {
  for (i = 0; i < 200; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_M; contador++)
    {
      analogWrite (X_PIN, X_axis_m [contador]);
      analogWrite (Y_PIN, Y_axis_m [contador]);
      delayMicroseconds (pot_delay);
    }
  }

  for (i = 200; i < 350; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MU; contador++)
    {
      analogWrite (X_PIN, X_axis_mu [contador]);
      analogWrite (Y_PIN, Y_axis_mu [contador]);
      delayMicroseconds (pot_delay);
    }
  }

  for (i = 350; i < 400; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MUN; contador++)
    {
      analogWrite (X_PIN, X_axis_mun [contador]);
      analogWrite (Y_PIN, Y_axis_mun [contador]);
      delayMicroseconds (pot_delay);
    }
  }

  for (i = 400; i < 450; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MUND; contador++)
    {
      analogWrite (X_PIN, X_axis_mund [contador]);
      analogWrite (Y_PIN, Y_axis_mund [contador]);
      delayMicroseconds (pot_delay);
    }
  }
  
  for (i = 450; i < 600; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MUNDE; contador++)
    {
      analogWrite (X_PIN, X_axis_munde [contador]);
      analogWrite (Y_PIN, Y_axis_munde [contador]);
      delayMicroseconds (pot_delay);
    }
  }

  for (i = 600; i < 605; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MUNDET; contador++)
    {
      analogWrite (X_PIN, X_axis_mundet [contador]);
      analogWrite (Y_PIN, Y_axis_mundet [contador]);
      delayMicroseconds (pot_delay);
    }
  }

for (i = 605; i < 750; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_MUNDET_LOGO; contador++)
    {
      analogWrite (X_PIN, X_axis_mundet_logo [contador]);
      analogWrite (Y_PIN, Y_axis_mundet_logo [contador]);
      delayMicroseconds (pot_delay);
    }
  }

for (i = 750; i < 850; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_AG; contador++)
    {
      analogWrite (X_PIN, X_axis_ag [contador]);
      analogWrite (Y_PIN, Y_axis_ag [contador]);
      delayMicroseconds (pot_delay);
    }
  }

for (i = 850; i < 950; i++)
  {
    byte contador = 0;
    pot_delay = map (analogRead (POT), 0, 1024, 10, 2000);
    for (contador = 0; contador < POINTS_AG_S; contador++)
    {
      analogWrite (X_PIN, X_axis_ag_s [contador]);
      analogWrite (Y_PIN, Y_axis_ag_s [contador]);
      delayMicroseconds (pot_delay);
    }
  }


  i=0;
  
}
