//C++ cookbook

//Array of random numbers, Global constants
#include <time.h>  // for seed
#include <cstdlib> // for rand
#define TAM 10 
srand(time(NULL));
    int numero;
    for (int i = 0; i < TAM; i++) {
        numero = rand() % 20;
        v[i] = numero;
    }
    
//limit the range of rand()
v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014

//Struct definition, pre def and definition
struct MyStruct {
    int mayor, menor;
};
MyStruct FunctionName(int v[], int izq, int der);
int main(){
    int v[TAM] = {19,3,18,6,17,3,10,19,13,13}; // Array definition
    minmax = FunctionName(v, 0, 10);   
    }
MyStruct FunctionName(int v[], int izq, int der) {
    MyStruct maxmin;
    //function definition
    return maxmin;
    }
    
//print an array v[10]
    for (int i = 0; i < TAM; i++){
        cout << v[i] << " ";
        }
//print an array function
void print(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<",";
        i++;
    }
}
// determine the size of an array, regardless of datatype (since they are all the same)
//sizeof(arr) gives the total size of the array. 
//sizeof(arr[0]) is the size of one array element (all elements have the same size).
//sizeof(arr)/sizeof(arr[0]) is the number of elements
int arr_len = (sizeof(arr)/sizeof(arr[0]));
print(arr, arr_len);

//print an unitialized array
int arr[10];
for (size_t=0;i<10;i++){
    std::cout<<arr[i]<<std::endl;
    }
    
std::cout>>arr
//Simple inline function with relational operation
#include <string>
#include<sstream>// provides the stream classes for strings.
std::string TorF[] = {"False", "True"};
std::cout<<TorF[2<3]; //prints True
std::cout<<TorF[(2<3)&&(4!=5)]; //prints True

//logical operators
//&& = AND, || = OR, ! = NOT
A = 0; B=0; C=0;
Q = (A && B && C) || (A && (!B || !C));
   
//if statement don't get ;
if(guess < TARGET)
{
    std::cout<<"Your guess is too low.\n";
}
else if(guess > TARGET)
{
    std::cout<<"Your guess is too high.\n";
}
else
{
    std::cout<<"Yay! You guessed correctly.\n";
}

//Switch statement
char operation;
cin>>operation;
switch(operation){
    case('+'):  {int res = in1 + in2;
                std::cout<<res;
                break;}
    case '-':  {std::cout<<in1 - in2;
                break;}   
    default:    std::cout<<"Illegal operation";
}

// for loop with integer/float division and alias
#include <cstddef> //don't forget to include the library
int main(){
    int in;
    int s = 0; 
    for(size_t i = 0; i<5; i++){
        std::cin>>in;
        std::cout<<in<<std::endl;
        s+=in;}
    std::cout<<s<<std::endl<<s/5.;
    return 0;}   
    
//passing arrays to functions - must be passed by reference.
//3 ways
//Pass the array as a pointer
void arrayAsPointer(int *array, int size);
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);
    
//while loop with continue
int a = 0;
while(a < 15)
{
    a++;
    if(a == 10)
    { continue;  }//skips any remaining lines until the end of the loop
    std::cout<<a<<"\n";           
}

//pointers 
//the address of a variable is used with &
int a = 5;
//* is the dereferenceing operator.  
//It specifies a variable is a pointer to an address - must be used with & in declaration
int *ptr = &a;
std::cout<<*ptr; //5
std::cout<<ptr; // an address

//while loop until no more input;
int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
int searchKey, location;
while(std::cin >> searchKey){
    location = -1;
    for (size_t i = 0; i<10; i++){
        if (searchKey==searchArray[i]){
            location = i;
            break;
        }
    }
    if (location!=-1){
        std::cout<<searchKey<<" found at location "<<location<<std::endl;
    }
}

//multidimensional array declaration and print
int array2Dim[2][3] = {0,1,2,3,4,5};
for(int i=0; i<2;i++)
    for(int j=0;j<3;j++)
        std::cout<<"array2Dim["<<i<<"]["<<j<<"] = " << array2Dim[i][j]<<"\n";
    
//functions are declared before main and get a ;
void printProduct(int m1, int m2, int product); //prototype
int main(){
    printProduct(2,3,2*3);
    return 0;}
