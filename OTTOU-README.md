```markdown
# Produit Vecteur-Matrice

Programme spécialisé dans le calcul du produit d'un vecteur par une matrice.

## 🎯 Fonctionnalités Exclusives

- **Produit vecteur × matrice** avec vérification de compatibilité
- **Interface interactive** de saisie des données
- **Affichage détaillé** du calcul étape par étape
- **Gestion d'erreurs** pour les dimensions incompatibles

## 🧮 Algorithmique

### Formule Mathématique
Pour un vecteur **V** (1×n) et une matrice **M** (n×m) :
```math
R[j] = Σ (V[i] × M[i][j]) pour i = 0 à n-1
```

### Compatibilité Dimensions
- Vecteur : `n` éléments  
- Matrice : `n` lignes × `m` colonnes
- Résultat : vecteur de `m` éléments

## 💻 Compilation & Exécution

```bash
gcc -o produit_vecteur_matrice produit.c
./produit_vecteur_matrice
```

## 📊 Exemple d'Exécution

```
========================================
   PRODUIT VECTEUR-MATRICE
   Auteur: OTTOU ABANDA David Nathanael
========================================

🎯 Dimensions du calcul:
Taille du vecteur (n): 2
Nombre de colonnes matrice (m): 2

📥 Saisie du vecteur 'V' (2 elements):
  Element 1: 1
  Element 2: 2

📥 Saisie de la matrice 'M' (2 x 2):
  Ligne 1: 1 2
  Ligne 2: 3 4

📋 Donnees saisies:
🔹 Vecteur V: [  1.00  2.00]
🔹 Matrice M (2x2):
  [  1.00  2.00]
  [  3.00  4.00]

⚡ Calcul en cours...
=== PRODUIT VECTEUR × MATRICE ===
Calcul: 1.0×1.0 + 2.0×3.0 | 1.0×2.0 + 2.0×4.0
📊 Resultat: [   7.00   10.00]

✅ RESULTAT FINAL:
🔹 Vecteur d'entree: [  1.00  2.00]
   ×
🔹 Matrice d'entree (2x2):
  [  1.00  2.00]
  [  3.00  4.00]
   =
🔹 Vecteur resultat: [   7.00   10.00]
```

## 👨‍💻 Auteur

**OTTOU ABANDA David Nathanael**  
- Implémentation exclusive produit vecteur-matrice
- Interface utilisateur intuitive
- Gestion robuste des erreurs

## 🚀 Features Techniques

- ✅ Validation dimensions en temps réel
- ✅ Affichage détaillé du calcul
- ✅ Formatage professionnel des résultats
- ✅ Limitation sécurisée des dimensions (MAX=10)
```

## 🔧 Commits suggérés

```bash
git add produit_vecteur_matrice.c
git commit -m "feat: programme complet produit vecteur-matrice

- Implémentation exclusive de prod_vect_mat()
- Interface interactive avec saisie sécurisée
- Affichage détaillé des calculs étape par étape
- Gestion d'erreurs dimensions et limites MAX"

git add README.md
git commit -m "docs: documentation spécialisée produit vecteur-matrice

- Guide usage exclusif pour cette opération
- Exemples détaillés avec sorties complètes
- Explications mathématiques de l'algorithme
- Documentation auteur et features techniques"
```

Ce programme est **100% dédié** au produit vecteur-matrice avec une interface professionnelle ! 🚀
```markdown
# Produit Vectoriel Généralisé

Programme spécialisé dans le calcul du produit vectoriel dans R^n.

## 🎯 Fonctionnalités Exclusives

- **Produit vectoriel généralisé** pour toute dimension n ≥ 2
- **Cas spécial 2D** : calcul du déterminant (aire orientée)
- **Algorithme par permutations** pour les dimensions supérieures
- **Affichage détaillé** du calcul étape par étape

## 🧮 Algorithmique Mathématique

### Cas 2D (n=2)
```math
V1 × V2 = (v1₁ × v2₂) - (v1₂ × v2₁)
```

### Cas n≥3 (Généralisation)
Chaque composante i est calculée par :
```math
resultat[i] = Σ signe(σ) × v1[j] × v2[k]
```
où σ est une permutation des indices (i,j,k)

## 💻 Compilation & Exécution

```bash
gcc -o produit_vectoriel produit_vectoriel.c
./produit_vectoriel
```

## 📊 Exemples d'Exécution

### Exemple 3D
```
========================================
   PRODUIT VECTORIEL GENERALISE
   Auteur: OTTOU ABANDA David Nathanael
