# 📚 **README - Fonctions Mathématiques Principales**

## 🧮 `produit_vectoriel()`

### **Description**
Calcule le produit vectoriel généralisé de deux vecteurs dans ℝⁿ.

### **Signature**
```c
void produit_vectoriel(float vect1[], float vect2[], float resultat[], int n);
```

### **Fonctionnement**
- **n = 2** : Retourne le déterminant 2D (produit pseudo-scalaire)
- **n ≥ 3** : Produit vectoriel généralisé utilisant les permutations

### **Exemple**
```c
float v1[3] = {1, 2, 3};
float v2[3] = {4, 5, 6};
float res[3];
produit_vectoriel(v1, v2, res, 3);
// Résultat: [-3, 6, -3]
```

### **Spécificités**
- Gère toutes les dimensions n ≥ 2
- Algorithme basé sur le calcul de déterminants généralisés
- Affichage automatique du résultat

---

## 🔄 `prod_vect_mat()`

### **Description**
Calcule le produit d'un vecteur par une matrice.

### **Signature**
```c
void prod_vect_mat(float vect[], float mat[][MAX], float prod[], int n, int m);
```

### **Précondition**
- `n == m` (taille du vecteur = nombre de lignes de la matrice)

### **Opération Mathématique**
```
[vect]₁ₓₙ × [mat]ₙₓₙ = [prod]₁ₓₙ
```

### **Exemple**
```c
float vect[2] = {1, 2};
float mat[2][2] = {{1, 2}, {3, 4}};
float res[2];
prod_vect_mat(vect, mat, res, 2, 2);
// Résultat: [1×1 + 2×3, 1×2 + 2×4] = [7, 10]
```

### **Algorithme**
```c
Pour chaque colonne j de la matrice:
    prod[j] = Σ (vect[i] × mat[i][j]) pour i de 0 à n-1
```

---

## 💡 **Utilisation Combinée**

```c
float v1[3] = {1, 2, 3};
float v2[3] = {4, 5, 6};
float mat[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
float res1[3], res2[3];

// Produit vectoriel
produit_vectoriel(v1, v2, res1, 3);

// Produit vecteur-matrice  
prod_vect_mat(v1, mat, res2, 3, 3);
```

---

## ⚠️ **Notes Techniques**

- **Dimensions** : Les vecteurs doivent avoir la même taille
- **Compatibilité** : Vérification automatique n == m pour le produit matrice
- **Performance** : Complexité O(n³) pour le produit vectoriel, O(n²) pour le produit matrice
- **Précision** : Utilisation de nombres flottants simple précision
