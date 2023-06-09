#include <bits/stdc++.h> 
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n){
	pair<int, int> pr{0, 0};

	int eSum = 0, aSum = 0;
	for(int i = 0; i < n; i++){
		eSum=eSum+i+1;
		aSum+=arr[i];
	}

	int eSqrSum = 0, aSqrSum = 0;
	for (int i = 0; i < n; i++) {
		eSqrSum=eSqrSum+((i+1)*(i+1));
		aSqrSum+=(arr[i]*arr[i]);
	}

	int diffMR = eSum - aSum;
	int diffsqrMR = eSqrSum - aSqrSum;

	int sumMR = diffsqrMR/diffMR;

	pr.first = (sumMR+diffMR)/2;
	pr.second = sumMR - pr.first;

	return pr;
}
