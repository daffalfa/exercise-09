#include<iostream>
using namespace std;
const int maxElement=100;
struct stack{
	char a[maxElement];
	int top;
};
stack S;
void createStack(stack& S)
{
	S.top=-1;
}
void pushStack (stack& S, char newElement)
{
	if(S.top==maxElement-1)
    {
		cout << "stack penuh\n";
	}
	else
	{
		S.top+=1;
		S.a[S.top]=newElement;
	}
}
void popStack(stack& S)
{
	cout << S.a[S.top];
	S.top-=1;
}
int main()
{
	int n;
	char newElement;
	cout << "Berapa Huruf	: "; cin >> n;
	for (int i=0; i<n;i++)
    {
	 	cin>>newElement;
		pushStack(S, newElement);
	}
	for(int i=0;i<n;i++)
	{
		popStack(S);
	}
}
