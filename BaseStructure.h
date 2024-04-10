#ifndef BASE_STRUCTURE_H
#define BASE_STRUCTURE_H

template <typename T, unsigned int size>
class BaseStructure {
public:
    BaseStructure() {}
    ~BaseStructure() {}
protected:
    T iArray[size];
};

#endif
