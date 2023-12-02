//complex numbers - using strings

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float atof1(char *arr){
    int i,j,k;
    float val;
    char c;
    i=0;
    j=0;
    val=0;
    k=0;
    while ((c = *(arr+i))!='\0'){
        if (c!='.'){
            val =(val*10)+(c-'0');
            if (k == 1){
                --j;
            }
        }
        if (c=='.'){ if (k == 1) return 0; k=1;}
        ++i;
    }
    val = val*pow(10,j);
    return val;
}

float RPofCN(char str[])
{
	int i=0,k=0;
	while(str[i]!='\0')
	{
		if(str[i]=='+'||str[i]=='-')
		{
			k=1;
		}
		i++;
	}
	if(k)
	{
		float ans1=atof(str);
		return ans1;
	}
i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='i')
		{
			k=1;
		}
		i++;
	}
	if(k)
	{
		float ans2=0.0;
		return ans2;
	}
	else
	{
		float ans3=atof(str);
		return ans3;
	}
}
float IPofCN(char str[])
{
	int i=0,si=0,k=0;
	while(str[i]!='\0')
	{
		if(str[i]=='+'||str[i]=='-')
		{
			k=1;
			if(str[i]=='-')
			{
				si=-1;
			}
			break;
		}
		i++;
	}
	i++;
	int j=0;
	char st[10];
	if(k)
	{
		while(str[i]!='\0')
		{
			st[j++]=str[i++];
		}
		float ans1=atof(st);
		if(si==-1)
		{
			ans1=0.0-ans1;
		}
		return ans1;
	}
	i=0,si=0;
	while(str[i]!='\0')
	{
		if(str[i]=='i')
		{
			k=1;
		}
		i++;
	}
	if(k)
	{
		float ans2=atof(str);
		return ans2;
	}
	else
	{
		float ans3=0.0;
		return ans3;
	}
}
float addTwoNo(float n,float m)
{
	float ans=n+m;
	return ans;
}
float subTwoNo(float n,float m)
{
	float ans=n-m;
	return ans;
}
void add(char a[],char b[])
{
	float RPofAns=RPofCN(a)+RPofCN(b);
	float IPofAns=IPofCN(a)+IPofCN(b);
	if(IPofAns<0)
	{
	    printf("sum is ---> %.2f %.2f%c\n",RPofAns,IPofAns,'i');	
	}
	else
	{
	printf("sum is ---> %.2f %c %.2f%c\n",RPofAns,'+',IPofAns,'i');
    }
}
void subtract(char a[],char b[])
{
	float RPofAns=RPofCN(a)-RPofCN(b);
	float IPofAns=IPofCN(a)-IPofCN(b);
	if(IPofAns<0)
	{
	    printf("Difference is ---> %.2f %.2f%c\n",RPofAns,IPofAns,'i');	
	}
	else
	{
	    printf("Difference is ---> %.2f %c %.2f%c\n",RPofAns,'+',IPofAns,'i');
    }
}

int main()
{
	char str1[20];
	printf("Enter 1st complex no: ");
	gets(str1);
	printf("\n");
	char str2[20];
	printf("Enter 2nd complex no: ");
	gets(str2);
	printf("\n");
	add(str1,str2);
	subtract(str1,str2);
}