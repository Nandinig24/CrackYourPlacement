class Solution {
public:
    int leastOpsExpressTarget(int x, int target) {
        if(x>target)
        return min(2*(x-target), 2*target-1);   // x=5 y=2 

            // ya to -5/5-5/5 kro 2 kam krne ke lie ya 5- (5/5+5/5+5/5); kro 2 lene ke lie
 if(x==target)
 return 0;

 long long sum=x;
 long long time=0;
 while(sum<target){
    time++;
    sum=sum*1ll*x;
 }
 if(sum==target)
 return time;


// 28 chaiye aur 125 tk pahuch gae ya to 1 minus krke aoo    2 ya 25 me + kro
long long l=INT_MAX;
long long r=INT_MAX;
 if(sum-target<target) 
      l = leastOpsExpressTarget(x, sum - target) + time;  // using subtrac
    r = leastOpsExpressTarget(x, target - (sum / x)) + time - 1;  // using add
     

        return min(l,r)+1;
    }
};

