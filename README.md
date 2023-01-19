# heliceHolo_3il

# heliceHolo_3il

Afin d'installer l'hélice holographique, le Raspberry doit être sous Raspbian. Il faut ensuite suivre les étapes suivantes :

1- Connecter la Raspberry à internet en utilisant la commande `sudo raspi-config` pour saisir le SSID et le mot de passe du réseau Wi-Fi ou à l'aide de l'interface graphique.

2- Télécharger et installer l'IDE Arduino : il faut aller sur le site officiel d'Arduino (https://www.arduino.cc/en/software), télécharger le fichier "Linux ARM 32 bits", ouvrir un terminal, se rendre dans le répertoire Téléchargements, extraire le contenu du fichier téléchargé, déplacer le dossier créé dans /opt, et exécuter la commande `sudo /opt/arduino-####/install.sh` (où #### est le numéro de version). 

3- Cloner le dépôt Git sur la Raspberry en utilisant la commande "git clone https://gitlab.com/zigomar_/heliceHolo_3il/" ou en téléchargeant le zip du repository gitlab du projet.

4- Créer un fichier d'environnement ".env" dans le dossier "main" en utilisant les commandes "cd main/" et "nano .env" et y écrire "flask_secret = "<INSERER_CARACTERES_ALEATOIRES>".

5- Installer python flask pour Python 3 en utilisant la commande 
    `sudo pip3 install flask python-dotenv`

6- Afficher et noter l'adresse IP de la Raspberry sur le réseau en utilisant la commande 
    `ifconfig`

7- Créer un dossier "img_uploaded" dans "main" en utilisant la commande 
    `mkdir main/img_uploaded`

8- Installer le service systemd en utilisant les commandes 
    `cp main/displayWebServer.service /lib/systemd/system/displayWebServer.service`
    `sudo chmod 644 /lib/systemd/system/displayWebServer.service`
    `sudo systemctl daemon-reload` 
    `sudo systemctl enable displayWebServer.service`
9- Redémarrer la Raspberry en utilisant la commande 
    `sudo reboot now`
10- Après ces étapes, l'hélice peut être commandée via un autre PC connecté au même réseau en saisissant l'adresse IP de la Raspberry dans le navigateur sous la forme "http://<IP>:5000".
