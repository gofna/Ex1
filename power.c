
#define e  2.71828182845904524


double Pow(double x , int y){
    double res = 1;  
    while (y > 0) { 
 
        if (y & 1) 
            res = res * x; 
  
        y = y >> 1; 
        x = x * x;  
    } 
    return res; 
} 
 

double Exp(int x){
double res = 1;
double E = e;
if (x < 0){
x = x*-1;
E = 1/e;
}
 while (x > 0) {  
res = res * E; 
x--;
}
return res;
}
