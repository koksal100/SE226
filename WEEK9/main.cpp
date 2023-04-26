#include <iostream>
#include <string>
#include <algorithm>

using namespace std;



int* intersect(int* arr1, int* arr2, int size1, int size2, int& resultSize) {
    resultSize = size1 < size2 ? size1 : size2;
    int* result = new int[resultSize];
    int k = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k++] = arr1[i];
                break;
            }
        }
    }
    return result;
}

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string* getPalindromes(string* arr, int size, int& palindromesCount) {
    palindromesCount = 0;
    for(int i =0;i<size;i++){
        if(isPalindrome(arr[i])){
            palindromesCount++;
        }
    }
    string* newArray= new string[palindromesCount];
    for(int i = 0; i<palindromesCount;i++){
        if(isPalindrome(arr[i])){
            newArray[i]=arr[i];
        }
    }

    return newArray;
}

int* SieveOfEratosthenes(int* arr, int n) {
    int* primes = new int[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {  // skip composite numbers
            continue;
        }
        primes[count++] = arr[i];  // add prime number to array
        for (int j = i+1; j < n; j++) {
            if (arr[j] % arr[i] == 0) {  // mark multiples of prime as composite
                arr[j] = 0;
            }
        }
    }
    int* result = new int[count];
    for (int i = 0; i < count; i++) {
        result[i] = primes[i];
    }
    delete[] primes;
    return result;
}

string* anagrams(string word, string* word_list, int sizeOfWordList, int& numberForAnagrams) {
    
    string sorted_word = word;
    sort(sorted_word.begin(), sorted_word.end());
    
    
    string* anagrams = new string[sizeOfWordList];
    numberForAnagrams = 0;
    for (int i = 0; i < sizeOfWordList; i++) {
        
        string sorted_w = word_list[i];
        sort(sorted_w.begin(), sorted_w.end());
        
        
        if (sorted_w == sorted_word) {
            anagrams[numberForAnagrams] = word_list[i];
            numberForAnagrams++;
        }
    }
    
    return anagrams;
}

















int main() {

    
    
    return 0;
}
