#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,a,b,index1=0,index2=0;
	cin>>n;
	int d[100],e[100],out[200],carry=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		index1 = 0;
		while(a!=0){
			d[index1] = a%10;	
			a = a/10;
			index1++;
		}
		index2 = 0;
		while(b!=0){
			e[index2] = b%10;	
			b = b/10;
			index2++;
		}
		for(int j=0;j<index1+index2;j++){
			out[j] = 0;
			for(int k=0;k<=j;k++){
				if((j-k)<index2 && k<index1)
					out[j] = out[j] + d[k]*e[j-k];
			}
			out[j] = out[j] + carry;
			carry = out[j]/10;
			out[j] = out[j]%10;
		}
		for(int j=index1+index2-1;j>=0;j--){
			if(out[j]!=0){
				cout<<out[j];
			}
			
		}
		
	}

}
