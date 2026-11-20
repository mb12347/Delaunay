#ifndef MAILLAGE_H
#define MAILLAGE_H

#include <vector>
#include <map>
#include <iostream>

// Un point du plan. ref = 0 pour un point intérieur, sinon numéro du bord.
struct point {
    double x;
    double y;
    int ref;
};

// Une arête : indices de ses 2 sommets dans le tableau de points associé.
struct arete {
    int s[2];
    int ref;
};

// Un triangle : indices de ses 3 sommets, toujours dans le sens trigo.
struct triangle {
    int s[3];
    int ref;
};

struct maillage {
    std::vector<point>    _point_maillage;
    std::vector<arete>    _arete_maillage;     // uniquement les arêtes du bord
    std::vector<triangle> _triangle_maillage;
};

// Géométrie : points et arêtes du bord du domaine (indices dans _point_geom).
struct geom {
    std::vector<point> _point_geom;
    std::vector<arete> _arete_geom;
};

#endif // MAILLAGE_H
