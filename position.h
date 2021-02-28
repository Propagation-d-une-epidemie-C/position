#ifndef _position_h_
#define _position_h_ 1
#include <iostream>
#include <vector>

class position {
  
  private:
  
    unsigned int N; // Nombre maximal de personnes
    unsigned int taille; // Valeur maximale à tirer
    std::vector<int>  x; // Coordonnee x
    std::vector<int>  y; // Coordonnee y
  
  public:
    // Constructeur sans argument
    position();

    // Constructeur surchargé
    position(std::vector<int>  new_x, std::vector<int>  new_y);
  
    //si l'utilisateur veut changer N et taille
    void initialise(unsigned int N_, unsigned int taille_);
  
    //obtenir N et taille
    int get_N() const;
    int get_taille() const;
  
    // obtenir x et y
    int get_x(unsigned int i_) const;
    int get_y(unsigned int i_) const;
    std::vector<int> getx() const;
    std::vector<int> gety() const;
    
    // Méthode d'affichage
    void affiche() const;
  
    // Méthode affichant uniquement le ième tirage
    void affiche(const unsigned int i_) const;
  

};
#endif
