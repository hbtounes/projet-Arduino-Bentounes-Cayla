Durant cette 8ème séance, le bur était d'avancer sur le montage du bras+pince. Pour cela, je devais percer une sorte de petit écrou noir afin de pouvoir fixer les gros servomoteurs sur les éléments du bras. J'ai donc pris une mèche de 3mm et j'ai répété cette action sur 4 de ces petis objets noirs. Ensuite, j'ai dû trouver un moyen de visser ces derniers sur le bras et faire en sorte que la fixation soit solide et tienne bien. Pour cela, j'ai simplement trouver des entretoises du même diamètre que chaque vis et je les mises bout à bout comme cela : 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/c0845093-3cfc-4bcb-a458-7eef2d4425d7)

On peut donc remarquer que les servomoteurs sont fixés au bras à l'aide de ces 4 petits outils même si l'on ne voit rien.

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/67ff4921-8dec-4a63-ab14-726ef22ca5bd)

De plus, durant cette séance, avec mon collègue Hussein, on a finalement réussi à faire tourner le moteur pas à pas à l'aide du téléphone via bluetooth :

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/6b596f5a-e23a-4f58-99c8-d1d18a448135)

Sur ces 3 boutons, l'un permet de le faire tourner dans le sens des aiguilles d'une montre, le second dans l'autre sens et enfin le dernier permet d'arrêter la rotation.
Par rapport au brannchement concernant le moteur pas à pas, le voici : 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/65d19246-c290-45e8-994e-8cb290231bb6)

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/a815bdce-61e2-4197-9b76-142bb7786f73)


On a vu dans la documentation de Pascal Masson que le moteur pas à pas nécessitait un driver A4988. En effet ce driver permet un contrôle très simple du moteur pas à pas. Ce montage nécessite une capacité de découplage pour l’alimentation du
moteur afin de lisser les appels de courant des bobines

Finalement je pense avoir plutot bien respecté le diagramme de Gantt : 

![image](https://github.com/hbtounes/projet-Arduino-Bentounes-Cayla/assets/134288995/f3dd2ae9-c3aa-4341-8b14-788adc8509a6)

