#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {3,5,6,9,40};  
  int n = sizeof(arr)/sizeof(arr[0]);
  int element = 40;

  for (int i = 0; i < n; i++) {

      if(element == arr[i]){
          std::cout << "Number found" << std::endl;
      }
      else
      {
        std::cout << "Number not found" << std::endl;
      }
  }


}
