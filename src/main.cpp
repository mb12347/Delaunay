
#include "maillage.h"

int main() {
    
    double x1=0.,y1=0.,x2=1.,y2=0.,x3=1.,y3=1.,x4=0.,y4=1.;
    point p1, p2, p3, p4;
    arete a1, a2, a3, a4;
    geom g1;

    p1.x=x1;
    p1.y=y1;
    p2.x=x2;
    p2.y=y2;
    p3.x=x3;
    p3.y=y3;
    p4.x=x4;
    p4.y=y4;

    a1.p1 = p1;
    a1.p2 = p2;
    a2.p1 = p2;
    a2.p2 = p3;
    a3.p1 = p3;
    a3.p2 = p4;
    a4.p1 = p4;
    a4.p2 = p1;

    g1._point_geom = {p1,p2,p3,p4};
    g1._arete_geom= {a1,a2,a3,a4};


    


    return 0;
}