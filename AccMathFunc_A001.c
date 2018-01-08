
//Acc Math Func - U001
long long Facto_N (unsigned char n)
{
  long long FactoN = 1;
  
  if(n <= 0) //1> Stopping condition check;
  {
    return (FactoN); //Return on stopping condition;
  }
  else
  {
    FactoN = n * FactoN(n-1); //2> Recurssive call;
  }
  
  n--; //3> Alter the variable to meet stopping condition at some point;
}
