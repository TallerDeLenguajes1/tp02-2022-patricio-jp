# tp2-2022

Después de haber trabajado en la rama ``Opcion_2`` y creado el archivo tp2_1_2.c, al volver a la rama principal ``main`` desaparece dicho fichero. Sin embargo no es que se perdió, sino que ese archivo existe solo en la rama ``Opcion_2``.

Luego de ejecutar el comando ``gitk --all``, realizar un commit y luego volver a ejecutar el comando se puede ver como la rama ``Opcion_2`` se "quedó atrás en el tiempo", puesto que los nuevos cambios hechos en ``main`` no se vieron reflejados en la rama secundaria.

Después del merge de las 2 ramas, gráficamente se ve en la herramienta gráfica de git como se combinan las ramas en una sola, en este caso ``main``.