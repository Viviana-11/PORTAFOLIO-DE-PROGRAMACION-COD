---
title: ""
output: 
  pdf_document:
    toc: false
    number_sections: false
    keep_tex: true
  html_document:
    toc: false
    number_sections: false
    theme: cerulean
    df_print: paged
    css: estilos.css
---

<div style="text-align: center; page-break-after: avoid;">

<table width="100%" style="border: none;">
  <tr>
    <td width="20%" align="left">
      <img src="Logo unap.png" alt="Logo Izquierdo" width="120">
    </td>
    <td width="60%" align="center">
      <h1 style="color:#00509d; font-family:Arial, sans-serif;">UNIVERSIDAD NACIONAL DEL ALTIPLANO - PUNO</h1>
      <h2 style="color:#003f88; font-family:Arial, sans-serif;">FACULTAD DE INGENIERÍA ESTADÍSTICA E INFORMÁTICA</h2>
      <h3 style="color:#0077b6; font-family:Arial, sans-serif;">CÓDIGOS DE PROGRAMACIÓN - ESTRUCTURA DE DATOS</h3>
    </td>
    <td width="20%" align="right">
      <img src="FINESI.png" alt="Logo Derecho" width="120">
    </td>
  </tr>
</table>

<br><br><br>

<h2 style="color:#03045e; font-family:Arial, sans-serif;">LIBRO DE PROGRAMACIÓN</h2>

<br><br><br><br>

<p style="font-size:18px;"><strong>Alumno:</strong> Quisbert Quispe Viviana Mary</p>
<p style="font-size:18px;"><strong>Curso:</strong> Estructura de Datos</p>
<p style="font-size:18px;"><strong>Docente:</strong> Fred Torres Cruz</p>
<p style="font-size:18px;"><strong>Fecha:</strong> 29 de mayo de 2025</p>

</div>

<div style="page-break-after: always;"></div>



























## Índice

- [Introducción – ¿Qué es programar?](capitulos/00-introduccion.md)

### 🧱 PARTE 1: Bases de la programación

- [Capítulo 1 – Primeros pasos: tu primer programa](capitulos/01-primer-programa.md)
- [Capítulo 2 – Variables, tipos de datos y entrada/salida](capitulos/02-variables.md)
- [Capítulo 3 – Operadores y expresiones](capitulos/03-operadores.md)
- [Capítulo 4 – Estructuras de control: if, if-else, switch](capitulos/04-control.md)

### 🔁 PARTE 2: Todos los bucles

- [Capítulo 5 – Bucle while: repite mientras algo sea cierto](capitulos/05-while.md)
- [Capítulo 6 – Bucle do-while: haz al menos una vez](capitulos/06-do-while.md)
- [Capítulo 7 – Bucle for: repite con conteo claro](capitulos/07-for.md)
- [Capítulo 8 – Bucles anidados y control de bucles (break, continue)](capitulos/08-anidados.md)

### 📦 PARTE 3: Datos estructurados

- [Capítulo 9 – Arreglos (arrays): muchas variables en una sola](capitulos/09-arreglos.md)
- [Capítulo 10 – Cadenas de texto: arrays de caracteres](capitulos/10-cadenas.md)
- [Capítulo 11 – Estructuras (struct): tus propios tipos de datos](capitulos/11-struct.md)

### 🔗 PARTE 4: Estructuras de datos dinámicas

- [Capítulo 12 – Punteros: direcciones y memoria](capitulos/12-punteros.md)
- [Capítulo 13 – Listas enlazadas simples](capitulos/13-lista-enlazada.md)
- [Capítulo 14 – Listas doblemente enlazadas](capitulos/14-lista-doble.md)
- [Capítulo 15 – Listas circulares](capitulos/15-lista-circular.md)

### 📚 PARTE 5: Pilas, colas y recursión

