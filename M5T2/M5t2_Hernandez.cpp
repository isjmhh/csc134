#include <iostream>
using namespace std;
/*
  M5t2- void functions and value returning functions
  csc 134
  joel 
  10/31/23
*/
// list all functions here 
int square(int);
void print_answer_line(int num, int num_squared);

int main() {
  cout << "M5T2: Using Multiple Functions" << endl;
  int num = 4;
  cout << num << " squared is " << square(num) << endl;

  //We'll print out the squares of the numbers 1 to 10
  cout << "Number\tSquared" << endl;
  for (int num=1; num <=10; num++) {
  print_answer_line(num, square(num));
}
}
int square(int num) {
  int answer = num * num;
    return answer;
}


void print_answer_line(int num, int num_squared) {
  cout << num << "\t\t" << num_squared << endl;
}




