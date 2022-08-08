#include <stdio.h>
#include <stdlib.h>
float minX(float t[],int n){ //*fonction qui retourne la plus petite moyenne*//
    int i;
    float min_note;
    min_note=t[0];
    for(i=0;i<n;i++){
        if(t[i]<min_note){
            min_note=t[i];
        }
    }
return min_note;
}
float maxX(float t[],int n)
{
    //*fonction qui retourne la plus grande moyenne*//
    int i;
    float max_note;
    max_note=t[0];
    for(i=0;i<n;i++){
        if(t[i]>max_note){
            max_note=t[i];
        }
    }
return max_note;
}
int moyenne(float t[],int n)
{
    //*fonction qui retourne la moyenne sup�rieur ou �gale 10 *//
    int i,nb=0;
    for(i=0;i<n;i++){
        if(t[i]>=10){nb++;}
    }
return nb;
}
void tri(float t1[], float t2[],int n,int m)
{
    //*proc�dure qui tri des notes par ordre croissant de deux classes*//
int i,temp,j,k;
float c[n+m];
k=n-1;
for(i=0;i<n;i++){c[i]=t1[i];}
for(i=0;i<m;i++){k++;c[k]=t2[i];}
for (i=0; i<(n+m)-1; i++){
   for (j=i+1; j<(n+m); j++){
      if (c[i] > c[j]){
         temp=c[i];
         c[i] = c[j];
         c[j] = temp;
      }
   }
}
printf("\n\ntri des notes par ordre croissant de deux classes : \n");
for(i=0;i<(n+m);i++){
printf("%2.f\n",c[i]);}
}
int main()
{
    int i,n=3,m=5;
    float classe_A[13],classe_B[15];
    printf("entre  les notes de la premier classe : \n");
    for(i=0;i<n;i++){
       printf("%d note : ",i+1);
       scanf("%f",&classe_A[i]);
        while(classe_A[i]>20 || classe_A[i]<0){
          printf("note doit etre entre 0 et 20 !\n");
          printf("%d note : ",i+1);
          scanf("%f",&classe_A[i]);
        }

    }
    printf("entre les notes de la deuxieme classe : \n");
    for(i=0;i<m;i++){
       printf("%d note : ",i+1);
       scanf("%f",&classe_B[i]);

         while(classe_B[i]>20 || classe_B[i]<0){
          printf("note doit etre entre 0 et 20 !\n");
          printf("%d note : ",i+1);
          scanf("%f",&classe_B[i]);
        }
    }
    printf("primier classe\n");
    printf("\nla plus grande moyenne est %2.f et la plus petite moyenne est %2.f\n",maxX(classe_A,n),minX(classe_A,n));
    printf("les nombres des eleves a obtenu une moyenne est : %d\n\n",moyenne(classe_A,n));
    printf("deuxieme classe\n");
    printf("\nla deuxieme classe,la plus grande moyenne est %2.f et la plus petite moyenne est %2.f\n",maxX(classe_B,m),minX(classe_B,m));
    printf("les nombres des eleves a obtenu une moyenne est : %d",moyenne(classe_B,m));
    printf("tri\n");
    tri(classe_A,classe_B,n,m);
}
