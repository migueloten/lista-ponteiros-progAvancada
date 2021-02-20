#include <stdio.h>

void createVector(float *v, int n){
  for(int i = 0; i < n; i++){
    v[i] = rand()%100;
  }
}

void showVector(float *v, int n){
  for(int i = 0; i < n; i++){
    printf(" %.2f ", v[i]);
  }
  printf("\n");
}

void sortVector(float *v, int n) {
  float a;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1; j++){
      if(v[j] > v[j+1]){
        a = v[j];
        v[j] = v[j+1];
        v[j+1] = a;
      }
    }
  }
}

int main(){
  int n = 10;
  float *v;
  x = malloc(n * sizeof(float));

  createVector(x, n);
  sortVector(x, n);
  showVector(x, n);

  free(x);
  
  return 0;
  
  
}
