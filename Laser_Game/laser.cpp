#include "laser.h"

// ---------- Constructors ----------

laser::laser(const point& p, int direction, double step) : objet{p}, this->direction{direction}, this->step{step} {}

// ---------- End of constructors ----------

// ---------- Destructor ----------

// ---------- End of destructor ----------

// ---------- Overloads ----------

// ---------- End of overloads ----------

// ---------- Getters ----------

short short int laser::getDirection() const {return this->direction;}

double laser::getStep() const {return this->step;}

// ---------- End of getters ----------

// ---------- Setters ----------

void laser::setDirection(short short int direction){
    this->direction = direction;
}

void laser::setStep(double step){
    this->step = step;
}

// ---------- End of setters ----------

// ---------- Functions ----------

// ---------- End of functions ----------

// ---------- Global functions ----------

// ---------- End of global functions ----------
