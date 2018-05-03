void LbvIOConfig(){

            if (commandAux=="D02_stO"){
              pinMode(2,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D02_stI"){
              pinMode(2,INPUT);
              flag=1;
            }
            


              if (commandAux=="D03_stO"){
              pinMode(3,OUTPUT);
              flag=1;
            }
             
   
            if (commandAux=="D03_stI"){
              pinMode(3,INPUT);
              flag=1;
            }
              


            if (commandAux=="D04_stO"){
              pinMode(4,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D04_stI"){
              pinMode(4,INPUT);
              flag=1;
            }
              


            if (commandAux=="D05_stO"){
              pinMode(5,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D05_stI"){
              pinMode(5,INPUT);
              flag=1;
            }
            


            if (commandAux=="D06_stO"){
              pinMode(6,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D06_stI"){
              pinMode(6,INPUT);
              flag=1;
            }
             

            if (commandAux=="D07_stO"){
              pinMode(7,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D07_stI"){
              pinMode(7,INPUT);
              flag=1;
            }
              

            if (commandAux=="D08_stO"){
              pinMode(8,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D08_stI"){
              pinMode(8,INPUT);
              flag=1;
            }
             


            if (commandAux=="D09_stO"){
              pinMode(9,OUTPUT);
              flag=1;
            }
              
   
            if (commandAux=="D09_stI"){
              pinMode(9,INPUT);
              flag=1;
            }
             


            if (commandAux=="D10_stO"){
              pinMode(10,OUTPUT);
              flag=1;
            }
            
   
            if (commandAux=="D10_stI"){
              pinMode(10,INPUT);
              flag=1;
            }
            


            if (commandAux=="D11_stO"){
              pinMode(11,OUTPUT);
             flag=1;
            }
             
   
            if (commandAux=="D11_stI"){
              pinMode(11,INPUT);
             flag=1;
            }
              


            if (commandAux=="D12_stO"){
              pinMode(12,OUTPUT);
             flag=1;
            }
              
   
            if (commandAux=="D12_stI"){
              pinMode(12,INPUT);
              flag=1;
            }
             


            if (commandAux=="D13_stO"){
              pinMode(13,OUTPUT);
              flag=1;
            }
            
   
            if (commandAux=="D13_stI"){
              pinMode(13,INPUT);
              flag=1;
            }
              


            if(flag==1){
              commandAux2 = commandAux+" OK";
              Serial.println(commandAux2);  
            }
flag=0;
              
}

