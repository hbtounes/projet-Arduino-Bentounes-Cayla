Dès le début de la séance, avec Hussein on a commencé a reconsidérer la finalité de notre projet à savoir : la pince placé sur la voiture qui est contrôlée par un gant à distance. On a décidé de changer cela mais on a pas encore d'idées précises. On s'est dit qu'on pouvait remplacer la commande à distance du gant par celle du téléphone via le bluetooth par exemple.

On a également revu le diagramme de Gantt qu'il fallait qu'on modifie absolument au vu des changements qu'on allait appliquer aux projets.

Mon but à moi dans cette séance était de m'ocuuper et de comprendre pleinement le fonctionnement du moteur DC car cela m'échappait encore un peu. 

Le pont en H est un outil très important pour faire fonctionner le moteur DC dans le cas de la voiture : en effet il permet de contrôler la direction de rotation du moteur, c'est-à-dire le faire tourner dans un sens ou dans l'autre.J'ai donc appris comment relier le moteur DC, le pont en H et la carte Arduino Uno. Après plusieurs tentatives foireuses, j'ai enfin réussi à obternir le bon montage :

![IMG20240110122051](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/443ea06c-34c0-4715-bd46-c03ce9f9d866) 

(montage fait en cours mais qui n'est pas complet car je n'ai pas pensé à prendre en photo le montage final)

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/9d9b15b4-e4e3-424e-a78e-7b74867be39f)

(montage d'une vidéo dont je me suis inspirée qui est complet et très similaire au montage réalisé lors de cette séance)


De plus, il est nécessaire de mettre deux fils dans le "GND" (la terre) du pont en H afin de le relier au "GND" de la carte Arduino et à l'alimentation qui servira à faire tourner le moteur DC. (voir photo ci-dessus). J'ai ensuite branché le "5V" du pont en H au "VIN" de la carte Arduino et enfin le "12V" du pont en H a l'alimentation. 
Suite à cela il me fallait un code simple permettant de faire fonctionner tout ça : 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/8e706525-656f-4b2c-aed4-7734c6967dc6)

Finalement, avec mon collègue Hussein, on a brièvement testé plusieurs tensions d'alimentation pour voir comment la roue reliée au moteur DC réagirait mais sans conclusion... Il faudra donc qu'on voit cela en priorité lors des prochaines séances. 

En conclusion, j'ai en partie respecté le diagramme de Gantt lors de cette troisième séance :

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/79b38e0a-1f2a-4c66-83e5-37f9a70ae724)


