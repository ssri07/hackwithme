class MyCalendar {
    map<int,int> mp;
        
public:
    MyCalendar() {
        mp.clear();
    }
    
    bool book(int start, int end) {
        auto x=mp.upper_bound(start);
        
        if(x==mp.end() || end<=x->second)
        {
            mp[end]=start;
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */