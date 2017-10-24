#include <bits/stdc++.h>
using namespace std;

int ms = 0 ;

void Hanoi(int m, char a, char b, char c)
{
    moves++;
    if(m == 1){
        cout << "Disc " << m << " moved from " << a << " to " << c << endl;
    }
    else{
        Hanoi(m-1, a,c,b);
        cout << "Disc " << m << " moved from " << a << " to " << c << endl;
        Hanoi(m-1,b,a,c);
    }
}


int main(){
//this input here is the no. of disks 
  int d;
  cout << "Enter the number of discs: " << endl;
  cin >> d;
  Hanoi(d, 'A', 'B', 'C');
  cout << "It took " << ms << " moves. " << endl;
  return 0;
}

