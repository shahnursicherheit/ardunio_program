// C++ code
// 111 output like this 
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
//digitalWrite(LED_BUILTIN, HIGH);
//delay(1000); // Wait for 1000 millisecond(s)
//digitalWrite(LED_BUILTIN, LOW);
//delay(1000); // Wait for 1000 millisecond(s)
  
   for(int i=0;i<2;i++)
   {
     for(int j=0;j<2;j++)
     {
       for(int k=0;k<2;k++)
       {
         digitalWrite(13,i);
         delay(1000);
         digitalWrite(12,j);
         delay(1000);
         digitalWrite(11,k);
         delay(1000);
       }
     }
   }
}