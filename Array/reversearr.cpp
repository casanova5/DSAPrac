#incude <iostream>
using namespace std;

void reversearr(int arr[], int n){  /* arr pass by ref */
  int s = 0;  /* start pointer */
  int e = n-1;  /* end pointer */
  int temp = 0;
  
  while(s<e){
    temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
  }
}


int main(){
  int arr[]={1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int);
  reversearr(arr,n);
  
  for(int i=0; i<n;i++)
    cout<<arr[n]<<" "; 
  
  return 0;
}
