#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Juegos
{
    int id;
    char desarrollador[30];
    char titulo[50];
    char genero[20];
    char palabra[20];
    int publicacion;
    int ranking;
    int vendidos;
} Juegos;

Juegos Ingreso_juegoss(int id);
Juegos busqueda(int id);

Juegos Ingreso_juegoss(int id)
{
    Juegos juegos;
    FILE *biblio;
    juegos.id=id;
    printf("\n Ingrese el Desarrollador: ");
    scanf("%s",juegos.desarrollador);
    printf("\n Ingrese el Titulo: ");
    scanf("%s",juegos.titulo);
    printf("\n Ingrese el Genero: ");
    scanf("%s",juegos.genero);
    printf("\n Ingrese el Palabra Clave: ");
    scanf("%s",juegos.palabra);
    printf("\n Ingrese el A�o de Publicacion: ");
    scanf("%d",&juegos.publicacion);
    printf("\n Ingrese el ranking: ");
    scanf("%d",&juegos.ranking);
    printf("\n Ingrese el numero de copias vendidas: ");
    scanf("%d",&juegos.vendidos);

    biblio=fopen("Datos.txt" , "a");
    fprintf(biblio, "%s %s %s %s ",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra);
    fprintf(biblio, "%d %d %d \n", juegos.publicacion, juegos.ranking, juegos.vendidos);

    fclose (biblio);

    return juegos;
}

Juegos busqueda(int id)
{
    Juegos juegos;
    int opcion2;
     do
    {
        printf("\n\t\tSISTEMA DE BUSQUEDA DE JUEGOS\n");
        printf("\n\t\t\t Men� principal \n\n");
        printf("Ingrese la opcion a realizar: \n");
        printf("1.- Busqueda por Desarrollador.   \n");
        printf("2.- Busqueda por Genero. \n");
        printf("3.- Busqueda por Palabra clave. \n");
        printf("4.- Busqueda por A�o de publicacion. \n");
        printf("5.- Busqueda por Ranking \n");
        printf("6.- Salir\n");
        printf("Ingrese su Opci�n: ");
        scanf("%d", &opcion2);

    switch(opcion2)
    {
      case 1:
      {
      char nombrebusqueda[30];

      printf("\nIngrese el desarrollador: ");
      scanf("%s",nombrebusqueda);
      printf("Sistema de busqueda");
      printf("\nDesarrollador\t\t\t\tTitulo\t\t\t\tGenero\t\t\tPalabra clave\t\tA�o publicacion\t\tRanking\t\tVentas\n");

      FILE *biblio;
      biblio=fopen("Datos.txt" , "r");

      while(feof(biblio)==0)
      {
      fscanf(biblio,"%s",juegos.desarrollador);
      fscanf(biblio,"%s",juegos.titulo);
      fscanf(biblio,"%s",juegos.genero);
      fscanf(biblio,"%s",juegos.palabra);
      fscanf(biblio,"%d",&juegos.publicacion);
      fscanf(biblio,"%d",&juegos.ranking);
      fscanf(biblio,"%d",&juegos.vendidos);

      if(strcmp(juegos.desarrollador,nombrebusqueda )==0)

      printf("%s\t\t\t\t%s\t\t\t\t%s\t\t\t%s\t\t%d\t\t%d\t\t%d\n",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra, juegos.publicacion, juegos.ranking, juegos.vendidos);

      }
      fclose(biblio);
      printf("\n");
      system("pause");
      system("cls");


      break;
      }

      case 2:
      {
      char Temabusqueda[20];
      printf("\nLas categorias de los juegos son: ");
      printf("\n - Accion");
      printf("\n - Deportivo");
      printf("\n - Simulacion");
      printf("\n - Terror");
      printf("\n - Combate\n");
      scanf("%s",Temabusqueda);
      printf("Sistema de busqueda");
      printf("\nDesarrollador\t\t\t\tTitulo\t\t\t\tGenero\t\t\tPalabra clave\t\tA�o publicacion\t\tRanking\t\tVentas\n");

      FILE *biblio;
      biblio=fopen("Datos.txt" , "r");

      while(feof(biblio)==0)
      {
      fscanf(biblio,"%s",juegos.desarrollador);
      fscanf(biblio,"%s",juegos.titulo);
      fscanf(biblio,"%s",juegos.genero);
      fscanf(biblio,"%s",juegos.palabra);
      fscanf(biblio,"%d",&juegos.publicacion);
      fscanf(biblio,"%d",&juegos.ranking);
      fscanf(biblio,"%d",&juegos.vendidos);

      if(strcmp(juegos.genero,Temabusqueda )==0)

      printf("%s\t\t\t\t%s\t\t\t\t\t%s\t\t%s\t\t\t%d\t\t%d\t\t%d\n",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra, juegos.publicacion, juegos.ranking, juegos.vendidos);


      }
      fclose(biblio);
      printf("\n");
      system("pause");
      system("cls");


        break;
      }

      case 3:
      {
      char Palabrabusqueda[20];
      printf("\nIngrese una palabra clave para buscar: ");
      scanf("%s",Palabrabusqueda);
      printf("Sistema de busqueda");
      printf("\nDesarrollador\t\t\t\tTitulo\t\t\t\tGenero\t\t\tPalabra clave\t\tA�o publicacion\t\tRanking\t\tVentas\n");

      FILE *biblio;
      biblio=fopen("Datos.txt" , "r");

      while(feof(biblio)==0)
      {
      fscanf(biblio,"%s",juegos.desarrollador);
      fscanf(biblio,"%s",juegos.titulo);
      fscanf(biblio,"%s",juegos.genero);
      fscanf(biblio,"%s",juegos.palabra);
      fscanf(biblio,"%d",&juegos.publicacion);
      fscanf(biblio,"%d",&juegos.ranking);
      fscanf(biblio,"%d",&juegos.vendidos);

      if(strcmp(juegos.palabra,Palabrabusqueda )==0)

      printf("%s\t\t\t\t%s\t\t\t\t\t%s\t\t%s\t\t\t%d\t\t%d\t\t%d\n",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra, juegos.publicacion, juegos.ranking, juegos.vendidos);


      }
      fclose(biblio);
      printf("\n");
      system("pause");
      system("cls");


      break;
      }

      case 4:
      {
      int publicacionBusqueda;
      printf("\nIngrese un a�o para la busqueda: ");
      scanf("%d",&publicacionBusqueda);
      printf("Sistema de busqueda");
      printf("\nDesarrollador\t\t\t\tTitulo\t\t\t\tGenero\t\t\tPalabra clave\t\tA�o publicacion\t\tRanking\t\tVentas\n");

      FILE *biblio;
      biblio=fopen("Datos.txt" , "r");

      while(feof(biblio)==0)
      {
      fscanf(biblio,"%s",juegos.desarrollador);
      fscanf(biblio,"%s",juegos.titulo);
      fscanf(biblio,"%s",juegos.genero);
      fscanf(biblio,"%s",juegos.palabra);
      fscanf(biblio,"%d",&juegos.publicacion);
      fscanf(biblio,"%d",&juegos.ranking);
      fscanf(biblio,"%d",&juegos.vendidos);

      if(juegos.publicacion==publicacionBusqueda )

      printf("%s\t\t\t\t%s\t\t\t\t\t%s\t\t%s\t\t\t%d\t\t%d\t\t%d\n",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra, juegos.publicacion, juegos.ranking, juegos.vendidos);


      }
      fclose(biblio);
      printf("\n");
      system("pause");
      system("cls");


      break;
      }

      case 5:
      {
      int rankingbusqueda;
      printf("\nLos juegos estan calificados de 1 a 5. ");
      printf("\n1 peor calificado, 5 mejor calificado");
      printf("\nIngrese la calificacion del juego: ");
      scanf("%d",&rankingbusqueda);
      printf("Sistema de busqueda");
      printf("\nDesarrollador\t\t\t\tTitulo\t\t\t\tGenero\t\t\tPalabra clave\t\tA�o publicacion\t\tRanking\t\tVentas\n");
      if (rankingbusqueda<=5 && rankingbusqueda>=1 )
      {
      FILE *biblio;
      biblio=fopen("Datos.txt" , "r");

      while(feof(biblio)==0)
      {
      fscanf(biblio,"%s",juegos.desarrollador);
      fscanf(biblio,"%s",juegos.titulo);
      fscanf(biblio,"%s",juegos.genero);
      fscanf(biblio,"%s",juegos.palabra);
      fscanf(biblio,"%d",&juegos.publicacion);
      fscanf(biblio,"%d",&juegos.ranking);
      fscanf(biblio,"%d",&juegos.vendidos);

      if(juegos.ranking==rankingbusqueda )
      {
      printf("%s\t\t\t\t%s\t\t\t\t\t%s\t\t%s\t\t\t%d\t\t%d\t\t%d\n",juegos.desarrollador, juegos.titulo, juegos.genero, juegos.palabra, juegos.publicacion, juegos.ranking, juegos.vendidos);
      }

      }
      fclose(biblio);
      printf("\n");
      system("pause");
      system("cls");
      }
      else
      {
        printf("Opcion no encontrada\n");
      }


      break;
      }
    }


    }while (opcion2!= 6);

    return juegos;

   }

