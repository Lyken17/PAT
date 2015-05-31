#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <cstdio>
using namespace std;

struct Node
{
	double expo;
	double coeff;
};

int main(int argc, char const *argv[])
{
	list <Node> g_list1;
	list <Node> g_list2;
	list <Node> g_ans;
	int times;
	Node *tmp = new(Node);
	scanf("%d",&times);
	while(times--) {
		scanf("%lf%lf",&tmp->expo,&tmp->coeff);
		g_list1.push_back(*tmp);
	}


	return 0;
}