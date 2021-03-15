#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double x1(double x2, double x3){ //double x4){
	double p1 = 0.125;
	double p2 = x2*(4);
	double p3 = x3*(3);
	//double p4 = (-2)*x4;
	double tp = 14+(p2)+(p3);
	double x1 = p1*tp;
	return x1;
}

double x2(double x1, double x3){// double x4){
	double p1 = -0.2;
	double p2 = x1*(-2);
	double p3 = (-3)*x3;
	//double p4 = (-1)*x4;
	double tp = -1+(p2)+(p3);
	double x2 = p1*tp;
	return x2;
}

double x3(double x1, double x2){// double x4){
	double p1 = 0.111111;
	double p2 = 3*x1;
	double p3 = (-1)*x2;
	//double p4 = 0;
	double tp = 9+(p2)+(p3);
	double x3 = p1*tp;
	return x3;
}

/*double x4(double x1, double x2, double x3){
	double p1 = 0.125;
	double p2 = (-1)*x1;
	double p3 = (-1)*x2;
	double p4 = x3*(-8);
	double tp = 0.1+(p2)+(p3)+(p4);
	double x4 = p1*tp;
	return x4;
}*/

void conversao(){
	double a11 = 8, a22 = 5, a33 = 9, a44 = 12;
	double s1 = 0, s2 = 0, s3 = 0, s4 = 0;
	s1 = 4+3+0;
	s2 = 2+3+0;
	s3 = 3+1+0;
	//s4 = 2+2+1;
	printf("a11 = %lf -> %lf\n",a11,s1);
	printf("a22 = %lf -> %lf\n",a22,s2);
	printf("a33 = %lf -> %lf\n",a33,s3);
	//printf("a44 = %lf -> %lf\n",a44,s4);
	if(a11>s1&&a22>s2&&a33>s3&&a44>s4){
		printf("Converve por linhas\n\n");
	}
}

int main(){
	double x1a=0, x2a=0, x3a, x4a=0;
	double ant1=0, ant2=0, ant3=0, ant4=0;
	double res1=0, res2=0, res3=0, res4=0;
	double dif=0.001;
	conversao();
	for(int i=0; i<10; i++){
		x1a = x1(ant2,ant3);
		x2a = x2(ant1,ant3);
		x3a = x3(ant1,ant2);
		//x4a = x4(ant1,ant2,ant3);
		res1 = x1a - ant1;
		res2 = x2a - ant2;
		res3 = x3a - ant3;
		//res4 = x4a - ant4;
		ant1 = x1a;
		ant2 = x2a;
		ant3 = x3a;
		//ant4 = x4a;
		printf("TENTATIVA %d:\nX1 = %lf, X2 = %lf, X3 = %lf\n",i+1,x1a,x2a,x3a);
		printf("R1 = %lf, R2 = %lf, R3 = %lf\n\n",res1,res2,res3);
	}//while((res1>dif)&&(res2>dif)&&(res3>dif)&&(res4>dif));
	return 0;
}

