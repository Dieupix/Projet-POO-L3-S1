#ifndef CIBLE_H_INCLUDED
#define CIBLE_H_INCLUDED

#include "object.h"

class laser ;

class cible : public object
{
public :

    cible(const point& position) ;
    virtual ~cible() = default;
    bool isAffected(laser& ) ;
    virtual void print(std::ostream& ost) const override;
    bool operator==(const object& ) const ;
    bool operator!=(const object& ) const ;


private :

   bool d_affected ;

};


#endif // CIBLE_H_INCLUDED