- [Capítulo 16 – Pilas (Stacks): último en entrar, primero en salir](capitulos/16-pilas.md)
- [Capítulo 17 – Colas (Queues): primero en entrar, primero en salir](capitulos/17-colas.md)
- [Capítulo 18 – Colas circulares](capitulos/18-colas-circulares.md)
- [Capítulo 19 – Recursión: funciones que se llaman a sí mismas](capitulos/19-recursion.md)

--------

- [Introducción – ¿Qué es programar?](capitulos/00-introduccion.md)

Programar en C++ es el proceso de escribir instrucciones en el lenguaje de programación C++ para indicarle a una computadora exactamente qué debe hacer y en qué orden. Estas instrucciones deben ser claras, precisas y lógicas, ya que la computadora no puede adivinar ni interpretar como lo haría una persona.

Programar es como enseñarle a una máquina cómo realizar una tarea, paso a paso, tal como lo harías con un robot.

🧠 Ejemplo cotidiano: el robot que hace té
Imagina que tienes un robot, y quieres que prepare una taza de té. Para que lo haga correctamente, debes darle las instrucciones en el orden correcto. Sería algo así:

Calentar agua

Colocar una bolsa de té en la taza

Verter el agua caliente en la taza

Esperar 3 minutos

Sacar la bolsa

Servir

Estas instrucciones deben ser exactas. Si no le dices al robot que caliente el agua antes de verterla, por ejemplo, el té no saldrá bien. Lo mismo ocurre cuando se programa: cada paso importa y debe estar bien pensado.



---

### 🧱 PARTE 1: Bases de la programación
- [Capítulo 1 – Primeros pasos: tu primer programa](capitulos/01-primer-programa.md)

## 🚀 Primeros pasos para tu primer programa

Crear tu primer programa en C++ es más fácil de lo que parece. Aquí te explico paso a paso cómo hacerlo desde cero.

### 🧰 1. Prepara tus herramientas

Antes de programar, necesitas tener lo siguiente:

- Un editor de texto o entorno de desarrollo (IDE). Puedes usar:
  - **Code::Blocks**
  - **Dev-C++**
  - **Visual Studio Code**
  - **Replit (en línea)**

- Un compilador de C++, como **g++** (viene con Code::Blocks y otras IDEs).

---

### ✍️ 2. Escribe tu primer programa

Abre tu editor y escribe el siguiente código:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hola, mundo" << endl;
    return 0;
}
```


### Línea 1: `#include <iostream>`

Esta línea le dice al programa que queremos usar la librería **iostream**, que contiene las herramientas necesarias para mostrar texto en pantalla (como `cout`) y leer datos del teclado.



### Línea 2: `using namespace std;`

Aquí indicamos que vamos a usar el **espacio de nombres estándar** (std). Esto nos permite escribir simplemente `cout` en lugar de `std::cout`.


### Línea 3: `int main() {`

Esta es la función principal llamada `main`. Es el punto de inicio de cualquier programa en C++. Cuando ejecutas tu programa, lo primero que hace la computadora es entrar a esta función y ejecutar las instrucciones que están dentro de ella.



### Línea 4: `cout << "Hola, mundo" << endl;`

* `cout` es la instrucción que envía información a la pantalla (consola).
* `<<` es el operador que direcciona lo que queremos mostrar hacia `cout`.
* `"Hola, mundo"` es el texto que queremos que aparezca.
* `endl` significa **end line** (fin de línea), que hace un salto de línea para que cualquier cosa que se imprima después salga en una línea nueva.
* La línea termina con `;` que indica el fin de la instrucción.

Esta línea hace que en la pantalla aparezca:

```
Hola, mundo
```


### Línea 5: `return 0;`

Con esta instrucción le decimos al sistema que el programa terminó correctamente. El número `0` es un código que representa éxito.



### Línea 6: `}`

Esta llave cierra la función `main`, indicando que no hay más instrucciones para ejecutar.



- [Capítulo 2 – Variables, tipos de datos y entrada/salida](capitulos/02-variables.md)

