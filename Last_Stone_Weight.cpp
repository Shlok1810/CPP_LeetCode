//https://leetcode.com/problems/last-stone-weight/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //Created Priority Queue
        priority_queue<int> pq;
        //Inserted all element in priority queue
        for(auto a:stones)pq.push(a);
        //Checking till Priority queue size is 1
        while(pq.size()>1){
            //Largest element
            int y = pq.top();
            pq.pop();
            //Largest element after 1st pop out
            int x = pq.top();
            pq.pop();
            if(x==y)continue;
            else pq.push(y-x);//Replacing difference at y position
        }
        //Two possibilities of terminating loop, if Priority queue is empty otherwise it contain only one value
        if(pq.size()==0)return 0;
        else return pq.top();

    }
};
