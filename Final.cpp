/* Ejercicios de final para Algoritmos usando c++*/

#include <iostream>

using namespace std;

// PRACICA:

// 1) Desarrollo de funciones:
    
    // a. (OKK) Desarrolle una función que determine; dadas las 3 notas obtenidas, el promedio del estudiante:

    double prom(double a, double b, double c){
        int cantNotas = 3;
        double promedio = (a + b + c) / cantNotas;
        return promedio;
    }

    // b. Desarrolle una función que determine, dadas las 2 notas obtenidas, si un alumno promociona. Nota: Un alumno promociona si ambas son 8 o más.

// 2)	Desarrollo de procedimientos:

    // a. (OKK)	Desarrolle un procedimiento que, dado un lote de números que termina cuando ingresa 0, ingresados por el usuario, genere un vector ordenado

    void lote (int vec[]){
        int v;
        int p = 0;

        while (v != 0)
        {
            cin >> v;
            vec[p] = v;
            p++;
        }

        for(int i = 0; i < p-1; i++){
            for(int j = 0; j < p - 1; j++){
                if(vec[j] > vec[j + 1]){
                    int aux = vec[j];
                    vec[j] = vec[j + 1];
                    vec[j + 1] = aux;
                }
            }
        }
    }

    int main()
    {
        int vec[5];
        lote(vec);

        for(int i = 0; i < 5; i++){
            cout << vec[i] << " ";
        }
        
    }

    
    // b.	Desarrolle un procedimiento que genere una lista sin orden a partir de la intersección de 1 cola y 1 lista

    // a-	Una función que retorne una lista sin orden a partir de la Unión de una pila y una lista.




    // c.(OKK)	Desarrolle un procedimiento que genere una lista sin orden a partir de la intersección de 2 lista

    
    
    int criterio(int a, int b){
        return a - b;
    }

    Nodo* & listN(Nodo* & cola1, Nodo* cola2){
        Nodo* list = NULL;
        int dato;

        Nodo* recorrer1 = cola1;

        while(recorrer1 != NULL){
            dato = pop(cola1);
            insertar(datos, list, criterio);
        }

        Nodo* recorrer2 = cola2;

        while(recorrer2 != NULL){
            dato = desencolar(cola2);
            insertar(datos, l, criterio);
        }

        return list;
    }

    void List_SinOrd_I_LiLi(Nodo* & listN, Nodo* l1, Nodo* l2)
    {
        Nodo* aux1 = l1;

        while(aux1 != NULL){
            Nodo* dato = buscar(aux1 -> dato, l2, criterio);
            If (buscar(dato, l2, criterio) != NULL){
                agregar(aux1 -> dato, listN);
            }
            
        }
    }


    // d.	Desarrolle un procedimiento que muestre, dado un mes (MM), de qué cuatrimestre del año se trata. Nota: Deberá indicar si es el “Primero”, “Segundo” o “Tercero”.

// 3)	Desarrollo de subprogramas:
    
    // a.	Desarrolle una función que retorne una lista ordenada a partir de la Unión de 2 colas

    
    // b. (OKK)	Desarrolle una función que retorne una lista ordenada a partir de la union de una pila y una cola

    void List_Ord_U_PiCo(Nodo* & lista, Nodo* pila, Nodo* cfrente, Nodo* cfinal)
    {
        while (pila != NULL)
        {
            int d1 = pop(pila);
            insertar(d1, lista, criterio);
        }

        while (cfrente != NULL)
        {
            int d2 = desencolar(cfrente, cfinal);
            insertar(d2, lista, criterio);
        }
    }


    // c.Desarrolle una función que retorne una lista ordenada a partir de la unión de 2 listas



    // d. (OKK) Desarrolle una funcion que retorne una lista ordenada a partir de la interseccion de 2 colas
    
    void List_Ord_I_CoCo (Nodo* & lista3, Nodo* lista1, Nodo* cfrente, Nodo* lista2)
    {
        Nodo* aux = lista1;

        while(aux1 != NULL)
        {
            Nodo* dato = buscar(aux1 -> dato, lista2, criterio);
            if (dato != NULL)
            {
                agregar(aux1 -> dato, lista3);
            }
            
        }

        aux1 = aux1 -> sig;

    }

    // e.(OKK)	Desarrolle una función que retorne una lista ordenada a partir de la intersección de 2 listas

        void List_Ord_I_LiLi(Nodo* & l3, Nodo* l1, Nodo* l2)
    {
        Nodo* aux1 = l1;

        while(aux1 != NULL)
        {
            Nodo* dato = buscar(aux1 -> dato, l2, crit);
            if (d != NULL)
            {
                agregar(aux1 -> dato, lista3);
            }
            aux1 = aux1 -> sig;
        }

    }

    // f. Una función que retorne una lista sin orden a partir de la Unión de una pila y una lista.

