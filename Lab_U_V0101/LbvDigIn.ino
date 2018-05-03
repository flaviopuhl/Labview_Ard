void LbvDigIn(){
  //val = digitalRead(inPin);     // read the input pin
  //digitalWrite(ledPin, val);

            if (commandAux=="D02_DIn")
              {commandVar=digitalRead(2);
              flag=1;
              }

            if (commandAux=="D03_DIn")
              {commandVar=digitalRead(3);
              flag=1;
              }

            if (commandAux=="D04_DIn")
              {commandVar=digitalRead(4);
              flag=1;
              }

            if (commandAux=="D05_DIn")
              {commandVar=digitalRead(5);
              flag=1;
              }

            if (commandAux=="D06_DIn")
              {commandVar=digitalRead(6);
              flag=1;
              }

            if (commandAux=="D07_DIn")
              {commandVar=digitalRead(7);
              flag=1;
              }

            if (commandAux=="D08_DIn")
              {commandVar=digitalRead(8);
              flag=1;
              }

            if (commandAux=="D09_DIn")
              {commandVar=digitalRead(9);
              flag=1;
              }

            if (commandAux=="D10_DIn")
              {commandVar=digitalRead(10);
              flag=1;
              }

            if (commandAux=="D11_DIn")
              {commandVar=digitalRead(11);
              flag=1;
              }

            if (commandAux=="D12_DIn")
              {commandVar=digitalRead(12);
              flag=1;
              }

            if (commandAux=="D13_DIn")
              {commandVar=digitalRead(13);
              flag=1;
              }
              
                 
                        if(flag==1 && commandVar == HIGH){
                            commandAux2 = commandAux+" ON";
                            Serial.println(commandAux2);
                          }
                        if(flag==1 && commandVar == LOW){
                            commandAux2 = commandAux+" OFF";
                            Serial.println(commandAux2);
                          }
                  
              flag=0;      
            
}

