#include "object.h"
void Subject::Attach(Observer* o) {
    _observers->push_back(o);
};

void Subject::Detach(Observer *o) {
    _observers->remove(o);
}

void Subject::Notify() {
    std::list<Observer*>::iterator i = _observers->begin();
    for (; i != _observers->end(); i++) {
        (*i)->Update(this);
    }
}
