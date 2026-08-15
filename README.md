# Module CPP 02

Ce module de la piscine C++ de l'école 42 se concentre sur deux concepts avancés essentiels en C++ : la **Forme Canonique Orthodoxe de Coplien (Orthodox Canonical Class Form)** et le polymorphisme ad-hoc via la **surcharge des opérateurs**.

Le fil conducteur de ce module est la création d'une classe `Fixed` représentant des **nombres à virgule fixe** (Fixed-point numbers), une alternative aux nombres à virgule flottante (`float`, `double`) pour optimiser les calculs de précision.

## Concepts abordés

### 1. La Forme Canonique Orthodoxe (OCCF)
Dès l'exercice 00, chaque classe doit respecter cette norme qui impose la présence de 4 éléments fondamentaux :
- **Un constructeur par défaut** : Initialise un objet vide ou à 0 (`Fixed::Fixed()`).
- **Un constructeur de recopie** : Crée un nouvel objet en copiant les valeurs d'un autre objet du même type (`Fixed::Fixed(const Fixed&)`).
- **Un opérateur d'affectation** (`=`) : Permet d'assigner la valeur d'un objet existant à un autre objet déjà initialisé (`Fixed& operator=(const Fixed&)`).
- **Un destructeur** : Gère le nettoyage de la mémoire lorsque l'objet est détruit (`Fixed::~Fixed()`).

### 2. Les Nombres à Virgule Fixe (Fixed-Point Numbers)
Contrairement aux `float` dont la virgule "flotte" selon l'exposant, un nombre à virgule fixe sépare de manière stricte sa partie entière de sa partie fractionnaire au niveau de ses bits.
- Nous utilisons un simple `int` pour stocker la valeur totale.
- Un décalage binaire (bitshift `<<` et `>>`) avec une constante `_fractionalBits = 8` est utilisé pour convertir les entiers.
- La fonction `roundf()` est employée pour conserver la précision lors de la conversion depuis un `float`.

### 3. La Surcharge des Opérateurs
Dans l'exercice 02, la classe `Fixed` s'enrichit pour se comporter exactement comme un type primitif (comme un `int` ou un `float`). Le C++ permet de redéfinir le comportement des symboles natifs :
- **Opérateurs de comparaison** : `>`, `<`, `>=`, `<=`, `==`, `!=`
- **Opérateurs arithmétiques** : `+`, `-`, `*`, `/`
- **Opérateurs d'incrémentation** : Pré-incrémentation (`++a`) et Post-incrémentation (`a++`)
- **Opérateur d'insertion** : Surcharge de `<<` (en dehors de la classe) pour l'affichage via `std::cout`.

## Compilation et Exécution

Chaque exercice dispose de son propre sous-dossier et Makefile. 
Exemple pour exécuter l'exercice 02 :

```bash
cd ex02
make
./fixed
```
