<h1 align=center>PROYECTO FT_PRINTF</h1>

Este es el proyecto ft_printf del cursus del campus tecnológico de 42 Madrid. El objetivo de este proyecto es reimplementar la función printf de la biblioteca estándar de C en el lenguaje de programación C. printf es una función muy común que se utiliza para imprimir datos formateados en la consola o en otros flujos de salida en muchos lenguajes de programación, incluido C.

## Tabla de contenidos
- [¿Qué es `PRINTF`?](#qué-es-PRINTF)
- [¿Cual es el Objetivo?](#cual-es-el-Objetivo)
- [¿Qué es `Makefile` (y como hacerlo)?](#qué-es-makefile-y-cómo-hacerlo)
- [Listado de funciones](#lista-de-funciones)
- [Modo de Uso](#Modo-de-Uso)

 <hr>

### ¿Qué es `PRINTF`?
es una función en muchos lenguajes de programación que se utiliza para imprimir datos formateados en la consola o en otros flujos de salida. La función printf se encuentra comúnmente en lenguajes como C, C++, Java, Python, y muchos otros. La sintaxis y el comportamiento exactos pueden variar ligeramente entre los diferentes lenguajes, pero la función printf es ampliamente utilizada y comprendida en el ámbito de la programación.

En el contexto de C y C++, printf es una función de salida formateada que toma una cadena de formato como primer argumento, seguida de una lista variable de argumentos. La cadena de formato contiene texto literal junto con especificadores de formato, que indican cómo deben formatearse y mostrar los datos adicionales proporcionados como argumentos. Estos especificadores de formato comienzan con el símbolo %, seguido de un carácter que define el tipo de dato que se imprimirá y cualquier bandera de formato opcional.
### ¿cual es el objetivo?

El objetivo principal de este proyecto es enseñar a los estudiantes cómo trabajar con cadenas de caracteres y argumentos variables (funciones Variadicas) en C, así como mejorar sus habilidades de análisis y resolución de problemas. Además, este proyecto fomenta la comprensión de los conceptos subyacentes de la gestión de memoria y la manipulación de cadenas de caracteres en C.

Por ejemplo, en C, printf se utiliza de la siguiente manera para imprimir un entero y una cadena de caracteres:

- int num = 42;
- char *message = "Hello, world!";
- printf("El número es: %d\n", num);
- printf("El mensaje es: %s\n", message);

Esto imprimirá:

- El número es: 42
- El mensaje es: Hello, world!

### ¿Qué es [Makefile](./Makefile) (y cómo hacerlo)?

Un fichero `Makefile` es un archivo de texto que describe las instrucciones que debe ejecutar el comando `make`, que lee el archivo y realiza las tareas necesarias para compilar y construir el programa de forma automatizada.
El manual de la GNU recomienda escribirlo con mayúscula porque suele aparecer cerca de otros archivos descriptivos como README, y ha de ser personalizado para adaptarse a las necesidades del proyecto, permitiendo que el desarrollador controle la compilación y construcción de software. También permite la compilación parcial de archivos, de modo que sólo se compilan los archivos que han cambiado desde la última compilación, lo que acelera el proceso de construcción y ahorra tiempo de desarrollo. Esta [playlist de YouTube](https://www.youtube.com/playlist?list=PLTd5ehIj0goOrqKZPvq1Np-8PUFcQSSm-) explica los primeros pasos para crear un Makefile.

## Lista de funciones

|     Funcion Printf     |      Funciones de libft     |
| :-----------------------: | :-----------------------------: 
| [ft_printf](ft_printf.c)  | [ft_putchar](libft/ft_putchar_fd.c) |
|                           | [ft_putstr](libft/ft_putstr_fd.c)   |
|                           | [ft_putnbr](libft/ft_putnbr_fd.c)   |
|                           | [ft_uputnbr](libft/ft_uputnbr.c)   |
|                           | [ft_hexa](libft/ft_hexa.c)   |
|                           | [ft_ptr](libft/ft_ptr.c)   |

### Modo de Uso
Para utilizar ft_printf, simplemente incluye el archivo libftprintf.a, haciendo make en tu proyecto y llama a la función ft_printf con los argumentos adecuados según tus necesidades.
#### Compilación
Para compilar tu programa con ft_printf, asegúrate de incluir la biblioteca libftprintf.a durante el proceso de compilación. Por ejemplo:
- gcc -o mi_programa mi_programa.c libftprintf.a
### Contribuciones
Las contribuciones son bienvenidas. Si deseas contribuir a este proyecto, siéntete libre de hacer un fork del repositorio, realizar tus cambios y enviar un pull request. Asegúrate de seguir las pautas de contribución y de incluir una descripción detallada de tus cambios.

#### Licencia
Este proyecto está bajo la licencia MIT. Consulta el archivo LICENSE.md para obtener más detalles.