// 4) Ejercicio Ballotaje: (OKK)

    /*        
    Dado un vector de Ballotage que indica los votos en la Argentina por provincia (23 y CABA) para presidente. El vector contiene:
    el código de la provincia, código de partido político ( A y B ) y la cantidad de votos. 
    Se sabe que el vector muestra por cada provincia y por cada partido los resultados, determinar:
    a.	¿Cuál es el total de votos recibidos para el partido A?
    b.	¿Cuál es el promedio de votos, por provincia, que recibió el partido B?
    c.	¿Cuál es el máximo de votos recibidos y en que provincia y para que partido fue?

    */

    struct Ballotage{
        int provincia;
        char partido;
        int votos;
    };

    struct Nodo{
        Ballotage datos;
        Nodo *sig;
    };

    int prov = 24

    void VTotal (Ballotage vec[])
    {
        int t = 0;

        for (int i = 0; i < 23; i++)
        {
            if (vec[i].partido == 'A')
            {
                t += vec[i].votos;
            }
        }
        cout << "El total de votos de A es: " << t << endl;
    }

    void PB (Ballotage vec[])
    {
        int cp = {};
        double pv = {};

        for (int i = 0; i < prov; i++)
        {
            if (vec[i].partido == 'B')
            {
                cp++;
                pv += vec[i].votos;
            }
        }
        if (cp > 0)
        {
            cout << "Promedio de votos a B" << pv / cp;
        }
        else
        {
            cout << "No hay votos para B";
        }
    }

    void maxV (Ballotage vec[])
    {
        int m;
        int p;

        for (int i = 0; i < prov; i++)
        {
            if (vec[i].votos > m)
            {
                m = vec[i].votos;
                p = i;
            }
        }
        cout << "El maximo de votos fue: " << m << " en la provincia: " << vec[pos].provincia << " para el partido: " << vec[pos].partido;
    }

    int main()
    {
        VTotal(vec);
        PB(vec);
        maxV (vec);
    }
    



