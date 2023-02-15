#include<iostream>
using namespace std;

//Brute Force O(n3)
/*int largestsumarr(int arr[], int n){
  int largest_sum = 0;
  
  for(int i=0; i<n;i++){
  for(int j =i; j<n;j++){
    int sum = 0;
  for(int k=i; k<=j;k++){
      sum+=arr[k];
      }
    //cout<<sum<<endl;
    largest_sum = max(largest_sum, sum);
    }
  }*/

// Prefix sum O(n2)
  
/*int largestsumarr(int arr[], int n){
  
  int subarrsum[n];
  subarrsum[0] = arr[0]
  for(int i=1; i<n;i++){
    subarrsum[i] = subarrsum[i-1] + arr[i]; 
  }
  
  int largest_sum = 0;
  for(int i=0;i<n;i++){
  for (int j=i, j<n; j++){
    int subarrsum_sum = i>0 ? subarrsum[j] - subarrsum[i-1] : subarrsum[j];
    
    largest_sum = max(subarrsum, largest_sum);
    }
  }
}*/

// kadane's algo
int largestsumarr(int arr[], int n){
  int curr_sum = 0;
  int max_sum = 0;
  
  for(int i=0;i<n;i++){
    curr_sum += arr[i];
    
    if(curr_sum<0){
      curr_sum = 0;
      max_sum = max(max_sum, curr_sum);
    }
  }  
  return max_sum;
}


int main(){
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr)/sizeof(int);
  
  cout<< largestsumarr(arr, n);
  return 0;
}
