#include<iostream>
using namespace std;

void update(int arr[], int n)
{
  std::cout << "inside the function" << std::endl;
 // updating array's first ekement 
  arr[0] =120;

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }  

  std::cout << "end of the function" << std::endl;
}
int main ()
{
  int arr[3] = {1,2,3};
  update(arr,3);

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
