#include<iostream>
#include<cstddef> // for size_t i = 0;
#include "main.h"

int main()
{
    //references
    std::cout<<"References"<<std::endl;
    references();

    //average of array
    std::cout<<"\nVector"<<std::endl;
    float arr[] = { 10, 20.5, 30 ,12, .8};
    unsigned n = sizeof(arr)/sizeof(arr[0]);
    std::vector<float> vals;
    for (size_t i = 0; i<n; i++){
        vals.push_back(arr[i]);
    }
    for (size_t i = 0; i<n; i++){
        std::cout<<vals[i]<<" ";
    }
    std::cout<<"\n\nAverage:"<<avg(vals);

    std::cout<<"\n\nReversed Vector"<<std::endl;
    std::vector<float> result = reverseVector(vals);
    for (size_t i = 0; i<result.size(); i++){
        std::cout<<result[i]<<" ";
    }

    std::cout<<"\n\nIterator practice"<<std::endl;
    iteratorPractice(vals);

    std::cout<<"\n\nPrinting reversed"<<std::endl;
    printReversed(vals);

    std::cout<<"\n\nReversed In Place:"<<std::endl;
    std::vector<float> v2 = vals; //or (vals.begin(), vals.end());
    //std::cout<<"V1==V2: "<< (v2.size()==vals.size()? "True" : "False");
    reverseInplace(v2);
    std::cout<<"V2\tVals"<<std::endl;
    for (size_t i = 0; i<v2.size(); i++){
        std::cout<<v2[i]<<"\t"<<vals[i]<<std::endl;//<<" "v2[i]<<std::endl;
    }

    //unique pointers can't be shared, passed, or copied
     std::cout<<"\nUnique Pointer:"<<std::endl;
     uniquePointer();



     std::cout<<"\nBubbleSort by reference:"<<std::endl;
     int int_arr[10] = {10,9,8,7,6,5,4,3,2,1};
     size_t k = sizeof(int_arr)/sizeof(int_arr[0]);
     bubbleSortArray(int_arr, k);
     for (size_t i = 0; i<k; i++){
        std::cout<<int_arr[i]<<" ";
    }

     std::cout<<"\n\nWord counting:"<<std::endl;
     std::string s("Text to verify how many words it has.");
     std::cout<<"The string has "<<countWords(s)<< " words"<<std::endl;

     std::cout<<"\nTop K class:"<<std::endl;
     //int arr2[] = {1, 23, 12, 9, 30, 2, 50};
     std::vector<int> arr2={1, 23, 12, 9, 30, 2, 50};
     n = sizeof(arr2)/sizeof(arr2[0]);
     k = 3;
     kLargest(arr2, n, k);

     vector<int> a(22);
     bool b(v[6]);
    return 0;
}
