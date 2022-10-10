# STRLCAT DEMO

Un pequeño ejemplo para ejemplificar el proceso de prueba de una función estandar.

## Prototipo
El prototipo de la función strlcat es el siguiente:

``` c
size_t strlcat(char* dst, const char* src, size_t size);
```

## Valores posibles de los parametros
Tomando en cuenta el tipo de datos de cada parámetro tenemos los siguientes casos
a los cuales le asignamos una letra para su posterior análisis. De igual manera se asume
que el parámetro ```dst``` contiene suficiente espacio para almacenar la concatenación de
los dos parámetros.

### SRC
- **A**: NULL
- **B**: Cadena vacía: ""
- **C**: Cadena de texto: "HOLA"
- **D**: *Array* de caracteres sin un carácter nulo ('\0') al final: "HOLA"

### DST
- **E**: NULL
- **F**: Cadena vacía: ""
- **G**: Cadena de texto: "MUNDO"
- **H**: *Array* de caracteres sin un carácter nulo ('\0') al final: "MUNDO"

### SIZE
- **I**: Cero: 0
- **J**: Valor menor a la longitud de DST
- **K**: Valor igual a la longitud de DST
- **L**: Valor mayor a la longitud de DST
- **M**: Valor menor a la longitud de DST + SRC
- **N**: Valor igual a la longitud de DST + SRC
- **O**: Valor mayor a la longitud de DST + SRC

## Combinaciones válidas
Descartando las opciones A, D, E y H por ser valores inválidos de entrada podemos formular las siguientes combinaciones

- BFI: ``` strlcat("", "", 0); ```
- BFJ: ``` strlcat("", "", 0); ```
- BFK: ``` strlcat("", "", 0); ```
- BFL: ``` strlcat("", "", 1); ```
- BFM: ``` strlcat("", "", 0); ```
- BFN: ``` strlcat("", "", 0); ```
- BFO: ``` strlcat("", "", 1); ```
- CFI: ``` strlcat("HOLA", "", 0); ```
- CFJ: ``` strlcat("HOLA", "", 3); ```
- CFK: ``` strlcat("HOLA", "", 4); ```
- CFL: ``` strlcat("HOLA", "", 5); ```
- CFM: ``` strlcat("HOLA", "", 3); ```
- CFN: ``` strlcat("HOLA", "", 4); ```
- CFO: ``` strlcat("HOLA", "", 5); ```
- BGI: ``` strlcat("", "MUNDO", 0); ```
- BGJ: ``` strlcat("", "MUNDO", 0); ```
- BGK: ``` strlcat("", "MUNDO", 0); ```
- BGL: ``` strlcat("", "MUNDO", 1); ```
- BGM: ``` strlcat("", "MUNDO", 4); ```
- BGN: ``` strlcat("", "MUNDO", 5); ```
- BGO: ``` strlcat("", "MUNDO", 6); ```
- CGI: ``` strlcat("HOLA", "MUNDO", 0); ```
- CGJ: ``` strlcat("HOLA", "MUNDO", 3); ```
- CGK: ``` strlcat("HOLA", "MUNDO", 4); ```
- CGL: ``` strlcat("HOLA", "MUNDO", 5); ```
- CGM: ``` strlcat("HOLA", "MUNDO", 8); ```
- CGN: ``` strlcat("HOLA", "MUNDO", 9); ```
- CGO: ``` strlcat("HOLA", "MUNDO", 10); ```

## Resultado
La comprobación de cada prueba se encuentra en el código del programa

Se debe proporcionar la implementación de la ```ft_strlcat``` para que realice las pruebas con nuestro código

Con el comando ```make std``` podemos visualizar el funcionamiento de la version estándar.


### Ubuntu
En mi distribución de Ubuntu, la función strlcat no existe, pero en los Macs
del campus debería estar disponible, para realizar las pruebas.