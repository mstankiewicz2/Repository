#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void wartosc_zero(int *tab, unsigned int n){
for (int i=0; i<n; i++){
tab[i] = tab[i] * 0;
printf("%d\n", tab[i]);
}
}
void wartosc_indeks(int *tab, unsigned int n){
for (int i=0; i<n; i++){
tab[i] = i;
printf("%d\n", tab[i]);
}
}
void podwojna_wartosc(int *tab, unsigned int n){
for (int i=0; i<n; i++){
tab[i] = tab[i] * 2;
printf("%d\n", tab[i]);
}
}
void wartosc_bezwzgledna(int *tab, unsigned int n){
for (int i=0; i<n; i++){
int abs(int);
tab[i] = abs(tab[i]);
printf("tab[%d]\n", tab[i]);
}
}
int drukuj(){
unsigned int n=10;
int tab[10] = { -10, -5, 0, 5, 10, 15, 20, 25, 30, 35 };
printf("Elementy tablicy: ");
for (int i = 0; i < n; i++){
printf("%d ", tab[i]);
}
}
int drukuj1(){
unsigned int n=10;
int tab[10] = { -10, -5, 0, 5, 10, 15, 20, 25, 30, 35 };
wartosc_zero(tab, n);
}
int drukuj2(){
unsigned int n=10;
int tab[10] = { -10, -5, 0, 5, 10, 15, 20, 25, 30, 35 };
wartosc_indeks(tab, n);
}
int drukuj3(){
unsigned int n=10;
int tab[10] = { -10, -5, 0, 5, 10, 15, 20, 25, 30, 35 };
podwojna_wartosc(tab, n);
}
int drukuj4(){
unsigned int n=10;
int tab[10] = { -10, -5, 0, 5, 10, 15, 20, 25, 30, 35 };
wartosc_bezwzgledna(tab, n);
}
int main(){
drukuj();
printf("\n");
drukuj1();
drukuj2();
drukuj3();
drukuj4();
printf("\n");
return 0;
} 

