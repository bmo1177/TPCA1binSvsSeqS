# TPCA1binSvsSeqS
Dans ce TP, On implémente deux algorithmes de recherche:  la recherche séquentielle et la recherche binaire.  L'objectif est de comparer ces deux algorithmes en termes de temps d'exécution pour différentes tailles de tableau.

Description des Algorithmes
Recherche Séquentielle: Cet algorithme parcourt le tableau un élément à la fois jusqu'à trouver la valeur recherchée ou atteindre la fin du tableau. Complexité : O(n).
Recherche Binaire: Cet algorithme divise le tableau en deux parties à chaque itération et ne recherche que dans la moitié contenant la valeur possible. Il nécessite un tableau trié. Complexité : O(log n).

Résultats des Mesures
Le tableau ci-dessous présente le temps d'exécution moyen des deux algorithmes pour différentes tailles de tableau :
Taille du tableau	Recherche Séquentielle (s)	Recherche Binaire (s)
1000	0.000000640000	0.000000050000
10000	0.000009050000	0.000000090000
100000	0.000090810000	0.000000100000
1000000	0.000917680000	0.000000110000

Analyse des Résultats
La recherche séquentielle présente une augmentation linéaire du temps d'exécution en fonction de la taille du tableau, ce qui est conforme à sa complexité algorithmique O(n).
La recherche binaire, quant à elle, montre un temps d'exécution presque constant, même pour de très grands tableaux, grâce à sa complexité logarithmique O(log n).
Conclusion
La recherche binaire est extrêmement plus efficace que la recherche séquentielle, en particulier pour les grandes tailles de tableau. Cependant, elle nécessite que le tableau soit trié, ce qui peut constituer une contrainte dans certaines applications.
