#include <iostream>
using namespace std ;

class Matrix {
	public :
	
	int mat[2][2];
	
	Matrix (int a =0,int b=0 , int c=0 , int d=0 ){
		
		mat[0][0]=a;
		mat[0][1]=b;
		mat[1][0]=c;
		mat[1][1]=d;
	}
	
	Matrix operator +(Matrix & obj1){
		return Matrix (
		
		mat[0][0]+obj1.mat[0][0],
		mat[0][1]+obj1.mat[0][1],
		mat[1][0]+obj1.mat[1][0],
		mat[1][1]+obj1.mat[1][1]
		
		);
	}
	
	 
    Matrix operator*(const Matrix& obj1) const {
        return Matrix(
            mat[0][0] * obj1.mat[0][0] ,
            mat[0][1] * obj1.mat[0][1] ,
            mat[1][0] * obj1.mat[0][0] ,
            mat[1][0] * obj1.mat[0][1] 
        );
    }
    
   bool operator==(Matrix& obj1) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (mat[i][j] != obj1.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

	
	void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};
	
	
	





	int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    cout << "Matrix 1:" << endl;
    m1.display();

    cout << "Matrix 2:" << endl;
    m2.display();

   
    Matrix sum = m1 + m2;
    cout << "Sum of matrices" << endl;
    sum.display();

    
    Matrix product = m1 * m2;
    cout << "Product of matrices:" << endl;
    product.display();
    
    bool obj1=m1==m2;
    if (obj1){
    	cout<<"objects are same "<<endl;
	}
	else {
		cout<<"Not same "<<endl;
	}
    
    

	
	
	return 0;
}


