//                                               Alphabet symmetry


//Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

//Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,

//solve(["abode","ABc","xyzD"]) = [4, 3, 1]
#include <iostream>
using namespace std;
#include <vector>
#include <string>
using namespace std;
vector<int> solve(const vector<std::string>& arr) // o(N^2)
{
vector<int> numberOfLetters;
 int count=0;
  string word;
  for(int i=0;i<arr.size();i++)
  {
    word=arr[i];
    for(int j=0;j<word.length();j++)
    {
      word[j]=(char)tolower(word[j]);
    if(int(word[j])-97==j)
   count++;
        }
  numberOfLetters.push_back(count);
  count=0;
  }
    return numberOfLetters;
}
int main()
{
    vector<string> solve_input = {"abode", "ABc", "xyzD"}; // Equals(v{ 4, 3, 1 })
    vector<int> numberOfLetters = solve(solve_input);

    for (int element : numberOfLetters) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
