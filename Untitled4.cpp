#include<iostream>
using namespace std;
int main ()
{
   
	int arr[10] , i, max=0, min=0, cMin=0,cMax=0 ;
  
    for (i = 1; i <= 10; i++)
    {
    	cout << "Enter the number of solved question by student-"<<i<<" [out of 10]: ";
        cin >> arr[i];
        
       
	}
      cout << "\nquestion by each student in unsorted order  : ";
      for (i = 1; i <= 10; i++)
    {
    	
        cout<< arr[i] <<" ";
	}
	
	 max = arr[1];
    for (int i = 1; i <=10; i++)
    {
    	if (max < arr[i])
    	{
    		cMax=i;
    		max = arr[i];
    		
		}
         
	}
        
        
    
    min = arr[1];
    for (int i = 1; i <=10; i++)
    {
        if (min > arr[i])
        {
        	cMin=i;
            min = arr[i];
        	 
		}
           
    }
    
	cout << "\n\nquestion by each student in sorted order  : ";
      for (i = 1; i <= 10; i++)
    {
    	int temp=0;
    	for(int j=i+1; j<10;j++)
    	if(arr[i]>arr[j+1])
        {
        	temp= arr[i];
        	arr[i]=arr[j+1];
        	arr[j+1]=temp;
		}
	}
	
	cout << "\nquestion by each student in sorted order  : ";
	 for (i = 1; i <= 10; i++)
    {	
        cout<< arr[i] <<" ";
	}
	
	
	cout<<"\n\nMaximum Questions solved by Student-"<<cMax<<" are : "<<max<<endl;
	cout<<"\nMinimum Questions solved by Student-"<<cMin<<" are : "<<min<<endl;
      
    
    return 0;  
}
