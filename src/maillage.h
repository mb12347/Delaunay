#ifndef MAILLAGE_H
#define MAILLAGE_H

#include <vector>

struct point {
    double x = 0.;
    double y = 0.;
    int ref = 0;
};

struct arete {
    point p1 = {-1, -1, 0};
    point p2 = {-1, -1, 0};
    int ref = 0;
};

struct triangle {
    arete a1 = {{-1, -1, 0}, {-1, -1, 0}, 0};
    arete a2 = {{-1, -1, 0}, {-1, -1, 0}, 0};
    arete a3 = {{-1, -1, 0}, {-1, -1, 0}, 0};
    int ref = 0;
};

struct maillage {
    std::vector<point>    sommets;
    std::vector<arete>    aretes;      // arêtes de la géométrie d'entrée
    std::vector<triangle> triangles;

    int nbSommetsEntree = 0;           // nombre de sommets lus dans le fichier
};

// --- vérifications (dans maillage.cpp) ---

// triangles bien orientés + voisins réciproques et cohérents
bool verifierCoherence(const Maillage& m);

// force brute : aucun sommet dans le cercle circonscrit d'un triangle
bool verifierDelaunay(const Maillage& m);

// affiche le nombre de sommets / arêtes / triangles (non supprimés)
void afficherInfos(const Maillage& m);

#endif
