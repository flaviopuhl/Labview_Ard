void LbvAnalogIn(){

          if (commandAux=="A00_AIn"){
              commandVar=analogRead(A0);
              flag=1;
            }
              


          if (commandAux=="A01_AIn"){
              commandVar=analogRead(A1);
              flag=1;
            }

 
          if (commandAux=="A02_AIn"){
              commandVar=analogRead(A2);
              flag=1;
            }


          if (commandAux=="A03_AIn"){
              commandVar=analogRead(A3);
              flag=1;
            }

           if (commandAux=="A04_AIn"){
              commandVar=analogRead(A4);
              flag=1;
            }


           if (commandAux=="A05_AIn"){
              commandVar=analogRead(A5);
              flag=1;
            }


           if (commandAux=="A06_AIn"){
              commandVar=analogRead(A6);
              flag=1;
            } 

            if(flag==1){
                Serial.println(commandAux + " OK " + commandVar);                   
            }

flag=0;
}

