#include <stdio.h>
#include <string.h>
void lcs(char *str1,char *str2,int m,int n)
{
	int arr[m][n];
	int i,j,counter=0,counter1=0,counter2=0,max1,max2,ans,ans2;
	int cnt[100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(str1[j]==str2[i])
			arr[j][i]=1;
			else 
			{
				arr[j][i]=0;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[j][i]==1)
				{
					counter1++;
					while(arr[j][i]==1)
					{
						i++;
						j++;
						counter++;
					}
					
					
					i -=counter;
					j -=counter;
					if(counter1==1)
					{
						max1=counter;
						max2=str1[j];
						ans=j;
						
					}	
					else if(counter>=max1&&str1[j]<max2)
					{
						max1=counter;
						max2=str1[j];				
						ans=j;
						
					}
					counter=0;
				}
			}
		}
				
	for(i=0;i<max1;i++,ans++)
	printf("%c",str1[ans]);
	
}
int main() 
{
	
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int m,n;
	m=strlen(str1);
	n=strlen(str2);
	lcs(str1,str2,m,n);
}