void printProduct(int m1, int m2, int product){
    std::cout<<m1<<"*"<<m2<<"="<<product;
}

//pass by reference modifies variables outside of their scope
#include<iostream>
void increment(int &input){//Note the addition of '&'
    input++; //**Note the LACK OF THE addition of '&'**
}
int main()
{
    int a = 34;
    increment(a);
    std::cout<<a;//outputs 35
    return 0;
}

//search an array for a value or -1
// size and key won't be modified by the function so declare them as const
int search_array(int *arr, const int size, const int key){
    int index = -1;
    for(size_t i = 0; i<size; i++){
        if (key==arr[i]){
            index = i;
        }
    }
    return index;
}

//format output 
 #include <iomanip>
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";

//capture a whole line until a newline 
std::getline(std::cin, stringVariable);
//turn string input into a numeric value
std::stringstream(stringLength) >> int inches;

// power exponents math library
#include<cmath>
std::pow(base, exponent)
M_PI//the stored value of pi in cmath

//append to an array vector
#include <vector>
std::vector< int > arr;
arr.push_back(1); 
arr.size()//the length of arr

//pass a vector to a function
//calculate the sum of an array
float sum(const vector<float>& x); // prototype
int main() {
    vector<float> a;   // Declare a vector.
    float temp;
    while (cin >> temp) {
        a.push_back(temp);
    }
    cout << "Average = " << sum(a)/a.size() << endl;
    return 0;
    }
float sum(const vector<float>& x) {
    float total = 0.0;  // the sum is accumulated here
    for (int i=0; i<x.size(); i++) {
        total = total + x[i];  
    }
    return total;
}
// 4 more ways to sum a vector
#include<vector>
for(std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
    sum_of_elems += *it;
//last argument will cast the result, not just define the input
#include<numeric>
sum_of_elems = std::accumulate(vector.begin(), vector.end(), 0.0);//initial value (0.0) will float cast
//for_each
std::for_each(vector.begin(), vector.end(), [&] (int n) {
    sum_of_elems += n;
});
//range based loop
for (auto& n : vector)
    sum_of_elems += n;


//staircase function
void staircase(int n) {
    //n=6, j=0...5, k = 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
        cout << " ";
        }
        for (int k = 0; k < i+1 ; k++) {
        cout << "#";
        }
        cout<<endl;
    }
}

//read in a value from std input

ofstream fout(getenv("OUTPUT_PATH"));   //declare an output filestream environment variable
string temp;                    
getline(cin, temp);                     //get the line from cin and assign to temp
vector<string> a_temp = split(rtrim(temp)); // convert the line to a string vector by splitting on whitespace after trimming the new line
vector<int> a(3);

//convert a string to an integer and assign to an array
for (int i = 0; i < 3; i++) {
    int a_item = stoi(a_temp[i]);
    a[i] = a_item;
}

//input and output formatting
scanf("%i %ld %c %f %lf", &i, &l, &ch, &f, &d);
printf("%i \n%ld \n%c \n%.2f \n%.9lf", i, l, ch, f, d);

//set up an array of strings
string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//input an array and reverse it with a dynamically allocated array
int N, i = 0;
std::cin >> N;
int *A = new int[N];
while (std::cin >> A[i++])
while (std::cout << A[--N] << ' ' && N)
while(std::cin>>input)//assigns a whole line to input

//input iterator - used ot read from a container
vector<int>::iterator iter;
for (iter = v.begin(); iter != v.end(); iter++)
	  cout << (*iter) << endl;

// returns an iterator where the search value occurs in the array
std::vector<int>::iterator lb;
lb = std::lower_bound(arr.begin(), arr.end(), 20);
std::cout<<*lb<<arr[lb - arr.begin()]; // << nearest lower # << the index 

//quicksort(python)
/*
def quicksort(a, n):
    if n>1:
        pivot = a[-1]
        l,m,r = [],[],[]
        for i in range(n):
            if a[i]<pivot:
                l.append(a[i])
            elif a[i]>pivot:
                r.append(a[i])
            else:
                m.append(a[i])       
        return quicksort(l,len(l))+m+quicksort(r,len(r))
    else:
        return a
*/


