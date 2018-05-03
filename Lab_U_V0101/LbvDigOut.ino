void LbvDigOut(){
  // DIGITAL OUTPUTS  

            if (commandAux=="D02_onn"){
              digitalWrite(2,HIGH);
              flag=1;
            }
              
   
            if (commandAux=="D02_off"){
              digitalWrite(2,LOW);
               flag=1;
            }


              if (commandAux=="D03_onn"){
              digitalWrite(3,HIGH);
               flag=1;
            }
   
            if (commandAux=="D03_off"){
              digitalWrite(3,LOW);
               flag=1;
            }


              if (commandAux=="D04_onn"){
              digitalWrite(4,HIGH);
               flag=1;
            }
   
            if (commandAux=="D04_off"){
              digitalWrite(4,LOW);
               flag=1;
            }

              if (commandAux=="D05_onn"){
              digitalWrite(5,HIGH);
               flag=1;
            }
   
            if (commandAux=="D05_off"){
              digitalWrite(5,LOW);
               flag=1;
            }

              if (commandAux=="D06_onn"){
              digitalWrite(6,HIGH);
               flag=1;
            }
   
            if (commandAux=="D06_off"){
              digitalWrite(6,LOW);
              flag=1;
            }


            if (commandAux=="D07_onn"){
              digitalWrite(7,HIGH);
               flag=1;
            }
   
            if (commandAux=="D07_off"){
              digitalWrite(7,LOW);
               flag=1;
            }


              if (commandAux=="D08_onn"){
              digitalWrite(8,HIGH);
               flag=1;
            }
   
            if (commandAux=="D08_off"){
              digitalWrite(8,LOW);
               flag=1;
            }

              if (commandAux=="D09_onn"){
              digitalWrite(9,HIGH);
               flag=1;
            }
   
            if (commandAux=="D09_off"){
              digitalWrite(9,LOW);
              flag=1;
            }


              if (commandAux=="D10_onn"){
              digitalWrite(10,HIGH);
               flag=1;
            }
   
            if (commandAux=="D10_off"){
              digitalWrite(10,LOW);
               flag=1;
            }

              if (commandAux=="D11_onn"){
              digitalWrite(11,HIGH);
               flag=1;
            }
   
            if (commandAux=="D11_off"){
              digitalWrite(11,LOW);
              flag=1;
            }


            if (commandAux=="D12_onn"){
              digitalWrite(12,HIGH);
               flag=1;
            }
   
            if (commandAux=="D12_off"){
              digitalWrite(12,LOW);
              flag=1;
            }

              
            if (commandAux=="D13_onn"){
              digitalWrite(13,HIGH);
               flag=1;
            }
   
            if (commandAux=="D13_off"){
              digitalWrite(13,LOW);
               flag=1;
            }


                        if(flag==1){
                            commandAux2 = commandAux+" OK";
                            Serial.println(commandAux2);
                         }

 flag=0;

//FIM DIGITAL OUTPUTS
}

