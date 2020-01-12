/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include<iostream>
#include <stack> 
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> result;  
        int n=s.size();  
        if(n==0) return true;  
        for(int i=0;i<n;i++)  {  
            if(result.empty())  
                result.push(s[i]);  
            else if(result.top()=='('&&s[i]==')'||  
                    result.top()=='['&&s[i]==']'||  
                    result.top()=='{'&&s[i]=='}')   
                    result.pop();  
            else  
                    result.push(s[i]);  
                  
        }  
        return result.empty(); 
    }
};
// @lc code=end