// 5) Ejercicio Reservas cabañas: 

    /*
    a.	(OKK) Se tiene un vector de reservas de cabañas de la Patagonia, en las que se aplico un beneficio para turistas argentinos con los siguientes campos: 

        	Codigo de la cabaña
        	Cantidad de reservas de los turistas arg
        	Cantidad de huéspedes
        	Monto abonado.

    Además, se cuenta con una lista ordenada que contiene las ultimas reservas realizadas, cada nodo de la lista contiene:  

        	Codigo de la cabaña
        	Aplica beneficio de turismo (S o N)
        	Cantidad de huéspedes
        	Monto abonado.

    Se pide: Actualizar el vector reservas con la información que hay en la lista. 
    Por cada reserva en la que, SI haya aplicado el beneficio, debe actualizar la cantidad de huéspedes en el vector, incrementar en 1 la cantidad de reservas 
    y acumular el monto abonado. Se sabe que como máximo hay 100 cabañas.

    */

    int cabañas = 100;

    struct Patagonia{
        int codigo;
        int reservas;
        int huespedes;
        float monto;
    };

    struct ReservasR{
        int codigo;
        char beneficio;
        int huespedes;
        float monto;
    };

    struct NodoReservas{
        ReservasR dato;
        NodoReservas *sig;
    };

    void ActReservas (NodoReservas* &lista, Patagonia vec[]);

    int main()
    {
        Patagonia vec[cabañas];
        NodoReservas* lista;
        return EXIT_SUCCESS;
    }

    ActReservas (NodoReservas* &lista, Patagonia vec[])
    {
        NodoReservas* aux = lista;
        int i;

        while (aux != nullptr)
        {
            if (aux -> dato.beneficio == 'S')
            {
                i = busq_sec(vec, cabañas, aux -> dato.codigo);
                if (i != -1)
                {
                    vec[i].reservas++;
                    vec[i].huespedes += aux -> dato.huespedes;
                    vec[i].monto += aux -> dato.monto;
                }
            }
        }
          
    }

    /*
    b.	(OKK) Se tiene un vector de Reservas de los hoteles de Pinamar para el verano de 2024, que contiene el detalle de las reservas de cada hotel con los siguientes campos:
        	Codigo de Hotel
        	Cantidad de reservas
        	Cantidad de dias disponibles en la temporada
        Además, se cuenta con una lista ordenada que contiene las ultimas reservas realizadas, cada nodo de la lista contiene:  
        	Codigo de Hotel
        	Cantidad de dias reservados
        
    Se pide: Actualizar el vector reservas con la información que hay en la lista, incrementando la cantidad de reservas por cada una que aparezca en la lista, 
    como asi actualizando la cantidad de dias disponibles en base a los dias reservados. Ejemplo: Si en la lista el hotel 23 tiene 2 dias reservados, 
    esos 2 dias se deben restar en el campo de Cantidad de dias disponibles del vector. Se sabe que como máximo hay 50 hoteles.
    En base a la estrategia que propuso, explique porque cree que es la mas eficiente en términos de recursos ¿considera que hay otra alternativa? 
    ¿Qué beneficios o limitaciones tiene una vs la otra?
    */

   const int Hoteles = 50;

    struct Pinamar{
        int codigo;
        int reservas;
        int diasDisponibles;
    };

    struct Reserva{
        int codigo;
        int diasReservados;
    };

    struct NodoReservas{
        Reserva info;
        NodoReservas *sig;
    };

    void ActInfo (NodoReservas* &lista, Pinamar vec[])

    int main()
    {
        Pinamar vec[Hoteles];
        NodoReservas* lista;
        return EXIT_SUCCESS;
    }

    void ActuInfo (NodoReservas* &lista, Pinamar vec[])
    {
        NodoReservas* aux = lista;
        int pos;
        int i = 0;
        while (aux != nullptr)
        {
            pos = busq_sec(aux -> info.codigo, vec);
        
                if (pos != -1)
                {
                    vec[pos].reservas++;
                    vec[pos].diasDisponibles -= aux -> info.diasReservados;
                }

            aux = aux -> sig;
        }
          
    }

    
    /*
    En base a la estrategia que propuso, explique porque cree que es la mas eficiente en términos de recursos ¿considera que hay otra alternativa? 
    ¿Qué beneficios o limitaciones tiene una vs la otra?
    Es mas eficiente usar una busqueda secuencial en vez de una binaria, ya que la segunda necesita de un vector ordenado, y en este caso no lo tenemos.
    */


    /*
    C. Dado un vector de Stock que indica los muebles que hay en un depósito y contiene el código del fabricante, código del producto y la cantidad de unidades disponibles en depósito (Se sabe que máximo hay 200 muebles), determinar:
    a-	¿Cuál es el fabricante que más unidades tiene en depósito?
    b-	¿Cuál es el mueble que más unidades tiene?
    */


