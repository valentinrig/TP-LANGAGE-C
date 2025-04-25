/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,b,c,r,p,t,m,e;
    int reste;
    int quotient;
    int points=0;
    int pa=0;
    int ps=0;
    int pm=0;
    int ptm=0;
    int pd=0;
    int sur=0;
    int Asur=0;
    int Msur=0;
    int Ssur=0;
    int TMsur=0;
    int Dsur=0;
    char nom[50];
    time_t temps;
    time(&temps);
    
    
    void enregistrer_score(const char* nom, int points, time_t temps) {
    FILE* file = fopen("scores.txt", "a+");  
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        return;
    }

    struct tm* currentTime = gmtime(&temps);

    currentTime->tm_hour += 2;

    char timeStr[100];
    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", currentTime);


    fprintf(file, "Nom: %s, Score: %d, Temps: %s\n", nom, points, timeStr);

    fclose(file);
}
    
    printf("Quel est votre nom?\n");
    scanf("%s",nom);


    printf("--------------------------------\n");
    printf("|1: Addition                    |\n");
    printf("|2: Soustraction                |\n");
    printf("|3: Multiplication              |\n");
    printf("|4: Tables des multiplications  |\n");
    printf("|5: Divisions                   |\n");
    printf("|0: Sortir du jeu               |\n");
    printf("--------------------------------\n");
    printf("Quel est votre choix?\n");
    scanf("%d", &a);
    
    int addition() {
    srand(time(NULL));
    b = rand() % 101;  
    c = rand() % 101;  
    int tentatives = 0;  
    printf("%d + %d = ?\n", b, c);
    printf("Entrez le résultat :\n");
    while (tentatives < 3) {
        scanf("%d", &r);
        tentatives++;
        if (r == b + c) { 
            if (tentatives == 1) {
                printf("BRAVO, vous avez trouvé du premier coup !\n");
                pa += 10;
                Asur += 10;
                printf("Score d'addition : %d/%d\n", pa, Asur);
                break;
            } else if (tentatives == 2) {
                printf("BRAVO, vous avez trouvé en deux tentatives !\n");
                pa += 5;
                Asur += 10;
                printf("Score d'addition : %d/%d\n", pa, Asur);
                break;
            } else if (tentatives == 3) {
                printf("BRAVO, vous avez trouvé en trois tentatives !\n");
                pa += 1;
                Asur += 10;
                printf("Score d'addition : %d/%d\n", pa, Asur);
                break;
            }
        } else {
            if (tentatives < 3) {
                printf("Mauvaise réponse. Essayez encore.\n");
            }
        }
    }
    if (r != b + c) {
        printf("Dommage, la réponse correcte était : %d\n", b + c);
    }
    printf("Désormais, vous avez les notes de:\n%d/%d en addition,\n%d/%d en soustraction,\n%d/%d en multiplication,\n%d/%d en tables de multiplication,\n%d/%d en division\n",pa,Asur,ps,Ssur,pm,Msur,ptm,TMsur,pd,Dsur);
    // Affichage du menu
    printf("--------------------------------\n");
    printf("|1: Addition                    |\n");
    printf("|2: Soustraction                |\n");
    printf("|3: Multiplication              |\n");
    printf("|4: Tables des multiplications  |\n");
    printf("|5: Divisions                   |\n");
    printf("|0: Sortir du jeu               |\n");
    printf("--------------------------------\n");
    printf("Quel est votre choix ?\n");
    scanf("%d", &a);
    }
    
    int multiplication(){
        srand(time(NULL));
            b = rand()%11;
            c = rand()%11;
            
            int Mtentatives = 0;
            
            printf("%d x %d =?\n",b,c);
            printf("Entrez le résultat\n");
            while(Mtentatives<3){
                scanf("%d",&r);
                Mtentatives++;
            
                if(r==b*c){
                    if(Mtentatives==1){
                        printf("Vous avez entré, %d\n", b*c);
                        printf("BRAVO, vous avez trouvé du premier coup\n");
                        pm=pm+10;
                        Msur=Msur+10;
                        printf("points de multiplication= %d/%d\n",pm,Msur);
                        break;
                    }else if(Mtentatives==2){
                        printf("Vous avez entré, %d\n", b*c);
                        printf("BRAVO, vous avez trouvé en deux tentatives\n");
                        pm=pm+5;
                        Msur=Msur+10;
                        printf("points de multiplication= %d/%d\n",pm,Msur);
                        break;
                    }else if(Mtentatives==3){
                        printf("Vous avez entré, %d\n", b*c);
                        printf("BRAVO, vous avez trouvé en trois tentatives\n");
                        pm=pm+1;
                        Msur=Msur+10;
                        printf("points de multiplication= %d/%d\n",pm,Msur);
                        break;
                    }
                } else {
                if (Mtentatives < 3) {
                    printf("Mauvaise réponse. Essayez encore.\n");
                }
            }
        }
        if (r != b * c) {
            printf("Dommage, la réponse correcte était : %d\n", b * c);
        }
    printf("Désormais, vous avez les notes de:\n%d/%d en addition,\n%d/%d en soustraction,\n%d/%d en multiplication,\n%d/%d en tables de multiplication,\n%d/%d en division\n",pa,Asur,ps,Ssur,pm,Msur,ptm,TMsur,pd,Dsur);
            printf("--------------------------------\n");
            printf("|1: Addition                    |\n");
            printf("|2: Soustraction                |\n");
            printf("|3: Multiplication              |\n");
            printf("|4: Tables des multiplications  |\n");
            printf("|5: Divisions                   |\n");
            printf("|0: Sortir du jeu               |\n");
            printf("--------------------------------\n");
            printf("Quel est votre choix?\n");
            scanf("%d", &a);
    }
    
    int soustraction(){
        srand(time(NULL));
            b = rand()%101;
            c = rand()%101;
            if(b<c){
                p=b;
                b=c;
                c=p;
            }
            int Stentatives = 0;
            
            printf("%d-%d =?\n",b,c);
            printf("Entrez le résultat\n");
            
            while (Stentatives < 3) {
                scanf("%d", &r);
                Stentatives++;
            
                if(r==b-c){
                    if(Stentatives==1){
                        printf("Vous avez entré, %d\n", b-c);
                        printf("BRAVO, vous avez trouvé du premier coup\n");
                        ps=ps+10;
                        Ssur=Ssur+10;
                        printf("points de soustraction= %d/%d\n",ps,Ssur);
                        break;
                    }else if(Stentatives==2){
                        printf("Vous avez entré, %d\n", b-c);
                        printf("BRAVO, vous avez trouvé en deux tentatives\n");
                        ps=ps+5;
                        Ssur=Ssur+10;
                        printf("points de soustraction= %d/%d\n",ps,Ssur);
                        break;
                    }else if(Stentatives==3){
                        printf("Vous avez entré, %d\n", b-c);
                        printf("BRAVO, vous avez trouvé en trois tentatives\n");
                        ps=ps+1;
                        Ssur=Ssur+10;
                        printf("points de soustraction= %d/%d\n",ps,Ssur);
                        break;
                    }
                } else {
                    if(Stentatives < 3){
                        printf("Vous avez entré, %d\n", r);
                        printf("Dommage, essayez encore\n");
                    }
                }
            }
            
            if(r!=b-c){
                printf("Dommage, la réponse correcte était: %d\n",b-c);
            }
    printf("Désormais, vous avez les notes de:\n%d/%d en addition,\n%d/%d en soustraction,\n%d/%d en multiplication,\n%d/%d en tables de multiplication,\n%d/%d en division\n",pa,Asur,ps,Ssur,pm,Msur,ptm,TMsur,pd,Dsur);        
            printf("--------------------------------\n");
            printf("|1: Addition                    |\n");
            printf("|2: Soustraction                |\n");
            printf("|3: Multiplication              |\n");
            printf("|4: Tables des multiplications  |\n");
            printf("|5: Divisions                   |\n");
            printf("|0: Sortir du jeu               |\n");
            printf("--------------------------------\n");
            printf("Quel est votre choix?\n");
            scanf("%d", &a);
    }
    
    int tables_des_multiplications(){
        int TMtentatives=0;
        printf("---------------------------------\n");
        printf("|1: Table de 1                   |\n");
        printf("|2: Table de 2                   |\n");
        printf("|3: Table de 3                   |\n");
        printf("|4: Table de 4                   |\n");
        printf("|5: Table de 5                   |\n");
        printf("|6: Table de 6                   |\n");
        printf("|7: Table de 7                   |\n");
        printf("|8: Table de 8                   |\n");
        printf("|9: Table de 9                   |\n");
        printf("|10: Table de 10                 |\n");
        printf("---------------------------------\n");
        printf("Sur quelle table voulez-vous vous exercer?\n");
        scanf("%d", &t);
        
        for(int i=0;i<=10;i++){
            printf("%d x %d= \n",t,i);
        }
        printf("\n");
        printf("Voulez-vous rééllement vous exercez sur cette table?\n");
        printf("--------------------------\n");
        printf("|1: OUI                   |\n");
        printf("|2: NON                   |\n");
        printf("--------------------------\n");
        scanf("%d",&e);
        
        if(e == 1) {
            for(int i = 0; i <= 10; i++) {
                int TMtentatives = 0;
                while (TMtentatives < 3) {
                    printf("%d x %d = ", t, i);
                    scanf("%d", &m);
                    TMtentatives++;

                    if(m == t * i) {
                        printf("Vous avez entré, %d\n", m);
                        if (TMtentatives == 1) {
                            printf("BRAVO, vous avez trouvé du premier coup\n");
                            ptm += 10;
                            TMsur += 10;
                        } else if (TMtentatives == 2) {
                            printf("BRAVO, vous avez trouvé en deux tentatives\n");
                            ptm += 5;
                            TMsur += 10;
                        } else if (TMtentatives == 3) {
                            printf("BRAVO, vous avez trouvé en trois tentatives\n");
                            ptm += 1;
                            TMsur += 10;
                        }else {
                            printf("PERDU, LOOSERRRRR, vous n'avez pas trouvé la bonne réponse qui était de %d\n", t*i);
                            TMsur += 10;
                        }
                        printf("Points de tables de multiplications = %d/%d\n", ptm, TMsur);
                        break;  // On passe à la multiplication suivante
                    } else {
                        if (TMtentatives < 3) {
                            printf("Mauvaise réponse. Essayez encore.\n");
                        }
                    }
                }
            }
        }
    printf("Désormais, vous avez les notes de:\n%d/%d en addition,\n%d/%d en soustraction,\n%d/%d en multiplication,\n%d/%d en tables de multiplication,\n%d/%d en division\n",pa,Asur,ps,Ssur,pm,Msur,ptm,TMsur,pd,Dsur);
    printf("--------------------------------\n");
    printf("|1: Addition                    |\n");
    printf("|2: Soustraction                |\n");
    printf("|3: Multiplication              |\n");
    printf("|4: Tables des multiplications  |\n");
    printf("|5: Divisions                   |\n");
    printf("|0: Sortir du jeu               |\n");
    printf("--------------------------------\n");
    printf("Quel est votre choix?\n");
    scanf("%d", &a);

    return 0;
}
    
    int divisions(){
        srand(time(NULL));
            b = rand()%11;
            c = (rand()%10) + 1;
            
            int Dtentatives = 0;
            
            printf("%d ÷ %d =?\n",b,c);
            printf("Quel est le quotient?\n");
            printf("Quel est le reste?\n");
            
            while(Dtentatives<3){
                printf("quotient=");
                scanf(" %d",&quotient);
                printf("reste=");
                scanf(" %d",&reste);
                Dtentatives++;
            
                if((quotient == b/c) && (reste == b%c)){
                    if(Dtentatives==1){
                        printf("Vous avez entré,quotient= %d, et reste= %d\n", b/c,b%c);
                        printf("BRAVO, vous avez trouvé du premier coup\n");
                        pd=pd+10;
                        Dsur=Dsur+10;
                        printf("points de divisions= %d/%d\n",pd,Dsur);
                        break;
                    }else if(Dtentatives==2){
                        printf("Vous avez entré,quotient= %d, et reste= %d\n", b/c,b%c);
                        printf("BRAVO, vous avez trouvé en deux tentatives\n");
                        pd=pd+5;
                        Dsur=Dsur+10;
                        printf("points de divisions= %d/%d\n",pd,Dsur);
                        break;
                    }else if(Dtentatives==3){
                        printf("Vous avez entré,quotient= %d, et reste= %d\n", b/c,b%c);
                        printf("BRAVO, vous avez trouvé en deux tentatives\n");
                        pd=pd+1;
                        Dsur=Dsur+10;
                        printf("points de divisions= %d/%d\n",pd,Dsur);
                        break;
                    }
                } else {
                    if (Dtentatives < 3) {
                        printf("Mauvaise réponse. Essayez encore.\n");
                    }
                }
            }


    if ((quotient != b / c) || (reste != b % c)) {
        printf("Dommage, la réponse correcte était :quotient= %d et reste= %d\n", b / c,b%c);
    }
    printf("Désormais, vous avez les notes de:\n%d/%d en addition,\n%d/%d en soustraction,\n %d/%d en multiplication,\n%d/%d en tables de multiplication,\n%d/%d en division\n",pa,Asur,ps,Ssur,pm,Msur,ptm,TMsur,pd,Dsur);
            printf("--------------------------------\n");
            printf("|1: Addition                    |\n");
            printf("|2: Soustraction                |\n");
            printf("|3: Multiplication              |\n");
            printf("|4: Tables des multiplications  |\n");
            printf("|5: Divisions                   |\n");
            printf("|0: Sortir du jeu               |\n");
            printf("--------------------------------\n");
            printf("Quel est votre choix?\n");
            scanf("%d", &a);
            
    }

    
    while((a<=5) && (a>0)){
        switch (a) {
            case 1:
                printf("Addition\n");
                addition();
                break;
            case 2:
                printf("Soustraction\n");
                soustraction();
                break;
            case 3:
                printf("Multiplication\n");
                multiplication();
                break;
            case 4:
                printf("Tables des multiplications\n");
                tables_des_multiplications();
                break;
            case 5:
                printf("Divisions\n");
                divisions();
                break;
            case 0:
                printf("Sortir du jeu\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
    points=pa+ps+pm+ptm+pd;
    sur=Asur+Msur+Ssur+TMsur+Dsur;
    enregistrer_score(nom,points,temps);
    return 0;
}
