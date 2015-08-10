#include <stdio.h>
int a[200],b[200],lena,lenb,N,total1,total2,ans1,ans2;
int f[5][5]={0,0,1,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,1,1,1,0,0,0};
int main()
{
	scanf("%d %d %d",&N,&lena,&lenb);
	for (int i = 0; i < lena; i++)
		scanf("%d",&a[i]);
	for (int i = 0; i < lenb; i++)
		scanf("%d",&b[i]);
	for (int i = 1; i <= N; i++)
	{
		total1 += f[a[ans1]][b[ans2]];
		total2 += f[b[ans2]][a[ans1]];
		ans1 ++;
		if(ans1 == lena)
			ans1 = 0;
		ans2 ++;
		if(ans2 == lenb)
			ans2 = 0;
	}
	printf("%d %d",total1,total2);
	return 0;
}
