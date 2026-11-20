#include "maillage.h"

int main() {

    // Géométrie : carré unité, 4 bords numérotés de 1 à 4
    geom g1;

    g1._point_geom = {
        {0., 0., 1},   // 0
        {1., 0., 1},   // 1
        {1., 1., 1},   // 2
        {0., 1., 1}    // 3
    };

    g1._arete_geom = {
        {{0, 1}, 1},   // bas
        {{1, 2}, 2},   // droite
        {{2, 3}, 3},   // haut
        {{3, 0}, 4}    // gauche
    };

    return 0;
}
