//Thomas Haffenreffer
//Apr 10 2025


/*this code is solving the first problem for project Euler
	I am also using it to learn a little about benchmarking code and writting faster c code
 */




//Time taken: 0.230658 seconds
#include <stdio.h>
#include <time.h>

int M_of_3_or_5(int max);

int Arithmetic_Series_M_of_3_or_5(int max);

int Arithmetic_Series_helper(int n, int max);




int Arithmetic_Series_M_of_3_or_5(int max){
	return Arithmetic_Series_helper(3, max) + Arithmetic_Series_helper(5, max) - Arithmetic_Series_helper(15, max);

}


int Arithmetic_Series_helper(int n, int max){
	/* so this is using the formula 1+2+3+⋯+k = k(k+1)/2 but instead of counting my 1 we are either counting by 3 or 5*/
	int p = (max - 1) / n; //
	return n * p * (p + 1) / 2;

}

int M_of_3_or_5(int max){
	/*If we list all the natural numbers below that are multiples of or , we get and . The sum of these multiples is . */

	int count = 0;
	for (register int i = 0 ; i < max ; i++){ //using register cut the run time almost in half
		if ( i % 3 == 0 || i % 5 == 0){
			count += i;
		}
	}
	return count;
}

int main(){
	clock_t start, end; //yes I know that this way of benchmarking is not the best but it's a start
	double cpu_time_used;

	start = clock();

	for (int i = 0 ; i < 100000 ; i++){
		//M_of_3_or_5(1000);
		Arithmetic_Series_M_of_3_or_5(1000);
	} 


	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

	printf("Time taken: %f seconds\n", cpu_time_used);

}
