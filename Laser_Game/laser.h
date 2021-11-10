#ifndef LASER_H
#define LASER_H

#include "objet.h"


class laser : public objet
{
    private:
        /************************************************
         * @brief The direction of the laser
         * @see enum directions
         ***********************************************/
        short short int direction;
        /************************************************
         * @brief The step of the laser
         ***********************************************/
        double step;

    public:

        // Enumeration
        /************************************************
         * @brief Enumeration of the directions
         *
         * @details This enumeration defines the different directions
         * the laser can have
         ***********************************************/
        enum directions{
            LEFT, RIGHT, UP, DOWN
        };

        // Constructors
        /************************************************
         * @brief Constructor with a position, a direction and a step
         *
         * @param p : The initial position of the laser
         * @param direction : The initial direction of the laser
         * @param step : The step of the laser when it moves
         * @return Creates a laser
         ***********************************************/
        laser(const point&, int, double);

        // Destructor
        /************************************************
         * @brief Default destructor
         *
         * @details Destroys the laser
         ***********************************************/
        virtual ~laser() = default;

        // Overloads

        // Getters
        /************************************************
         * @brief Getter for the direction of the laser : constant
         *
         * @return Returns the direction of the laser
         ***********************************************/
        short short int getDirection() const;
        /************************************************
         * @brief Getter for the step of the laser : constant
         *
         * @return Returns the step of the laser
         ***********************************************/
        double getStep() const;

        // Setters
        /************************************************
         * @brief Setter for the direction of the laser
         *
         * @param direction : The new direction of the laser
         * @return Returns nothing
         ***********************************************/
        void setDirection(short short int);
        /************************************************
         * @brief Setter for the step of the laser
         *
         * @param step : The new step of the laser
         * @return Returns nothing
         ***********************************************/
        void setStep(double);

        // Functions
        /************************************************
         * @brief A function that moves the laser
         *
         * @details This function moves the laser from its position
         * by its direction and its step
         * @return Returns nothing
         ***********************************************/
        void moveByStep();

}; // End of laser

// Global functions

#endif // LASER_H
