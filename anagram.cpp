#include "anagram.h"
#include<algorithm>
#define NO_OF_CHARS 256 

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    //Fill the correct implementation here
    int* count1=Anagram::allocateToarray(word1);
    
    int* count2=Anagram::allocateToarray(word2); 
    int iterator; 
   
   
   /* for (iterator = 0; iterator<word1.length(); iterator++) { 
        if(word1[iterator]!=' ')
        count1[tolower(word1[iterator])]++; 
    }
    for (iterator = 0; iterator<word2.length(); iterator++) {
        if(word2[iterator]!=' ')
        count2[tolower(word2[iterator])]++; 
    } */
  
    
    
  
    
    for (iterator = 0; iterator < NO_OF_CHARS; iterator++) 
        if (count1[iterator] != count2[iterator]) 
            return false; 
  
    return true;
   

}
int* Anagram:: allocateToarray(const std::string& word)
{
     int* count=new int[NO_OF_CHARS]{0}; 
    for (int iterator = 0; iterator<word.length(); iterator++) { 
        if(word[iterator]!=' ')
        count[tolower(word[iterator])]++; 
    }
    return count;
    
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    std::vector<std::string> anagrams;
    //int anagramcount=0;
    int iterator;
    //Fill the correct implementation here
    for(iterator=0;iterator<candidates.size();iterator++)
    {
        if(Anagram::WordPairIsAnagram(word,candidates[iterator]))
           {
           anagrams.push_back(candidates[iterator]);
             // anagramcount++;
             }
    }
    return anagrams;
}
