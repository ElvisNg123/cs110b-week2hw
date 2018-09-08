#include <iostream>
#include <cmath>
using namespace std; 

int main() {
  int steps, i, k, j, n;
  long int x = 1;
  cout <<"Pick the number of steps the Palindrome will have."<< endl;
  cin >> steps;
  steps = steps+2; 
      for (i = 0; i < steps; i++){
        j = (steps)-(i); 
        while (j > 0){
          cout <<" ";
          j--;
        }
          for (k = 1; k < i; k++){
            cout <<k<<" ";
          }
          for (n = (i-2); n>0; n--){
            cout <<n<<" ";
          }
          cout << endl;
      }
}