# 📘 Capítulo 2 – Variables, tipos de datos y entrada/salida

En este capítulo aprenderás tres cosas muy importantes para todo lenguaje de programación:

1. Qué son las **variables**
2. Qué tipos de datos existen
3. Cómo interactuar con el usuario usando **entrada (`cin`)** y **salida (`cout`)**.

---

## 🔐 ¿Qué es una variable?

Una **variable** es un espacio en la memoria de la computadora donde se guarda un dato que puede cambiar durante la ejecución del programa.  

Es como una cajita con nombre, donde puedes guardar valores.

### ✳️ Ejemplo:
```cpp
int edad = 18;
```

Aquí:

int indica que es un número entero.

edad es el nombre de la variable.

18 es el valor que estamos guardando en esa variable.

🧮 Tipos de datos en C++
Cada variable debe tener un tipo de dato, que define qué tipo de información va a guardar. Aquí tienes los más usados:

| Tipo de dato | Significado                              | Ejemplo de uso               |
|--------------|-------------------------------------------|------------------------------|
| `int`        | Número entero                             | `int edad = 20;`             |
| `float`      | Número decimal corto                      | `float peso = 48.5;`         |
| `double`     | Número decimal largo (más preciso)        | `double pi = 3.1416;`        |
| `char`       | Un solo carácter                          | `char letra = 'A';`          |
| `string`     | Cadena de texto (palabras o frases)       | `string nombre = "Jhonatan";`|
| `bool`       | Valor lógico: verdadero o falso           | `bool activo = true;`        |


🔧 Nota: Para usar string, debes incluir la librería #include <string>

- [Capítulo 3 – Operadores y expresiones](capitulos/03-operadores.md)
# 🧮 Capítulo 3 – Operadores y expresiones

En este capítulo aprenderás a usar **operadores** en C++, que son los símbolos que permiten realizar operaciones matemáticas, comparaciones y manipulaciones entre datos.

---

## 📌 ¿Qué es un operador?

Un **operador** es un símbolo que le dice a la computadora qué operación debe realizar con uno o más valores (también llamados operandos).

Por ejemplo:

```cpp
int suma = 5 + 3;
```
🔢 Tipos de operadores en C++
1. 🧮 Operadores aritméticos
Se usan para operaciones matemáticas básicas:

| Operador | Significado       | Ejemplo   | Resultado |
|----------|-------------------|-----------|-----------|
| +        | Suma              | 5 + 2     | 7         |
| -        | Resta             | 5 - 2     | 3         |
| *        | Multiplicación    | 5 * 2     | 10        |
| /        | División          | 10 / 2    | 5         |
| %        | Módulo (residuo)  | 10 % 3    | 1         |


1. 🔍 Operadores de comparación
Se usan para comparar dos valores. El resultado siempre es true o false (booleano).

| Operador | Significado         | Ejemplo    | Resultado |
|----------|---------------------|------------|-----------|
| ==       | Igual a             | 5 == 5     | true      |
| !=       | Distinto de         | 5 != 3     | true      |
| >        | Mayor que           | 5 > 3      | true      |
| <        | Menor que           | 3 < 5      | true      |
| >=       | Mayor o igual que   | 5 >= 5     | true      |
| <=       | Menor o igual que   | 3 <= 5     | true      |


1. 🔗 Operadores lógicos
Se usan para combinar condiciones lógicas:

| Operador | Significado      | Ejemplo          | Resultado |
|----------|------------------|------------------|-----------|
| `&&`     | Y lógico (AND)   | `true && false`  | `false`   |
| `\|\|`   | O lógico (OR)    | `true || false`  | `true`    |
| `!`      | Negación (NOT)   | `!true`          | `false`   |

4. 🧰 Operadores de asignación
Se usan para asignar valores a variables.

