//linearsearch & binary search
#include<stdio.h>
#include<stdlib.h>
void main()
{
  //***************declaring section****************************
  int a[100],n,item,loc,choise;//decaring array , item &locaion
  int linear_search(int[],int,int);//function declaration
  int binary_search(int[],int,int);//function declaration
  void getdata(int [],int);//getting data from the user
  void putdata(int [],int);//display stored data
  
  //****************declaring section end************************
  
  
  printf("enter the size of array");
  scanf("%d",&n);
  getdata(a,n);
  printf("enter the serach item");
  scanf("%d",&item);
  while(1)
  {
  printf("enter your choice");
  scanf("%d",&choise);//get choice from the user what is want to call which type of search

   
  switch(choise)// take choice from the user
   {
    case 1: loc=linear_search(a,n,item);
           break;
    case 2: loc=binary_search(a,n,item);
            break;
    case 3: exit(1);
    default :printf("enter the correct choice!!!!\n");
   }
   
   if(loc>=0)
     {
       printf("location of the item:%d",loc);
     }  
   else 
    {
      printf("item is not found!!!! .please type correct item");
    }

 }

}
//*******************************sub-section*****************************************
  
 void getdata(int x[],int n)//function for get data from the user
  {
   int i;
   printf("enter the element in array");
   for (i=0;i<n;i++)
   {
    scanf("%d",&x[i]);
   }
 }
 
 int linear_search(int x[],int n,int item)//linear search 
{
  int i;
  for(i=0;i<n;i++)
  {
     if(item==x[i])
     {
       return i;
     }
    
    return -1;
  }
}
 
int binary_search(int x[],int n,int item)//binary search 
{
  int beg=0,end,mid;//variable declaration 'beg' for beginning element & end for ending element.
  
  end=n-1;
  while(beg<=end)
  {
    mid=beg+end;
    if(x[mid]==item)
    {
     return mid;
    }
   else if(x[mid]>item) 
   {
     end=mid-1;
   }
   else
    {
     beg=mid+1;
    }
  }
  return -1;
}

//***********************************sub-section end*************************************

