# TP-LANGAGE-C

## Description du projet
Ce programme est un jeu de mathématiques conçu pour aider les élèves de niveau CM2 à pratiquer les opérations mathématiques de base, telles que l'addition, la soustraction, la multiplication, les tables de multiplication et les divisions. Le jeu propose des exercices sous forme de quiz où l'utilisateur doit répondre correctement aux questions pour accumuler des points. Chaque bonne réponse obtenue dans les trois tentatives rapporte des points différents en fonction du nombre de tentatives utilisées. Les scores sont enregistrés avec le nom de l'utilisateur et l'heure à laquelle le jeu a été joué.

## Prérequis
Pour exécuter ce programme, vous devez avoir un compilateur C (par exemple, GCC) installé sur votre machine.

## Outils utilisés
Langage de programmation : C

Bibliothèques standard utilisées dans le programme :
stdio.h : Pour les entrées/sorties standard (affichage à l'écran, lecture des entrées utilisateur).
stdlib.h : Pour la génération de nombres aléatoires (fonction rand()).
time.h : Pour obtenir et afficher la date et l'heure actuelles (fonction time() et gmtime()).
string.h : Pour manipuler les chaînes de caractères (fonction scanf() pour la lecture du nom de l'utilisateur).
Système de fichiers : Le programme enregistre les scores dans un fichier texte scores.txt, ce fichier est situé dans le répertoire où le programme est exécuté.