| Operador | Ejemplo   | Equivalente a...   |
|----------|-----------|--------------------|
| `=`      | `x = 10;` | Asignar 10 a `x`   |
| `+=`     | `x += 5;` | `x = x + 5`        |
| `-=`     | `x -= 2;` | `x = x - 2`        |
| `*=`     | `x *= 3;` | `x = x * 3`        |
| `/=`     | `x /= 2;` | `x = x / 2`        |
| `%=`     | `x %= 4;` | `x = x % 4`        |




---

# Capítulo 4 – Estructuras de control: if, if-else, switch

## ¿Qué son las estructuras de control?

Cuando programas, a veces quieres que el computador tome decisiones, como tú lo harías. Por ejemplo: “Si hace frío, me pongo abrigo; si no, me pongo una camiseta.” En programación, esas decisiones las hacemos con **estructuras de control**.

En C++, las más usadas para decidir qué hacer son: `if`, `if-else` y `switch`.

---

## 1. La estructura `if`

### ¿Para qué sirve?

Para decirle al programa: “Haz algo solo si se cumple una condición.”

### ¿Cómo funciona?

El programa revisa una condición (como si una pregunta fuera verdadera o falsa). Si es verdadera, hace lo que le dices. Si no, no hace nada.

### Ejemplo sencillo

```cpp
int edad = 18;

if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
}
```

**¿Qué pasa aquí?**
Si la edad es 18 o más, el programa mostrará el mensaje “Eres mayor de edad.” Si no, simplemente no pasa nada y sigue.

---

## 2. La estructura `if-else`

### ¿Para qué sirve?

Para darle al programa dos caminos: uno si la condición es cierta, y otro si es falsa.

### ¿Cómo funciona?

Si la condición es verdadera, hace una cosa. Si es falsa, hace otra.

### Ejemplo fácil

```cpp
int edad = 16;

if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
} else {
    std::cout << "Eres menor de edad." << std::endl;
}
```

**¿Qué hace el programa?**
Si tienes 18 años o más, muestra que eres mayor. Si no, te dice que eres menor. ¡Así de simple!

---

## 3. La estructura `switch`

### ¿Para qué sirve?

Cuando tienes varias opciones y quieres que el programa elija una según el valor de una variable.

### ¿Cómo funciona?

El programa mira el valor y compara con cada opción (llamadas `case`). Cuando encuentra la opción correcta, hace lo que le dices y se detiene.

Si ninguna opción coincide, hace algo por defecto.

### Ejemplo práctico

```cpp
char opcion = 'B';

switch (opcion) {
    case 'A':
        std::cout << "Elegiste la opción A." << std::endl;
        break;
    case 'B':
        std::cout << "Elegiste la opción B." << std::endl;
        break;
    case 'C':
        std::cout << "Elegiste la opción C." << std::endl;
        break;
    default:
        std::cout << "Opción no válida." << std::endl;
}
```

**¿Qué pasa aquí?**
Si la opción es ‘A’, ‘B’ o ‘C’, muestra el mensaje correspondiente. Si no es ninguna de esas, muestra que la opción no es válida.





### 🔁 PARTE 2: Todos los bucles
- [Capítulo 5 – Bucle while: repite mientras algo sea cierto](capitulos/05-while.md)

Claro, aquí tienes una versión humanizada para el **Capítulo 5 – Bucle while: repite mientras algo sea cierto**, con definición, explicación y ejemplo listo para tu libro:



# Capítulo 5 – Bucle while: repite mientras algo sea cierto

## ¿Qué es un bucle `while`?

Un **bucle `while`** es una estructura de control que le dice a la computadora:
**“Repite un grupo de instrucciones mientras una condición sea verdadera.”**

Es como decirle a alguien:
*Mientras la luz esté verde, sigue caminando.*
Cuando la luz cambie a rojo, deja de caminar.



## ¿Cómo funciona?

