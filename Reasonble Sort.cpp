
//*********   this sort will work if arry has at least 3 elements   ************

#include<iostream>
using namespace std;





void swap(int arr[],int a,int b,int c)
{
	
	
	int i[3]={a,b,c};
	
	if(arr[a]>arr[b])
	swap(arr[a],arr[b]);
	
	if(arr[a]>arr[c])
	swap(arr[a],arr[c]);
	
	if(arr[b]>arr[c])
	swap(arr[b],arr[c]);
	
	
	
	

	
	
	
	
}

void reasonablesort(int arr[],int l, int r)
{
	if(r>=2)
	{   
		int ls =r-2;  //10
		int m  =r-1;  //9
		int rs =r;    //10
		
		swap(arr,ls,m,rs);
		
		rs = ls-1; 
		reasonablesort(arr,ls,rs) ;
		
		
		
	
	
	}
}

void print(int arr[], int r) 
{ 
	int i; 
	for (i=0; i < r; i++) 
		cout<<arr[i]<<" ";

}
int main() 
{ 
	int arr[] = {30,29,28,27,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,0,0,0};
		int size = sizeof(arr)/sizeof(arr[0]); 

    int r = size;                                                                 //2...1=5


for(int i=r-1;0<=i;i--)
{
	reasonablesort(arr,0,i);
}

for(int i=1;r-1>=i;i++)
{
	reasonablesort(arr,0,i);
}

for(int i=r-2;0<=i;i--)
{
	reasonablesort(arr,0,i);
}


    
	
	print(arr, size); 
	
	
}