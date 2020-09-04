#include "anagram.h"

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    //Fill the correct implementation here
    int lenofword1=word1.length();
    int lenofword2=word2.length();
    if(lenofword1!=lenofword2)
        return false;
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    for(int i=0;i<lenofword1;i++)
    {if(word1[i]!=word2[i])
        return false;
    }
    return true;

}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    return candidates;
}
