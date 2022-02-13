// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
 int x = 0;
	if (a < b)
		x = a;
	else 
		x = b;
	int max = 1;
	for (int i = 1; i <= x; ++i){
	if ((0 == a % i)&&(0 == b % i))
		max = i;
	}
	return max;
}
