#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED // for constant variables

#endif // MAIN_H_INCLUDED
#include<iostream>
#include<vector>
#include<cstddef>
#include<algorithm>
#include<numeric>
#include<string>
#include <functional>   // std::greater
#include<memory> //for unique_pointers

void hello(){
    std::cout<<"Hello World";
}

void swap_vals(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

//reference question
void references(){
   // declare simple variables
   int    i;
   // declare reference variables
   int&    r = i; //references can't be null or change to other values
   i = 5;
   std::cout << "Value of i : " << i << " Value of Reference: "<<r<<std::endl;
   i = 50;
   std::cout << "Value of i : " << i << " Value of Reference: "<<r<<std::endl;

   int a = 2, b = 3;
   std::cout<<"Before Swap"<<std::endl;
   std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
   swap_vals( a, b );
   std::cout<<"After Swap"<<std::endl;
   std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
   }



//average vector
float avg(std::vector <float> arr){
    float sum = std::accumulate(arr.begin(), arr.end(), 0.0); //initial value
    return sum/arr.size();
}

std::vector<float> reverseVector( std::vector<float> arr){
    std::reverse(arr.begin(),arr.end());
    return arr;
}
void reverseInplace(std::vector<float> &arr){
    std::reverse(arr.begin(), arr.end());
}
void printReversed( std::vector<float> arr){
    for (int i = arr.size(); i>0; i--){
        std::cout<<arr[i-1]<<"\t";
    }
}
void iteratorPractice(std::vector<float> v){
    //print with iterator
    std::vector<float>::iterator iter;
    for (iter = v.begin(); iter < v.end(); iter++){
	  std::cout << (*iter) <<" ";
    }
    //sum elements
    int sum_of_elems=0;
    std::vector<int> ar = {1,2,3,4,5,6,7,8,9,10};
    std::for_each(ar.begin(), ar.end(), [&] (int n) {
        sum_of_elems += n;
    });
    std::cout<<"\nIter_Sum: "<<sum_of_elems;
}

void bubbleSortArray(int *arr, size_t n){
    int temp;
    std::cout<<arr[0]<<" "<<n<<std::endl;
    for (size_t i = 0; i<n-1; i++){
        //must compare each pair of elements n-1 because +1 in j will see n
        for (size_t j = 0; j<(n-i-1);j++){
            //this loop is restricted by one each time
            //if the smallest element is in the last cell, it will move left one
            //space at a time until it arrives at the beginning
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void uniquePointer(){
    int *p = new int(25); //assigns 25 where p points to
    int *q = new int[10];//makes an array of size 10 where points to
    /*if (q){
    //do some stuff and return,
    //q doesn't reach delete below
    //and memory leak occurs
    }*/
    std::cout<<"normal Pointer: "<<*p<<" addr: "<<p<<std::endl;
    delete p;            //deletes p (good practice)
    delete[] q;
    //or
    std::unique_ptr<int> uptr(new int(15));
    std::cout<<"Unique Pointer: "<<*uptr<<" addr: "<<&uptr<<std::endl;

    //or
    std::unique_ptr<int> uptr2;
    uptr2.reset(new int(47));
     std::cout<<"New Unique Pointer: "<<*uptr2<<" addr: "<<&uptr2<<std::endl;

    //only operation allowed is move
    std::unique_ptr<int> valuePtrNow(std::move(uptr));
    std::cout<<"Moved Unique Pointer: "<<*valuePtrNow<<" addr: "<<&valuePtrNow<<std::endl;

}

int countWords(std::string s){
    return std::count(s.cbegin(), s.cend(), ' ')+1;
}

void kLargest(int arr[], int n, int k)
{
    std::sort(arr, arr+n, std::greater<int>());
    // Print the first kth largest elements
    for (int i = 0; i < k; i++){
        std::cout << arr[i] << " ";
    }
}

void kLargest(std::vector<int> arr, int n, int k)
{
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    // Print the first kth largest elements
    for (int i = 0; i < k; i++){
        std::cout << arr[i] << " ";
    }
}
