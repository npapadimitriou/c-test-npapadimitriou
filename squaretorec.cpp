#include <iostream>
#include <vector>

std::vector<int> squaresInRect (int a, int b);


int main(){

	int a,b;
	//a=2;
	//b=4;
	
	std::cout<<"Give rectangle's first edge"<<std::endl;
	std::cin >> a;
	std::cout<<"Give rectangle's second edge"<<std::endl;
	std::cin >> b;
	
	std::vector<int> result;

	result=squaresInRect(a,b);

	for (int &it : result) {
		std::cout << it << ' ';
	}
	std::cout << std::endl;
}



std::vector<int> squaresInRect (int a, int b){

	std::vector<int> res;
	int c=0;
	if (a==b){

		 res.push_back(c);
		 return res;
	}
	else{
		while(a!=b){
			if(a>b){
				a=a-b;
				res.push_back(b);

			}//1st hypothesis
			else {
				b=b-a;
				res.push_back(a);

			}	//2nd hypothesis

}//while closes

		res.push_back(a);

	}

return res;

}//function closes
