Problem Link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/.

***************************************************************************************

string encode(string src)
{
  string s="";
  s=s+ src[0];
  int count=1;
  for(int i=1;i<src.length();i++)
  {
      if(src[i]==src[i-1])
        count++;
      else{
          s+= to_string(count);
          s+= src[i];
          count=1;
      }
  }
  return s+to_string(count);
}     