1. Primero, el programa verifica la condición que le diste.
2. Si la condición es verdadera (`true`), ejecuta el código dentro del bucle.
3. Después de ejecutar ese código, vuelve a revisar la condición.
4. Mientras la condición siga siendo verdadera, seguirá repitiendo el código.
5. Cuando la condición se vuelve falsa (`false`), el programa sale del bucle y continúa con lo que sigue.



## Ejemplo simple

```cpp
int contador = 1;

while (contador <= 5) {
    std::cout << "Número: " << contador << std::endl;
    contador++;  // Suma 1 al contador en cada vuelta
}
```

**¿Qué hace este código?**

* Empieza con `contador` igual a 1.
* Mientras `contador` sea menor o igual a 5, imprime el número.
* Después suma 1 al contador.
* Cuando el contador llegue a 6, la condición ya no se cumple y el bucle termina.

**Salida en pantalla:**

```
Número: 1
Número: 2
Número: 3
Número: 4
Número: 5
```

- [Capítulo 6 – Bucle do-while: haz al menos una vez](capitulos/06-do-while.md)
- Por supuesto, aquí tienes la explicación humanizada para el **Capítulo 6 – Bucle do-while: haz al menos una vez**, con definición, explicación y ejemplo claro:

---

# Capítulo 6 – Bucle do-while: haz al menos una vez

## ¿Qué es un bucle `do-while`?

El **bucle `do-while`** es muy parecido al `while`, pero con una diferencia importante:
**El código dentro del bucle se ejecuta al menos una vez, antes de verificar la condición.**

Es como cuando pruebas un plato nuevo y solo después decides si te gusta o no. Primero lo pruebas (ejecutas el código), luego decides si seguir o parar (evalúas la condición).

---

## ¿Cómo funciona?

1. El programa primero ejecuta el código que está dentro del bloque `do`.
2. Después, verifica la condición que está en el `while`.
3. Si la condición es verdadera (`true`), vuelve a ejecutar el bloque `do`.
4. Si la condición es falsa (`false`), el programa sale del bucle y sigue con lo que sigue.

---

## Ejemplo sencillo

```cpp
int contador = 1;

do {
    std::cout << "Número: " << contador << std::endl;
    contador++;  // Suma 1 al contador en cada vuelta
} while (contador <= 5);
```

**¿Qué hace este código?**

* Primero imprime el número aunque sea la primera vez.
* Después revisa si `contador` es menor o igual a 5.
* Mientras la condición sea verdadera, sigue repitiendo el código.
* Cuando `contador` es 6, el bucle termina.

**Salida en pantalla:**

```
Número: 1
Número: 2
Número: 3
Número: 4
Número: 5
```




# Capítulo 7 – Bucle for: repite con conteo claro

## ¿Qué es un bucle `for`?

El **bucle `for`** es otra forma de repetir un conjunto de instrucciones, pero es ideal cuando sabes cuántas veces quieres repetir algo.

Piensa en contar pasos: *“Voy a dar 10 pasos.”* Aquí sabes desde el principio cuántas veces vas a repetir la acción.



## ¿Cómo funciona?

Un bucle `for` tiene tres partes muy claras:

1. **Inicio:** donde defines una variable que controla el conteo (por ejemplo, `i = 1`).
2. **Condición:** la regla que debe cumplirse para que el bucle siga (por ejemplo, `i <= 10`).
3. **Actualización:** cómo cambia la variable en cada repetición (por ejemplo, `i++`, que suma 1 cada vez).

La estructura básica es así:

```cpp
for (inicialización; condición; actualización) {
    // Código que quieres repetir
}
```

---

## Ejemplo simple

```cpp
for (int i = 1; i <= 5; i++) {
    std::cout << "Número: " << i << std::endl;
}
```

**¿Qué hace este código?**

* Empieza con `i` igual a 1.
* Mientras `i` sea menor o igual a 5, imprime el número.
* Luego suma 1 a `i`.
* Cuando `i` llega a 6, el bucle termina.

