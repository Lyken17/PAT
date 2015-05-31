//Athorized by zlg

#include <iostream>
#include <stack>
#include <queue>
#include <cstdio>
using namespace std;

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int sum = a + b;
	stack<char> my;
	int flag = sum < 0 ? 1 : 0;
	sum = abs(sum);
	int i = 0;
	if (sum == 0) my.push('0');
	while(sum > 0) {
		if (i % 3 == 0 && i > 0)
			my.push(',');
		my.push((sum % 10) + '0');
		i++;
		sum /= 10;
	}
	if (flag == 1) my.push('-');

	while (!my.empty()) {
		printf("%c",my.top());
		my.pop();
	}
	printf("\n");

	return 0;
}
