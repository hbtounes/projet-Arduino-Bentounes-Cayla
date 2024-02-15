Durant cette 7ème séance, mon rôle était de m'occuper de la partie bluetooth du projet. Pour cela je devais d'abord me concentrer sur le contrôle du moteur DC via le téléphone. Pour cela, il a fallut connecter le module bluetooth à la carte Arduino comme on peut le voir sur la photo ci-dessous.

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/f9ed77e7-77f5-42ab-927c-70da6e6d723b)

Ensuite, il a fallut que je me familiarise avec l'application mobile "Bluetooth Electronics" déjà installée lors d'un TD en début d'année. J'ai donc dû faire mes recherches et trouver des tutos ou bien des indications concernant l'utilisation de cette application. Suite à cela, j'ai également regardé le contrôle bluetooth dans le cadre du code sur Arduino IDE. 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/935d1211-eee6-4c28-849d-e0fa529c3f63)


On peut voir dans le code ci-dessus la création de deux variables : un "int" (PWM) et un "char" (DATA). En effet le caractère char va permettre de stocker un caractère et par la suite d'introduire toutes les conditions nécessaires au bon fonctionnement du projet. C'est-à-dire que sur l'application, on caractérise la bifurcation vers la droite de la voiture à l'aide de la lettre "R" (Right). 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/ba748704-b318-41dc-a5b8-e65fdcc31454)

Cette même lettre va être stocké dans la variable DATA et on pourra créer les premières conditions pour que la voiture tourne à droite. Ensuite je n'ai plus qu'a coder l'action de tourner les roues avant et voilà le tour est joué !
