#include<iostream>
using namespace std;
int main()
{
  //float *p = new float [10];  

        int x;
        cin>>x;
        int *n= new int[x];
        for(int i=0;i<x;i++)        /// that is no way to write the code;
        cin>>n[i]; 

        for(int i=0;i<x;i++)
        cout<<n+i; 
};



/*new is the keyword in c++
  basically new keyword working as a dynamic memory allocation
  as we already use in c help of malloc and calloc so there in nothing difference between these.
  any DMA variable don't have name either use c or c++
   /// here is the declaration style of new keyword

          int *p = new int;
          float *f = new float;
          complex *ptf = new complex;

   // we can also  use new as a making of array  

        float *p = new float [10];  

        ex2
        int x;
        cin>>x;
        int *n= new int[x];   
  
  */

 /*delete
  
  delete is a keyword in c++ which is help to release dma memory after creating help of \
  new key word;
  delete release only those memory who have created help of dma variable;
  noted: if you not use delete,dma variable will not release memory have existence though out
  the program so it's better use delete key word;
  if you do not give any address to dma pointer, you can not release that memory so it good 
  to give some address to dma pointer;

  here is the declaration of delete keyword

            delete p;
            delete p[];

         do not thought after writing delete p means p is deleted. actually p is not deleted
         p whose value is kept that one memory deleted

 
 
 
 */
