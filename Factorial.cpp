#include<cstdio>
 
int main(){
	unsigned t,n,count;
	scanf("%d",&t);
 
	for(int i = 0; i < t; i++) {
		scanf("%u",&n);
		count = 0;
		while(n) {
			n /= 5;
			count += n;
		}
		printf("%u\n",count);
	}
}