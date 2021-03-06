/** @file Player.h
 */
#ifndef PLAYER_H
#define PLAYER_H
#include "Vec2.h"
#include "Direction.h"
#include "Terrain.h"

/** @brief Represent the player
 *  @sa Ennemy
 *  @sa Terrain
 */
class Player {
    public :
        /** @brief Default constructor : initializes at (0, 0)
         */
        Player();

         /** @brief constructor
         */
        Player(Vec2 p);
        
        /**
         * @brief Destructeur par défaut de la classe player
         */
        ~Player();

        /** 
         * @brief Fonction renvoyant la position du joueur
         * @return Renvoie le vecteur de la position du joueur
         */
        Vec2 getPos() const;

        /**
         * @brief Fonction renvoyant la position sur l'axe x du joueur
         * @return Renvoie un entier en lien avec la position sur l'axe x du joueur
         */
        int getX() const;

        /**
         * @brief Fonction renvoyant la position sur l'axe y du joueur
         * @return Renvoie un entier en lien avec la position sur l'axe y du joueur
         */
        int getY() const;

        /**
         * @brief Fonction permettant le déplacement du joueur sur un terrain en fnction d'une direction
         * @param T [in] Terrain
         * @param D [in] Direction
         * @return Renvoie la position du joueur après modification des coordonnées
         */
        void move(const Terrain& T, Direction D);

        /**
         * @brief Procédure permettant d'initialiser une position du joueur
         * @param p Prend en paramètre un vecteur
         */
        void setPos(Vec2 p);

        /** @brief Test the player class
         * 
         *  This is a regression test
         */
        void test() const;
    
    private :
        Vec2 pos; ///< Player position
};

#endif