// 6) Ejercicio Archivo:

    /*
    a. (OKK)	Se tiene un archivo de disponibilidad de pasajes en tren Viajes2024.dat (sin orden) con el siguiente formato:
        	id del tramo
        	tipo de reserva: ´P´, ´E´ o ´S´ (premium, ejecutivo o estándar)
        	Precio. 
    Se pide: 
    Ordenar el archivo por id de tramo 
    Armar una lista y mostrarla en pantalla, ordenada por precio, si el tipo de reserva es P o E y el precio supera los $2500. NOTA: Solo se puede leer una vez el archivo.
    */

    struct Viajes{
        int idTramo;
        char tipoReserva;
        float precio;
    };

    struct Nodo{
        Viajes info;
        Nodo *sig;
    };

    int lreserva = 1;

    int insertar (Viajes info, Nodo* &lista, int criterio);
    void mostrar (Viajes* &lista);

    int criterioID (Viajes a, Viajes b){
        return a.idTramo - b.idTramo;
    }

    int criterioPrecio (Viajes a, Viajes b){
        return a.precio - b.precio;
    }

    int main(){

        FILE* archivo = fopen("Datos.bin", "rb");

        if(!archivo){
            cout << "Error al abrir el archivo" << endl;
            return EXIT_FAILURE;
        }

        Viajes info;
        Nodo* lista = NULL;
        Nodo* listaPrecio = NULL;
        Nodo* aux = lista;

        fread(&info, sizeof(Viajes), 1, archivo);

        while (!feof(archivo))
        {
            insertar(info, lista, criterioID); //a) Ord el archivo Viajes2024.dat por id de tramo

            if (info.tipoReserva == 'P' || info.tipoReserva == 'E' && info.precio > 2500)
            {
                insertar(info, listaPrecio, criterioPrecio); // b) Armar lista con tipo de reserva P o E y precio > 2500
            }
            fread(&info, sizeof(Viajes), 1, archivo);
        }
        fclose(archivo);

        archivo = fopen("Datos.bin", "wb"); // Abro archivo en modo escritura
        while (aux != NULL)
        {
            fwrite(aux -> dato, sizeof(Viajes), 1, archivo);
            aux = aux -> sig;
        }
        fclose(archivo);

        mostrar(listaPrecio);
        liberar(lista);
        liberar(listaPrecio);
    
    }


/*

    b. (OKK)	Se tiene un archivo de registros de bultos de productos almacenados en un deposito, con el nombre Stock.dat (sin orden), que posee el siguiente formato:
            	Codigo producto
            	Peso por bulto
            	Tipo A o B
            	Cantidad de bultos en stock
        Se pide:
        Ordenar el archivo stock.dat por código de producto
        Armar 2 lista y mostrarlas en pantalla:
            La primera con los productos que no tienen unidades en stock
            La segunda con los productos pesados (peso > 100) y Bebidas B
        NOTA: Solo se puede leer una vez el archivo.
        En base a la estrategia propuesta en la resolucion, considera que podría haber utilizado otra/s estructura/s para resolver el problema? Cuales y bajo que condiciones?

*/


    struct Stock{
        int codigoProducto;
        float peso;
        char tipo;
        int cantidad;
    };

    struct Nodo{
        Stock info;
        Nodo *sig;
    };

    int criterioProd(Stock a, Stock b){
        return a - b;
    }

    int main()
    {
        FILE* archivo = fopen("Stock.dat", "rb");

        if(!archivo){
            cout << "Error al abrir el archivo" << endl;
            return 1;
        }

        Stock info;
        info.cantidad = 0;
        info.codigoProducto = 0;
        info.peso = 0;

        Nodo* listaProd = NULL;
        Nodo* listaPeso = NULL;
        Nodo* listaNoStock = NULL;
        Nodo *aux = listaProd;

        fread(&info, sizeof(Stock), 1, archivo);

        while (!feof(archivo))
        {

            insertar(info, listaProd, criterioProd); //a) Ord el archivo Stock.data por codigo de producto

            if (info.cantidad == 0)
            {
                agregar(info, listaNoStock); // b1) Armar lista con productos sin stock
                {

                }
            }

            if (info.peso > 100 && info.tipo == 'B')// b2) Armar lista con productos pesados y bebidas B
            {
                agregar(info, listaPeso); 
            }
            fread(&info, sizeof(Stock), 1, archivo);

        }
        fclose(archivo);

        FILE* archivo = fopen("Stock.dat", "wb");
        while (aux != NULL)
        {
            fwrite(&aux -> dato, sizeof(Stock), 1, archivo);
            aux = aux -> sig;
        }

        return EXIT_SUCCESS;
    }