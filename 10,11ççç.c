// C++ program to print common characters 
// of two Strings in alphabetical order 
#include<stdio.h>
#include<stdlib.h>
 
using namespace std; 
  
int main() 
{ 
    string s1 = "geeksforgeeks"; 
    string s2 = "practiceforgeeks"; 
      
    // to store the count of  
    // letters in the first string 
    int a1[26] = {0}; 
      
    // to store the count of  
    // letters in the second string 
    int a2[26] = {0}; 
    int i , j; 
    char ch; 
    char ch1 = 'a'; 
    int k = (int)ch1, m; 
      
    // for each letter present, increment the count 
    for(i = 0 ; i < s1.length() ; i++) 
    {  
        a1[(int)s1[i] - k]++; 
    } 
    for(i = 0 ; i < s2.length() ; i++) 
    { 
        a2[(int)s2[i] - k]++; 
    } 
  
    for(i = 0 ; i < 26 ; i++) 
    { 
        // the if condition guarantees that  
        // the element is common, that is,  
        // a1[i] and a2[i] are both non zero 
        // means that the letter has occurred 
        // at least once in both the strings 
        if (a1[i] != 0 and a2[i] != 0) 
        { 
            // print the letter for a number 
            // of times that is the minimum  
            // of its count in s1 and s2 
            for(j = 0 ; j < min(a1[i] , a2[i]) ; j++) 
            { 
                m = k + i; 
                ch = (char)(k + i);  
                cout << ch;  
            } 
        } 
    } 
    return 0; 
}  
