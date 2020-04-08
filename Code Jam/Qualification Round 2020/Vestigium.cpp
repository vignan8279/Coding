#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int arr[N][N];
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>arr[i][j];
			}
		}
		int dp[N][N] = {0};
		int ans = 0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				dp[i][j] = arr[i][j];
				if(i == j){
					ans = ans+arr[i][j];
				}
			}
		}
		int sum1 = 0;
		int sum2 = 0;
		int sum = 0;
		for(int i=0;i<N;i++){
			int count = 0;
			// int countty=0;
			for(int j=0;j<N;j++){
				int a=abs(arr[i][j]);
				if(arr[i][a-1]>0){
					arr[i][a-1] = (-1)*(arr[i][a-1]);
				}
				else if(arr[i][a-1]<0){
					count++;
					break;
				}
			}
			// cout<<count;
			sum1 = sum1+count;
		}
 
 
		for(int i=0;i<N;i++){
			// int count = 0;
			int countty=0;
			for(int j=0;j<N;j++){
				int b=abs(dp[j][i]);
				if(dp[b-1][i]>0){
					dp[b-1][i] = (-1)*(dp[b-1][i]);
				}
				else{
					countty++;
					break;
				}
			}
			// cout<<countty;
			sum2 = sum2+countty;
		}
		sum = sum1+sum2;
		int i=1;
		cout<<"Case #"<<i<<": "<<ans<<" "<<sum1<<" "<<sum2<<"\n";
	}
 
	return 0;
}