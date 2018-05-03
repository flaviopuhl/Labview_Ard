/*
 
 created 05 Apr 2018
 by Flavio Puhl
 
 V01.00 - Release
 V01.01 - Memoria otimizada

 
 */

// pins for the DOs:
int result;
int flag;
String command;
String commandAux;
String commandAux2;
String commandAux3;
int commandVar;

void setup() 
 {
  // initialize serial:
  Serial.begin(9600);
  Serial.setTimeout(0);
  while (!Serial) {} ;              // wait for serial port to connect.
} 
  

void loop() {
  
  
  while (Serial.available())        // if there's any serial available, read it:
  {     
   delay(2);                        // delay para encher o buffer
   char c = Serial.read();
   command+=c;                      // concatena a string
  }

  commandAux=command.substring(0,7);            // Separa prefixo da string
  commandAux3=command.substring(4,7);            // Separa prefixo da string (função)
  commandVar=command.substring(8,11).toInt();   // Separa sufixo da string e transforma em inteiro. Especial para PWM.
  

                                        LbvIOConfig();                      // Configura IOs
                                        

                                        LbvDigOut();                        // Aciona saídas digitais
                                        
if(commandAux3=="PWM"){                                        
                     LbvPWM();                           // Aciona PWM
                     }


if(commandAux3=="DIn"){                     
                     LbvDigIn();                         // Leitura Entrada digital
                     }

if(commandAux3=="AIn"){                     
                     LbvAnalogIn();                      // Leitura Entrada analógica
                     }

commandAux3="";                     
command="";                         // reset variável

} //void loop()








