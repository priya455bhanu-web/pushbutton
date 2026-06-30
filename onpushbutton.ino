int i=0,a,j,k,b;
void setup() 
{
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  
}

void loop() 
{
  a=digitalRead(4);
  if(a==1)
  {
    i++;
    while(digitalRead(4)==1)
    {

    }
  }
  if(i==1)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
    i=0;
  }
  if(j==2)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
    j=0;
  }
  if(k==3)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
    k=0;
  }
  if(b==4)
  {
    digitalWrite(1,HIGH);
  }
  else
  {
    digitalWrite(1,LOW);
    b=0;
  }
}
