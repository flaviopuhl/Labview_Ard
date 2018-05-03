void LbvPWM(){ //3, 5, 6, 9, 10, and 11
               //if (stringOne.substring(19) == "html")
               //if (stringOne.substring(14,18) == "text")


            if (commandAux=="D03_PWM"){
              analogWrite(3,commandVar);
              flag=1;
            }
              
              

            if (commandAux=="D05_PWM"){
              analogWrite(5,commandVar);
              flag=1;
            }
             


            if (commandAux=="D06_PWM"){
              analogWrite(6,commandVar);
              flag=1;
            }
             


            if (commandAux=="D09_PWM"){
              analogWrite(9,commandVar);
              flag=1;
            }
              


            if (commandAux=="D10_PWM"){
              analogWrite(10,commandVar);
              flag=1;
            }
              


            if (commandAux=="D11_PWM"){
              analogWrite(11,commandVar);
              flag=1;
            }
              

              if(flag==1){
                Serial.println(commandAux + " OK " + commandVar);                   
            }

flag=0;
  
}

