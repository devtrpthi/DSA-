#include<iostream>
using namespace std;

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++) {
   std::cout << arr[i] << " " << std::endl; 
  }
}



void swapalternate(int arr[], int size) {
  for (int i = 0; i < n; i++) {
   if (i+1 < size)
   {
    swap(arr[i], arr[i+1]); 
   } 
  }
}

int main ()
{
  int even[8] = {5,2,9,4,7,6,1,0};
  int odd[5] = {11,33,9,76,43};
  return 0;
}
