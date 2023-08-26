<p>
  <img src="https://user-images.githubusercontent.com/32719951/221361088-ed70eb7c-e537-42fc-9a61-d47b55ea265c.png" align = "right"  height="50" />
</p>

# Git CheatSheet (El acordeón)

# Pasos al hacer commmits

1) git init (si clonaron su repo desde github, no es necesario)
2) git add ( Añadir archivos al stage )
3) git commit -m "Texto commit"
4) git push ( Añadir archivos al repositorio en línea )

### MOMENTO, antes de nada: ✋🛑

## GitHub Student Developer Pack 

<p>
  <img src="https://user-images.githubusercontent.com/32719951/221361354-c0bdbe6d-4eb1-4e70-b282-34411c1b8b8c.png" align = "right"  height="110" />
</p>

Tienen a la mano un montón de herramientas gratis por ser estudiantes. Crédito para nubes, herramientas de diseño, hasta íconos. 

No lo desperdicien **plox**. 🥺

![](https://user-images.githubusercontent.com/32719951/221360908-f0e80cc5-c72d-4398-b351-995ac27d8168.png)

#### 🐭 Descargar **Git** for para cualquier plataforma (Escritorio)

http://git-scm.com

> **OJO: 👀** No es lo mismo **Git** que **GitHub**

> Para GitHub, lo están viendo, es ésta página pero igual pueden descargar su aplicación móvil.


## 🐶 Configuración general

Para la primera vez de uso de git es necesario colocar:

`git config --global user.name “[firstname lastname]”`: Para saber de quién es el commit.

`git config --global user.email “[valid-email]”`: Para saber cómo contactarlo

## 🐱 Inicialización y configuración del proyecto 

`git init`: inicializar una carpeta de su computadora como un repositorio de Git (empieza a llevar la traza)

`git clone [url]`: Descarga un proyecto de git de internet con la url.

## 🐼 Stage & Snapshop 

`git status`: mostrar archivos modificados en el directorio de trabajo, preparado para darles **commit**. 

`git add [file]`: Agrega los archivos al staging (los sube al escenario para tomarles una foto)

`git reset [file]`: Eliminar un archivo conservando los cambios en el directorio de trabajo.

`git diff`: Mira las diferencias de lo cambiado desde el último commit y lo que estás haciendo (Muestra en verde lo que agregaste y en rojo lo que quitaste).

`git diff --staged`; Mira las diferencias de lo cambiado desde el último commit y lo que está en el escenario. (lo que ya le diste `git add`)

`git commit -m “[mensaje DESCRIPTIVO]”`: Fotografía, captura el momento de tus cambios en el escenario y lo guarda como un estado en el tiempo en la rama que estás parado.

## 🐰 Ramas & Mezcla (Branch & Merge) 

`git branch`: Lista todas tus ramas. La que tiene un `*` es la rama en la que estás parado.

`git branch [branch-name]`: Crea una rama que sale del último commit que se tiene en dicha rama.

`git checkout`: Cambia a otra rama.

`git merge [branch]`: Mezcla los cambios de una rama con otra.

`git log`: Muestra el historial de commits de la rama actual.


## 🦊 Repositorios remotos (Share & Update) 

`git remote add [alias] [url]`: Añades un Alias para llamar a un repositorio remoto. Casi siempre le ponen **origin**.

`git fetch [alias]`: Baja pero no mezcla los cambios de las ramas, el alias recuerda es el apodo del repositorio remoto.

`git merge [alias]/[branch]`: Mezcla los cambios de la misma rama pero remota en lat tuya local.

`git push [alias] [branch]`: Sube tus cambios a un repositorio remoto (con el alias) y de una rama específica.

`git pull`: Mezcla de fetch y merge para que baje los cambios del repo remoto y los mezcle con tus commits actuales. 


##  🐯 Reescribir la historia

`git rebase [branch]`: Mover toda una rama a un commit de inicio específico. **ALERTA, comando fuerte, no reversible y destructor**

`git reset --hard [commit]`: Limpia lo que tengan sin confirmar y elimina el commit que le indiques.


## 🦁 Área de Staging (Temporary commits) 

> Esta área sirve mucho por si no desean commitear algo pero si lo quieren guardar para después. *Stash = Reserva* en inglés.

`git stash`: Guarda los cambios en el stash.

`git stash list`: Mira la lista de stashes

`git stash pop`: Saca el último cambio del stash

`git stash drop`: Elimina el stash.


## 🐹 Herramientas para no usar línea de comandos 

Solo los linuxeros que aman la línea de comandos a morir en la industria usan todo por línea de comandos, pero los mortales y flojos como yo la verdad me desespera estar poniendo comandos para todo y casi todos donde trabajo y en otras compañías grandes, usan estas herramientas, nos facilita la vida. 

> *La flojera es la madre de la inteligencia* 🫣

<p>
  <img src="https://user-images.githubusercontent.com/32719951/221361499-221a4f35-31cb-4aff-949d-767c05c25f43.png" align = "right"  width="170" />
</p>

## [Tower](https://www.git-tower.com/)

Más de 100 000 desarrolladores y diseñadores son más productivos con Tower, el cliente Git más poderoso para Mac y Windows.

Para aplicar a licencia estudiantil por favor acceder a este link y poner un correo de unam.mx o de preferencia que termine en .edu: [Tower for Education](https://www.git-tower.com/students/mac)

<p>
  <img src="https://user-images.githubusercontent.com/32719951/221361527-4977b519-f43a-44b4-85cd-24e0c34dd4d9.png" align = "right"  width="150" />
</p>

## [Sourcetree](https://www.sourcetreeapp.com)

Sourcetree simplifica la forma en que interactúa con sus repositorios de Git para que pueda concentrarse en la codificación. Visualice y administre sus repositorios a través de la sencilla interfaz gráfica de usuario Git de Sourcetree.

Este es completamente **gratis** para todos. Solo hay que descargarlo: [SourceTree](https://www.sourcetreeapp.com)

<p>
  <img src="https://user-images.githubusercontent.com/32719951/221361566-c9d7fa5e-0b5e-4a50-9c19-884d0dca73a9.jpg" align = "right"  width="150" />
</p>

## [Gitkraken](https://www.gitkraken.com)

Obtenga el cliente legendario de GitKraken. Incluye una GUI de Git intuitiva y una potente CLI de Git

Este es el más avanzado y pro pero cuesta y creo no hay opción estudiantil. Si el dinero se los permite más adelante pueden usarlo. Este es el que por lo general veo que les encanta a los usuarios Windows por lo parecido a Visual Studio. Hay prueba gratis [Gitkraken](https://www.gitkraken.com)
