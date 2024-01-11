Dès le début de la séance, avec Hussein on a commencé a reconsidérer la finalité de notre projet à savoir : la pince placé sur la voiture qui est contrôlée par un gant en bluetooth. 
On a décidé de changer cela mais on a pas encore d'idées précises. On s'est dit qu'on pouvait remplacer la commande à distance du gant par celle du téléphone via le bluetooth et beaucoup d'autres...
Mon but à moi dans cette séance était de m'ocuuper et de comprendre pleinement le fonctionnement du moteur DC car cela m'échapper encore un peu. Le pont en H est un outil très important pour faire fonctionner le moteur DC dans le cas de la voiture : en effet il permet de contrôler la direction de rotation du moteur, c'est-à-dire le faire tourner dans un sens ou dans l'autre.
J'ai donc appris comment relier le moteur DC, le pont en H et la carte Arduino Uno. Après plusieurs tentatives foireuses, j'ai enfin réussi à obternir le bon montage :

https://mail.google.com/mail/u/0?ui=2&ik=817a7a368f&attid=0.3&permmsgid=msg-a:r1218933459971632005&th=18cfa2d96fd55759&view=att&disp=safe&realattid=18cfa2a81fdff2161161

De plus, il est nécessaire de mettre deux fils dans le "GND" (la terre) du pont en H afin de le relier au "GND" de la carte Arduino et à l'alimentation qui servira à faire tourner le moteur DC. (voir phoyo ci-dessus)