int main()
{
    Juegos juegoss[150];
    int opcion1;
    int posicion=0;
    do
    {
    printf("\n\t\tSISTEMA DE ALMACENAMIENTO DE JUEGOS\n");
    printf("\n\t\t\t Men� principal \n\n");
    printf("\n");
    printf("Escoja una opcion: \n");
    printf("1.- Almacenar el registro de un nuevo juego  \n");
    printf("NOTA: Si la palabra a registrar lleva dos palabras o mas, use de separador un guion  \n");
    printf("2.- Realizar una busqueda \n");
    printf("3.- Salir\n");
    printf("Ingrese su Opci�n: ");
    scanf("%d", &opcion1);

    switch(opcion1)
    {
      case 1:
      {
      int clavevalida=14789;
      int clave;
      char usuario[10];
      printf("\nIngrese el usuario: ");
      scanf("%s",usuario);
      printf("\nIngrese la Clave de registro: ");
      scanf("%d",&clave);


      if((strcmp(usuario,"gamershop")==0)&&(clave==clavevalida))
      {
      printf("\n\t\tRegistro de Juegos\n\n ");
      juegoss[posicion]=Ingreso_juegoss(posicion);
      printf("\n");
      system("pause");
      system("cls");
      }
      else
      printf("Clave no valida. Intente nuevamente.");
      printf("\n");
      system("pause");
      system("cls");

      break;
      }

      case 2:
      {

      juegoss[posicion]=busqueda(posicion);
      printf("\n");
      system("pause");
      system("cls");

      break;
      }

      case 3:
      {
      printf("Gracias por utilizar nuestro sistema");
      break;
      }
      default:
      printf("La opcion ingresada es incorrecta");


  }
  }while (opcion1!= 3);


    return 0;
}
