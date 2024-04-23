#include <iostream>  
#include <vector>  
#include <sstream>  
#include <string>  

std::pair<std::string, int> findLongestWord(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::pair<std::string, int> longestWord = { "", 0 };

    while (iss >> word) {
        if (word.length() > longestWord.second) {
            longestWord.first = word;
            longestWord.second = word.length();
        }
    }

    return longestWord;
}

int main() {
    // 示例句子  
    std::string sentence1 = "I live in a beautifully Chinese town.";
    std::string sentence2 = "I like Chinese food.";

    // 查找最长单词  
    std::pair<std::string, int> longestWord1 = findLongestWord(sentence1);
    std::pair<std::string, int> longestWord2 = findLongestWord(sentence2);

    // 输出结果  
    std::cout << "Longest word in sentence 1: " << longestWord1.first << " (length: " << longestWord1.second << ")" << std::endl;
    std::cout << "Longest word in sentence 2: " << longestWord2.first << " (length: " << longestWord2.second << ")" << std::endl;

    return 0;
}