**Salida en pantalla:**

```
Número: 1
Número: 2
Número: 3
Número: 4
Número: 5
```



El bucle `for` es muy usado porque organiza todo el conteo en una sola línea y es fácil de leer.




---

# Capítulo 8 – Bucles anidados y control de bucles (break, continue)

## ¿Qué son los bucles anidados?

Los **bucles anidados** son bucles dentro de otros bucles.
Es como cuando haces un recorrido por una cuadrícula: primero recorres las filas, y dentro de cada fila recorres las columnas.

### ¿Para qué sirven?

Sirven cuando necesitas hacer tareas repetitivas en dos (o más) niveles. Por ejemplo: imprimir una tabla, recorrer una matriz, o hacer combinaciones.

---

## Ejemplo de bucles anidados

```cpp
for (int fila = 1; fila <= 3; fila++) {
    for (int columna = 1; columna <= 4; columna++) {
        std::cout << "Fila " << fila << ", Columna " << columna << std::endl;
    }
}
```

**¿Qué hace este código?**

* Primero, recorre las filas de 1 a 3.
* Por cada fila, recorre las columnas de 1 a 4.
* Imprime la posición fila-columna en cada paso.

---

## Control de bucles con `break` y `continue`

A veces quieres controlar mejor cuándo salir o saltarte partes de un bucle.

### 1. `break`

El comando `break` detiene completamente el bucle, saliendo de él sin importar si la condición sigue siendo verdadera.

#### Ejemplo:

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Sale del bucle cuando i es 5
    }
    std::cout << i << std::endl;
}
```

**Salida:**

```
1
2
3
4
```

Cuando llega a 5, el bucle termina y no imprime más números.

---

### 2. `continue`

El comando `continue` salta la vuelta actual del bucle y pasa directamente a la siguiente repetición.

#### Ejemplo:

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Salta el número 3
    }
    std::cout << i << std::endl;
}
```

**Salida:**

```
1
2
4
5
```

Cuando `i` es 3, el programa no imprime nada y sigue con el siguiente número.




# Capítulo 10 – Cadenas de texto: arrays de caracteres

## ¿Qué es una cadena de texto?

Una **cadena de texto** es una secuencia de caracteres que forman palabras, frases o cualquier texto.
En C++, las cadenas tradicionales se representan como **arrays de caracteres**, es decir, una lista de letras, números o símbolos, uno al lado del otro.

---

## ¿Cómo funciona una cadena de texto en C++?

* Cada carácter de la cadena es un elemento del arreglo (array) de tipo `char`.
* La cadena termina con un carácter especial llamado **carácter nulo** (`'\0'`), que indica el final del texto.
* Por ejemplo, la palabra `"Hola"` se almacena como un arreglo con los caracteres `'H'`, `'o'`, `'l'`, `'a'` y `'\0'` al final.

---

## ¿Cómo se declara una cadena de texto?

Se declara como un arreglo de `char` con un tamaño suficiente para guardar todos los caracteres más el carácter nulo.

Ejemplo:

```cpp
char saludo[6] = {'H', 'o', 'l', 'a', '!', '\0'};
```

O también se puede declarar así, que es más común y práctico:

```cpp
char saludo[] = "Hola!";
```

---

## ¿Cómo se usa una cadena de texto?

Puedes acceder a cada carácter usando su índice, igual que en los arreglos normales.

Ejemplo:

```cpp
cout << saludo[0];  // Imprime 'H'
cout << saludo[4];  // Imprime '!'
```

---

## Ejemplo completo

```cpp
#include <iostream>
using namespace std;

int main() {
    char nombre[] = "Viviana";

    cout << "Mi nombre es: " << nombre << endl;

    // Mostrar cada carácter uno por uno
    for (int i = 0; nombre[i] != '\0'; i++) {
        cout << "Caracter en posición " << i << ": " << nombre[i] << endl;
    }

    return 0;
}
```

### Explicación:

