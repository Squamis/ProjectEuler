//Thomas Haffenreffer
//Apr 10 2025


/*this code is solving the first problem for project Euler
	I am also using it to learn a little about benchmarking code and writting faster c code
 */




//Time taken: 0.230658 seconds
#include <stdio.h>
#include <time.h>

int M_of_3_or_5(int max);

int M_of_3_or_5(int max){
	/*If we list all the natural numbers below that are multiples of or , we get and . The sum of these multiples is . */

	int count = 0;
	for (int i = 0 ; i < max ; i++){
		if ( i % 3 == 0){
			count += i;
		}
		else if ( i % 5 == 0){
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
		M_of_3_or_5(1000);
	} 


	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

	printf("Time taken: %f seconds\n", cpu_time_used);

}
