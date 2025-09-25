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
