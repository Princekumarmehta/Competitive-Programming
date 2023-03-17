//Vector and Pair (v2)

#include <bits/stdc++.h>
using namespace std;
int main(){
	pair <int,int> p1[5];
	int a[5];
	for(int i=0;i<5;i++){
	cin>>p1[i].first>>p1[i].second;
	 a[i]=p1[i].first+p1[i].second;
}
for(int i=0;i<5;i++){
	cout<<p1[i].first<<" "<<p1[i].second<<endl;
	cout<<"SUm is "<<a[i]<<endl;
}
vector <int> v1; //dynamic size , i.e size increases after inserting elements
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
        cout<<"We're in input and size is: "<<v1.size()<<endl;
    }
    cout<<"Size is: "<<v1.size()<<endl; //0(1) 
    for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
    }
    vector <int> v2=v; // 0(n)
    v2.pop_back(); 
    vector <int> v3(5); //5 size all zero
    v3.push_back(7); //Now size 6  with 0{6},7
    vector <int> v4(5,1); // 5 size all 1
    //use void print(vector <int> &v) instead of just v (copy issue)
    vector <string> s1;
    vector <float> f1;
return 0;
}
