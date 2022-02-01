#include "TRIGGER_WIFI.h"               /*Includes ESP8266WiFi.h and WiFiClientSecure.h, just have these two libraries downloaded before*/
#include "TRIGGER_GOOGLESHEETS.h"       /*Library file for Google Sheets, has to be used after Wi-Fi Client Secure declaration, here everything is in Trigger_WIFI.h, so using it after Trigger_WIFI.h*/ 

#define triggerPin  D0
#define echoPin     D1
/**********Google Sheets Definations***********/
char column_name_in_sheets[ ][20] = {"value1","value2","value3"};                        /*1. The Total no of column depends on how many value you have created in Script of Sheets;2. It has to be in order as per the rows decided in google sheets*/
String Sheets_GAS_ID = "AKfycbzA4eS_bEqyS2FkiFpskN3fw74kTPVL8TstbFIyx7HlU0mf4A1KwTCzo1ahgqlr5Bww";                                         /*This is the Sheets GAS ID, you need to look for your sheets id*/
int No_of_Parameters = 3;                                                                /*Here No_of_Parameters decides how many parameters you want to send it to Google Sheets at once, change it according to your needs*/
/*********************************************/
float duration, jarak;

void setup() 
{
  Serial.begin(9600);
  while (!Serial);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  WIFI_Connect("ByKZ-UmlmYXQgUmFjaGlt","googleboom");                                                     /*Provide you Wi-Fi SSID and password to connect to Wi-Fi*/
  Google_Sheets_Init(column_name_in_sheets, Sheets_GAS_ID, No_of_Parameters );         /*Sets the column name for Google Sheets, the GAS ID, and the No of Parameter we want to send*/        
}

void loop() 
{
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(triggerPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  jarak = (duration/2) / 29.1;
  float percentages = 100 -(((jarak - 1)/15) * 100) ;
  float id = 2;
  Serial.println("jarak :");
  Serial.print(jarak);
  Serial.println(" cm");
  Serial.println("Id :");
  Serial.print(id);
  Serial.println(" ");
  Serial.println("volume");
  Serial.print(percentages);
  Serial.println(" ");
                           /*Demo values that has to be sent to google sheets, you can use sensor values*/

  Data_to_Sheets(No_of_Parameters, id, jarak, percentages);         /*1. This function accepts multiple float parameter, here No_of_Parameters decides how many parameters you want to send to Google Sheets; 2. The values sent should be in order as per the column in Google Sheets*/

  Serial.println();
  delay(10000);                                       /*10 Sec Delay, Here 10 second delay is just used so that we can see the data pushed to sheets one by one
                                                        There is nothing like a minimum delay between two data push*/
}
