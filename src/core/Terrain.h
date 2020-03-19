#ifndef TERRAIN
#define TERRAIN

#include "Case.h"
#include "Vec2.h"

/** Terrain
 */
class Terrain{
public:

    /** New terrain
     * Initializes a new terrain
     * @param x dimension
     * @param y dimension
     */
    Terrain(int x, int y);

    /** Deletes terrain
     */
    ~Terrain();

    /** DimX accessor
     * @return DimY
     */
    int getDimX() const;

    /** DimY accessor
     * @return DimY
     */
    int getDimY() const;

    /** Dimensions accessor
     * @return Vec2 with dimensions in X and Y axes
     */
    Vec2 getDim() const;

    /** Case accessor
     * @param v Coordinates
     * @return Case value
     */
    Case getCase(Vec2 v) const;

    /** Case mutator
     * @param v Coordinates
     * @param c Case value
     */
    void setCase(Vec2 v, Case c);

private:
    Case* arr;
    int dimX;
    int dimY;

};

#endif
