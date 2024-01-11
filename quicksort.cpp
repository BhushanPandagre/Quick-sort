//------------------------------------quick sort---------------------------------------//

// #include<iostream>

// using namespace std;
// /*o(nlogn)-time complexity
// divide and conquer
// partioning
// recursive function */
// int part(int A[],int low,int high)
// {
// int pv=A[low];//10
// int i=low+1;//1
// int j=high;//6
// int tmp;
// do
// {
// while(A[i]<=pv)
// {
// i++;
// }
// while(A[j]>pv)
// {
//  j--;
// }
// if(i<j)
// {
//  tmp=A[i];
//  A[i]=A[j];
//  A[j]=tmp;
//  }
// }while(i<j);
// tmp=A[low];
// A[low]=A[j];
// A[j]=tmp;
// return j;
// }
// void qs(int A[],int low,int high)
// {
// int pidx;
// if(low<high)
// {
//  pidx=part(A,low,high);
//  qs(A,low,pidx-1);
//  qs(A,pidx+1,high);
// }
// }
// void printarr(int *A,int n)
// {
// int i;
// // Example of Quick Sort
// for(i=0;i<n;i++)
// {
// cout<<A[i]<<"\t";
// }
// cout<<"\n";
// }
// int main()
// {
// int A[]={10,2,9,5,6,13,4};
// int n=7;
// printarr(A,n);
// qs(A,0,n-1);
// cout<<"---------------After QuickSort---------------\n";
// printarr(A,n);
// }

// =============================================================================================================================//
// #include<iostream>
// using namespace std;

// int part(int A[],int low,int high)
// {
//     int pv=A[low];
//     int i=low+1;
//     int j=high;
//     int temp;


// do
// {
//     while (A[i]<=pv)
//     {
//        i++;
//     }
//     while (A[j]>pv)
//     {
//         j--;
//     }
//     if(i<j)
//     {
//         temp=A[i];
//         A[i]=A[j];
//         A[j]=temp;
//     }
// }while (i<j);
//    temp=A[low];
//    A[low]=A[j];
//    A[j]=temp;
//    return j;
// }

// void qs(int A[],int low ,int high)
// {
//     int pidx;

//     if(low<high)
//     {
//         pidx=part(A,low,high);
//         qs(A,low,pidx-1);
//         qs(A,pidx+1,high);
//     }
// }
// void printarr(int *A,int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         cout<<A[i]<<"\t";
//     }
//     cout<<"\n";
// }

// int main()
// {
//     int A[]={12,9,20,11,2,4,5};
//     int n=7;

//     printarr(A,n);
//     qs(A,0,n-1);

//     cout<<"---------------------------------------------after quicksort----------------------------------------\n";

//     printarr(A,n);
// }

//=====================================================================================================================//

