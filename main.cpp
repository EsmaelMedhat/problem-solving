//                                           Sum of array singles


//In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.
//For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once, and their sum is 15. Every other number occurs twice

#include<iostream>
#include<vector>
using namespace std;
int repeats(vector<int>v) // o(N^2)
{
 int sum=0;
  int repeated=0;
  for(int i=0;i<v.size();i++){
for(int j=0;j<v.size();j++){
 if(v[i]==v[j])
repeated++;
}
if(repeated==1)
  sum+=v[i];

    repeated=0;
    }
return sum;

}
int main()
{
 vector<int>m={1,1,22,22,3,4,5,6,7};

    cout << repeats(m)<< endl;
    return 0;
}
