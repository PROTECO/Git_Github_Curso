# Introducción a Markdown :)

Markdown es un lenguaje de marcado ligero que se utiliza comúnmente para formatear texto de una manera sencilla  y legible para la web. Fue creado por John Gruber y Aaron Swartz en 2004  con el objetivo de proporcionar una forma fácil de escribir contenido con formato en línea sin la necesidad de utilizar herramientas complicadas de edición de texto o HTML.

Markdown se basa en la idea de que el formato del texto debería ser lo más simple posible y que el marcado en sí mismo debería ser fácil de leer incluso en su forma no formateada. Utiliza una serie de convenciones de escritura, como asteriscos y guiones bajos, para indicar elementos de formato, como encabezados, listas, enlaces, texto en negrita y cursiva, y mucho más.

---
 # Encabezados
 
Los encabezados se hacen poniendo uno o varios # 
# # Primer encabezado
## ## Segundo encabezado
### ### Tercer Encabezado
#### #### Cuarto encabezado
##### ##### Quinto
###### ###### Sexto XD
---
### Citas
Las citas se ponen con el símbolo > precedinendo la cita.
Ejemplo:
\>La vida es para los aventados. -Juan Escutia

Se ve como:
>La vida es para los aventados. -Juan Escutia

Para poner una cita de dos o más líneas, simplemente se pone en el siguiente renglón:
\>La vida es para los aventados.
\>-Juan Escutia

Se ve como:
>La vida es para los aventados. -Juan Escutia
>-Juan Escutia

Para citas anidadas, simplemente se ponen varios > :
\>> Asies, esta es una cita anidada

Se ve como:
>> Asies, esta es una cita anidada

### Listas
Para crear listas se pueden usar * , -, o +
- Cuac 1 (con guión)
- Cuac 2 (con guión)
+ Cuac 3 (con +)
* Cuac 4 (con *)

**NOTA**: Es importante dejar un espacio entre el guión/asterisco y la palabra, ya que puede que no les ponga la lista si no lo hacen

Para poner sublistas, con un tabulador o cuatro espacios en blanco.
* Cuac
    * Elemento anidado


Para crear bloques de codigo se encierra el parrafo entre dos lineas con tres virguillas
~~~js
//Este es un bloquesito de código :D
console.log("Hola mundo")
~~~

***
Regla horizontal, sirve para separar :D
Se pone con tres asteriscos (***), o guiones
---
___

### Énfasis letras

Para poner palabras en cursivas o negritas, se encierran entre asteriscos o guiones bajos:
Cursiva : \*cursiva* , \_cursiva_

Se ve como:
Cursiva : *cursiva* , _cursiva_

Para ponerlas en negritas, se necesitan dos asteriscos o guiones bajos:
Negrita: \**negrita**, \__negrita__

Se ve como:
Negrita: **negrita**, __negrita__

La diferencia radica en que para la negrita se les pone dos asteriscos o dos guiones bajos

Negrita y cursiva: ***Negrita cursiva*** , ___negrita y cursiva___

### Links o enlaces
Se crean escribiendo la palabra o texto enlazada entre corchetes [] y el link en cuestion entre paréntesis:
\[hola, este es un link](https://github.com/PROTECO)

Que se vería como:
[hola, este es un link](https://github.com/PROTECO)


Para solucionar lo de links largos que llegan a confundir al leer el texto, se puede referenciar:

\[nombreEnlace]\[nombreReferencia]
\[nombreReferencia]: https://github.com/PROTECO

Se vería de la siguiente forma:
[nombreEnlace][nombreReferencia].

[nombreReferencia]: https://github.com/PROTECO

**NOTA**: Un ejemplo de aplicación la pueden ver en mi README (Soy Deivi) donde puse los artistas que me gustan :D

### Código
`Linea de codigo entre dos comillitas invertidas`
Sirve para poner codigo en la misma linea o parrafo.

### Imagenes

Es lo meeesmo que insertar links. Solo que ahora se le añade el signo de exclamación al principio y el enlace será la ubicacion, link o ruta del directorio de la imagen:
\![Mi imagen]\(https://okdiario.com/img/2021/04/04/como-utilizan-los-gatos-la-lengua-para-acicalarse.jpg)

Vendría siendo:
![Mi imagen](https://okdiario.com/img/2021/04/04/como-utilizan-los-gatos-la-lengua-para-acicalarse.jpg)
El texto de "Mi imagen", es lo que se vería si la carga de la imagen no funciona.25

Y, para ponerle titulos a las imagenes, se pone entre comillas después del link. Esto sirve para cuando nosotros pongamos el puntero arriba de la imagen se vea su nombre :D : 

\![Mi imagen]\(https://okdiario.com/img/2021/04/04/como-utilizan-los-gatos-la-lengua-para-acicalarse.jpg "Titulo imagen")

El cual se vería como:
![Mi imagen](https://okdiario.com/img/2021/04/04/como-utilizan-los-gatos-la-lengua-para-acicalarse.jpg "Titulo imagen")

### Tablas

En línea hay generadores de tablas Markdown que nos ayudan a crear fácilmente tablitas. 
Sin embargo, para crearlas a manopla se usan las pipes para separar las celda, y guiones para hacer la línea de encabezado C:

| Columna 1 | Columna 2 | Columna 3 |
| --- | --- | --- |
| Celdirri 1 | Celduki 2 | Zelda 3 |
| Celda 2,1 | Zelda 2,2 | Celda 3,3 |

Y así infinitamente.


## Recuerden :o

También Markdown permite el uso de HTML. Pueden hacer listas contraíbles, alinear mejor las imágenes, poner más cositas en las tablas y demás usando HTML.

##### Cualquier duda, envíen mensajito :)
