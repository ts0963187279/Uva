/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
int main(){
  int i,j;
  map<int,int> table;
  while(cin >> i >> j){
    cout << i << " " << j << " ";
    if(i > j){
      int tmp = i;
      i = j;
      j = tmp;
    }
    int max = 0;
    while(i <= j){
      int num = i;
      int counter = 1;
      while(num != 1){
	if(num % 2 == 0)
	  num /= 2;
	else
	  num = 3 * num + 1;
	if(table.find(num) != table.end()){
	  counter += table[num];
	  break;
	}
	counter ++;
      }
      table[i] = counter;
      if(counter > max)
	max = counter;
      i++;
    }
    cout << max << endl;
  }
  return 0;
}

