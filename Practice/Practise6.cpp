


#include <stdio.h>
#include <math.h>
struct Coordinates
{
    float x, y;
};

struct Guy
{
    const char* name;
    bool active;
    Coordinates pos;
};

float distance(Guy g1, Guy g2)
{
    if (g1.active == true && g2.active == true)
    {
        return sqrt(pow(g1.pos.x - g2.pos.x, 2.0) + pow(g1.pos.y - g2.pos.y, 2.0));// sqrt((x1 - x2)^2 + (y1 - y2)^2)
    }

    //g1.pos.x
    return 0;
}


int main()
{
    Guy g1, g2;
    g1.active = true;
    g1.name = "Guy1";
    g1.pos.x = 3;
    g1.pos.y = 13;

    g2.active = true;
    g2.name = "Guy2";
    g2.pos.x = -7;
    g2.pos.y = 9;

    printf("%f", distance(g1, g2));
    // create ifle
    FILE* ptr = fopen("test.txt", "w");
    if (ptr == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    //   g2.active = true;
    //g2.name = "Guy2";
    //g2.pos.x = -7;
    //g2.pos.y = 9;


    fprintf(ptr, "pos X:  %.2f\n", g2.pos.x);
    fprintf(ptr, "pos Y:  %.2f\n", g2.pos.y);
    fprintf(ptr, "active or not:  %s\n", g2.active ? "true" : "false");
    fprintf(ptr, "name:  %s\n", g2.name);

    fprintf(ptr, "pos X:  %.2f\n", g1.pos.x);
    fprintf(ptr, "pos Y:  %.2f\n", g1.pos.y);
    fprintf(ptr, "active or not:  %s\n", g1.active ? "true" : "false");
    fprintf(ptr, "name:  %s\n", g1.name);


    fprintf(ptr, "distance %f", distance(g1, g2));
    // close file
    fclose(ptr);

    // open file wrtite to file a structure


  // int x, y;
  // Coordinates c;
  // c.x = 1;
  // c.y = -2;
  // printf("x: %d y: %d", c.x, c.y);
    return 0;
}