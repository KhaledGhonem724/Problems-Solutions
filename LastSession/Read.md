# Session Plan



# problems
## problem : Bars


## Problem : UVA 12100
Each paper in the queue has a priority (1 to 9).
Your paper is initially the m'th paper in the queue.
A paper is poped from the queue
if     :    there is no paper in the queue with a higher priority, print it (Takes 1 min).
Else   :    push the paper at the end back of the queue.
What is the time needed for your paper to get printed?
### concepts :
1- frequancy array
<br>
2- queue (front/back , push/pop)

#### frequancy array
the main goal is to count the apperance of the values in the original array.
![frequancyArray](frequancyArray.png)
so it can be done if the range of the values in the original array is known.
ex: the values is (0 < x < 5) 
![frequancyArrayFrom0to5](oriFreq0to5.png)

### code
```cpp
int f[10];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int T;  cin >> T;
    while(T--)
    {
        memset(f, 0, sizeof(f));
        int n, pos; cin >> n >> pos;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            int p; cin >> p;
            q.push(p);
            f[p] ++;
        } 
        int highest = 9;
        int time = 0;
        while(1)
        {
            while(f[highest] == 0) highest --;
            int p = q.front();    q.pop();
            if(p == highest){
                time ++;
                f[p] --;
                if(pos == 0)  break;
                else pos--;
            }else{
                q.push(p);
                if(pos == 0)  pos = q.size()-1;
                else pos--;
            }
        }
        cout << time << endl;
    }
    return 0;
}
```
