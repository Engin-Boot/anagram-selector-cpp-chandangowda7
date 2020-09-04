#include "anagram.h"
#include<algorithm>
#define NO_OF_CHARS 256 

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    //Fill the correct implementation here
    int count1[NO_OF_CHARS] = { 0 }; 
    int count2[NO_OF_CHARS] = { 0 }; 
    int iterator; 
   
   
    for (iterator = 0; word1[iterator]; iterator++) { 
        if(word1[iterator]!=' ')
        count1[tolower(word1[iterator])]++; 
    }
    for (iterator = 0; word1[iterator]; iterator++) {
        if(word2[iterator]!=' ')
        count2[tolower(word2[iterator])]++; 
    } 
  
    
    
  
    
    for (iterator = 0; iterator < NO_OF_CHARS; iterator++) 
        if (count1[iterator] != count2[iterator]) 
            return false; 
  
    return true;
    /*int lenofword1=word1.length();
    int lenofword2=word2.length();
    if(lenofword1!=lenofword2)
        return false;
    std::sort(word1.begin(),word1.end());
    std::sort(word2.begin(),word2.end());
    for(int iterator=0;iterator<lenofword1;iterator++)
    {if(word1[iterator]!=word2[iterator])
        return false;
    }
    return true;*/

}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    std::vector<std::string> anagrams;
    int anagramcount=0;
    //Fill the correct implementation here
    for(int iterator=0;iterator<candidates.size();iterator++)
    {
        if(WordPairIsAnagram(word,candidates[iterator]))
           {
           anagrams[anagramcount]=candidates[iterator];
              anagramcount++;
             }
    }
    return anagrams;
}
