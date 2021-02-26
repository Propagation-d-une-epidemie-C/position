#include "position.h"
#include <iostream>
#include <cstdlib>
#include <vector>

position::position() : N(30), taille  (50)
  {
    for(unsigned int i = 0; i < N; i++){
      x.push_back(int(rand() % taille));
      y.push_back(int(rand() % taille));
    }
  }


position::position(std::vector<int> new_x, std::vector<int> new_y):
  N (30), taille (50), x (new_x), y (new_y) {}


int position::get_x(unsigned int i_) const{
  return x[i_];
}

int position::get_y(unsigned int i_) const{
  return y[i_];
}

void position::affiche() const{
  std::cout << "tableau x :" << std::endl;
  for(unsigned int i = 0; i < N; i++)
    std::cout << x[i] << std::endl;
  std::cout << "tableau y :" << std::endl;
  for(unsigned int i = 0; i < N; i++)
    std::cout << y[i] << std::endl;
}

void position::affiche(const unsigned int i_) const{
  if( i_ >= N ){
    std::cerr << "ERROR: indice trop grand : "<< i_ << ">" << N <<std::endl;
    return;
  }
  std::cout << "x = " << x[i_] << " & " << "y = " << y[i_] << std::endl;
}

int position::compare(const position & p_, unsigned int i_,double r_) const{
  int compteur;
  for(unsigned int j = 0; j < N; j++){
    std::cout << j << std::endl;
    if ((x[i_]-p_.x[j])*(x[i_]-p_.x[j]) + (y[i_]-p_.y[j])*(y[i_]-p_.y[j]) <= r_*r_)

      return true;
    else 
      return false;
  }
}
