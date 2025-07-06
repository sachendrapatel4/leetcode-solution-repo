class Solution {
public:
    vector<int>numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>wordFreq;

        for (const string& word :words) {
            char minChar ='z';
            int count =0;
            for(char c :word){
                if(c<minChar){
                    minChar =c;
                    count =1;
                }else if(c==minChar) count++;
            }
            wordFreq.push_back(count);
        }
        sort(wordFreq.begin(),wordFreq.end());

        vector<int>result;
        for(const string& query :queries) {
            char minChar ='z';
            int count =0;
            for(char c :query){
                if(c<minChar){
                    minChar =c;
                    count =1;
                } else if(c==minChar) count++;
            }
            // Count how many in wordFreq are greater than count
            int greater =wordFreq.end() - upper_bound(wordFreq.begin(),wordFreq.end(),count);
            result.push_back(greater);
        }
        return result;
    }
};
