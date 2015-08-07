#include<stdio.h>
#include<algorithm>
using namespace std;
int T,n,t[100010],w[100010],f[1000][1000];
int main()
{
	scanf("%d %d",&T,&n);
	for(int i = 1 ; i <= n ; i++)
		scanf("%d %d",&t[i],&w[i]);
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j=T;j>=t[i];--j)
		if(f[i-1][j]>f[i-1][j-t[i]]+w[i])
			f[i][j]=f[i-1][j];
		else
			f[i][j]=f[i-1][j-t[i]]+w[i];
	}
	printf("%d",f[n][T]);
	return 0;
}
