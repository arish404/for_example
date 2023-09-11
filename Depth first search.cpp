#include<iostream>
using namespace std;
int n,edge[10][10],visit[10],v;
class depth
{
public:
void initial(int);
void dfs(int);
};
void depth::initial(int n)
{
int i,j;
for(i=1;i<=n;i++)
{ 
for(j=1;j<=n;j++)
{
edge[i][j]=0;
}
}
for(i=1;i<=n;i++)
{
visit[i] = 0;
}
}
void depth::dfs(int v)
{
int i;
for(i=1;i<=n;i++)
{
if(edge[v][i]==1 && visit[i]==0)
{
cout<< i << " ";
visit[i]=1;
dfs(i);
}
}
}
int main()
{
depth dp;
int i,j,k,m;
cout <<"Enter Number of vertices & Edges \n";
cin >> n;
cin >> m;
dp.initial(n);
cout <<"\n Enter the source and destination \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
edge[i][j]=1;
edge[j][i]=1;
}
 
cout <<"Enter initial vertex ";
cin >>v;
cout <<"Traversal \n";
cout << v << " ";
visit[v]=1;
dp.dfs(v);
getc;
}

