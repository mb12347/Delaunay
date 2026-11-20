#ifndef MAILLAGE_H
#define MAILLAGE_H

#include <vector>
#include <map>
#include <iostream>

struct point {

double x;
double y;
int ref;

};

struct arete {

    point p1;
    point p2;
    int ref;
};

struct triangle {

    arete a1;
    arete a2;
    arete a3;
    
    int ref;
    
};

struct maillage {

        std::vector<point> _point_maillage;
        std::vector<arete> _arete_maillage;
        std::vector<triangle> _triangle_maillage;

};

struct geom {
    std::vector<point> _point_geom;
    std::vector<arete> _arete_geom;
};














#endif