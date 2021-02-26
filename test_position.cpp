#include <iostream>
#include <cstdlib>
#include <vector>
#include "position.h"


int main(){
position les_positions;
std::cout << les_positions.get_x(5) << " " << les_positions.get_y(5) << std::endl;
les_positions.affiche();
les_positions.affiche(5);
position les_autres_positions;
les_autres_positions.affiche();
std::cout << les_positions.compare(les_autres_positions, 5, 10) << std::endl;
return 0;
}
