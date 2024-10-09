

 class MedianFinder {
public:
    vector<int> v;

    MedianFinder() {
        // Initial constructor, no need to initialize the vector explicitly.
    }
    
    void addNum(int num) {
        if (v.empty()) {
            v.push_back(num);
            return;
        }
        auto it = lower_bound(v.begin(), v.end(), num);
        v.insert(it, num);
    }
    
    double findMedian() {
        int n = v.size();
        if (n % 2 == 1) {
            return v[n / 2];
        } else {
            double t = v[n / 2] + v[(n / 2) - 1];
            return t / 2.0;
        }
    }
};