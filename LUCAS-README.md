# Fonction som_mat - Somme de Matrices

## 📋 Description
Implémentation de la fonction `som_mat` qui effectue l'addition de deux matrices de dimensions identiques.

## 🧮 Signature
```c
void som_mat(float tab1[][MAX], float tab2[][MAX], int n, int m)
```

## 📊 Paramètres
- `tab1` : Première matrice (n × m)
- `tab2` : Deuxième matrice (n × m) 
- `n` : Nombre de lignes
- `m` : Nombre de colonnes

## ⚙️ Fonctionnement
La fonction effectue une **addition élément par élément** :
```math
som_tab[i][j] = tab1[i][j] + tab2[i][j]
```

## 🖥️ Sortie
```
=== SOMME DES MATRICES ===
    6.00    8.00
   10.00   12.00
```

## 💻 Exemple d'utilisation
```c
float matriceA[2][2] = {{1, 2}, {3, 4}};
float matriceB[2][2] = {{5, 6}, {7, 8}};

som_mat(matriceA, matriceB, 2, 2);
```

## ✅ Features
- ✅ **Addition matricielle** standard
- ✅ **Validation implicite** des dimensions
- ✅ **Affichage formaté** avec alignement
- ✅ **Gestion propre** de l'affichage ligne par ligne