* Se crea una cadena `nombre` con el texto `"Marisol"`.
* Se imprime la cadena completa.
* Luego, con un bucle `for` se recorren y muestran todos los caracteres hasta encontrar el carácter nulo (`'\0'`), que indica el final.

### Salida del programa:

```
Mi nombre es: Marisol
Caracter en posición 0: M
Caracter en posición 1: a
Caracter en posición 2: r
Caracter en posición 3: i
Caracter en posición 4: s
Caracter en posición 5: o
Caracter en posición 6: l
```




# Capítulo 9 – Arreglos (arrays): muchas variables en una sola

## ¿Qué es un arreglo (array)?

Un **arreglo** es una estructura que permite guardar varias variables del mismo tipo en un solo lugar bajo un mismo nombre.
Es como una fila de cajas numeradas donde puedes guardar información similar. Cada caja tiene una posición llamada **índice**, que empieza desde 0.

---

## ¿Para qué sirven los arreglos?

Cuando tienes muchos datos relacionados, por ejemplo las notas de varios estudiantes o los precios de productos, en lugar de crear una variable para cada dato, usas un arreglo para tenerlos organizados y poder acceder a ellos fácilmente con un índice.

---

## ¿Cómo se declara un arreglo en C++?

Para crear un arreglo necesitas indicar:

* El tipo de dato que almacenará (por ejemplo, `int`, `char`, `float`).
* El nombre del arreglo.
* La cantidad de elementos que tendrá (su tamaño).

Ejemplo:

```cpp
int numeros[5];  // Arreglo de 5 números enteros
```

---

## ¿Cómo se accede a los elementos?

Cada elemento tiene un índice empezando en 0. Para acceder o modificar un valor, usas el nombre del arreglo con el índice entre corchetes:

```cpp
numeros[0] = 10;  // Asigna 10 al primer elemento
int x = numeros[2];  // Lee el tercer elemento
```

---

## Ejemplo completo

```cpp
#include <iostream>
using namespace std;

int main() {
    int edades[4];  // Arreglo para 4 edades

    edades[0] = 18;
    edades[1] = 20;
    edades[2] = 22;
    edades[3] = 19;

    for (int i = 0; i < 4; i++) {
        cout << "Edad en la posición " << i << ": " << edades[i] << endl;
    }

    return 0;
}
```

### Explicación:

* Se declara un arreglo llamado `edades` con 4 posiciones.
* Se asignan valores a cada posición del arreglo.
* Se usa un bucle `for` para recorrer el arreglo e imprimir cada edad junto a su posición.

### Salida del programa:

```
Edad en la posición 0: 18
Edad en la posición 1: 20
Edad en la posición 2: 22
Edad en la posición 3: 19
```

---





- [Capítulo 10 – Cadenas de texto: arrays de caracteres](capitulos/10-cadenas.md)
- [Capítulo 11 – Estructuras (struct): tus propios tipos de datos](capitulos/11-struct.md)

---

### 🔗 PARTE 4: Estructuras de datos dinámicas
- [Capítulo 12 – Punteros: direcciones y memoria](capitulos/12-punteros.md)
- [Capítulo 13 – Listas enlazadas simples](capitulos/13-lista-enlazada.md)
- [Capítulo 14 – Listas doblemente enlazadas](capitulos/14-lista-doble.md)
- [Capítulo 15 – Listas circulares](capitulos/15-lista-circular.md)

---

### 📚 PARTE 5: Pilas, colas y recursión
- [Capítulo 16 – Pilas (Stacks): último en entrar, primero en salir](capitulos/16-pilas.md)
- [Capítulo 17 – Colas (Queues): primero en entrar, primero en salir](capitulos/17-colas.md)
- [Capítulo 18 – Colas circulares](capitulos/18-colas-circulares.md)
- [Capítulo 19 – Recursión: funciones que se llaman a sí mismas](capitulos/19-recursion.md)
