//minimum edit distance to convert u into v, not running as i expect 
#include<iostream>
#include<cstdlib>
using namespace std;

//finding minimum of three numbers
int smallest(int x, int y, int z){
	return min(min(x,y),z);
}

//function editdistance which returns minimum edit dist between two string
int editdist(string u, string v){
	int m = u.size(); //string u size
	int n = v.size();  //string v size
	int r,c;           // for rows and column
	int ED[m+1][n+1];   // define 2D array of size one more than the given size of strings
	//intializing each row's last element as the highest numbr that can present in that row
	for(r=0; r<=m+1; r++){
	ED[r][n+1]= m-r+1;
	}
	//similarly for column too
	for (c=0; c<=n+1; c++){
		ED[m+1][c]= n-c+1;
	}
	//main logic
	for (c=n; c>=0; c--){
		for(r=m; r>=0; r--){
			if (u[r]==v[c])
				ED[r][c] = ED[r+1][c+1];
			else
				 ED[r][c] = 1 + smallest(ED[r+1][c+1],ED[r+1][c],ED[r][c+1]); 
		} 
	}
	
	return ED[0][0];
	}

int main(){
	system("cls");
string u,v;
cout<<"input the two words\n";
cin>>u>>v;

cout<<"the min edit distance between them is: "<<editdist(u,v);

return 0;
}