========================================

🎯 Dimension de l'espace vectoriel (n): 3

📥 Saisie du vecteur 'V1' (3 elements):
  Composante 1: 1
  Composante 2: 2
  Composante 3: 3

📥 Saisie du vecteur 'V2' (3 elements):
  Composante 1: 4
  Composante 2: 5
  Composante 3: 6

📋 VECTEURS EN ENTREE:
🔹 Vecteur 1: [  1.00  2.00  3.00]
🔹 Vecteur 2: [  4.00  5.00  6.00]

⚡ CALCUL EN COURS...
=== PRODUIT VECTORIEL (R^3) ===
🔧 Calcul des composantes par permutations:
  Composante 0: +1.0×2.0×6.0 -1.0×3.0×5.0 = -3.00
  Composante 1: -1.0×1.0×6.0 +1.0×3.0×4.0 = 6.00
  Composante 2: +1.0×1.0×5.0 -1.0×2.0×4.0 = -3.00

📊 VECTEUR RESULTAT:
[   -3.00    6.00   -3.00]

✅ RESULTAT FINAL - PRODUIT VECTORIEL R^3
V1 × V2 = [   -3.00    6.00   -3.00]

💡 En 3D, ce vecteur est orthogonal à V1 et V2
   ||V1 × V2|| = aire du parallélogramme formé par V1 et V2
```

### Exemple 2D
```
🎯 Dimension de l'espace vectoriel (n): 2
📥 Saisie du vecteur 'V1' (2 elements): 3, 4
📥 Saisie du vecteur 'V2' (2 elements): 1, 2

=== PRODUIT VECTORIEL (R^2) ===
🎯 Cas 2D - Determinant du plan:
   Calcul: (3.0 × 2.0) - (4.0 × 1.0)
   = 6.0 - 4.0
📊 Resultat: [2.00]

💡 En 2D, résultat = déterminant |V1 V2|
   Valeur = aire orientée du parallélogramme
```

## 👨‍💻 Auteur

**OTTOU ABANDA David Nathanael**  
- Implémentation de l'algorithme de produit vectoriel généralisé
- Gestion des cas particuliers 2D/3D/dimensions supérieures
- Interface utilisateur intuitive avec explications mathématiques

## 🚀 Features Techniques

- ✅ **Généralisation dimensionnelle** : support de R^n
- ✅ **Calcul par permutations** avec détermination du signe
- ✅ **Affichage pédagogique** des étapes de calcul
- ✅ **Validation robuste** des dimensions d'entrée
- ✅ **Explications mathématiques** contextuelles

## 📈 Applications

- **Géométrie vectorielle** : calcul d'aires, volumes
- **Physique** : moments de force, champ magnétique
- **Infographie 3D** : calcul de normales
- **Algèbre linéaire** : études des espaces vectoriels
```

## 🔧 Commits suggérés

```bash
git add produit_vectoriel.c
git commit -m "feat: programme complet produit vectoriel généralisé

- Implémentation produit vectoriel R^n avec n ≥ 2
- Algorithme par permutations pour dimensions supérieures
- Cas spécial 2D avec calcul déterminant
- Interface interactive avec explications mathématiques
- Affichage détaillé des calculs étape par étape"

git add README.md
git commit -m "docs: documentation spécialisée produit vectoriel

- Explications mathématiques détaillées
- Exemples d'exécution 2D et 3D complets
- Guide d'utilisation et applications pratiques
- Documentation algorithmique et features techniques"
```

Ce programme est **100% dédié** au produit vectoriel avec une approche pédagogique et professionnelle ! 🚀
