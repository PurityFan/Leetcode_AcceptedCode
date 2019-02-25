/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool cmp(Interval a,Interval b){
    return a.start < b.start;
}
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<Interval> ans;
        int len = intervals.size();
        Interval tmp;
        for(int i = 0;i < len;i++){
            tmp.start = intervals[i].start; tmp.end = intervals[i].end;
            while(i != (len-1) && intervals[i+1].start <= tmp.end) {tmp.end = max(tmp.end,intervals[i+1].end);i++;}
            tmp.end = max(tmp.end,intervals[i].end);
            ans.push_back(tmp);
        }
        return ans;
    }
};