#ifndef _position_h_
#define _position_h_ 1

#include <vector>

class position {
  
  private:
  
    const unsigned int N; // Nombre maximal de personnes
    const unsigned int taille; // Valeur maximale à tirer
    std::vector<int>  x; // Coordonnee x
    std::vector<int>  y; // Coordonnee y
  
  public:
    // Constructeur sans argument
    position();

    // Constructeur surchargé
    position(std::vector<int>  new_x, std::vector<int>  new_y);
  
    //si l'utilisateur veut changer N et taille
    void initialise(unsigned int N_, unsigned int taille_) const;
  
    //obtenir N et taille
    int get_N() const;
    int get_taille() const;
  
    // obtenir x et y
    int get_x(unsigned int i_) const;
    int get_y(unsigned int i_) const;
    
    // Méthode d'affichage
    void affiche() const;
  
    // Méthode affichant uniquement le ième tirage
    void affiche(const unsigned int i_) const;
  
    // Comparaison de l'objet courant avec un second objet de type hasard
    bool compare(const position & p_, unsigned int i_, double r_) const;
};
#endif
