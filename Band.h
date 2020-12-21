
#ifndef PRAKTIKUM_WIDERSTAND_BAND_H
#define PRAKTIKUM_WIDERSTAND_BAND_H

struct Color
{
    char value;
    int multiplier;
};
/**
 * @brief Class Band will be a container for Color objects
 */
class Band
{
public:
    Color black{'0', 0};
    Color brown{'1', 1};
    Color red{'2', 2};
    Color orange{'3', 3};
    Color yellow{'4', 4};
    Color green{'5', 5};
    Color blue{'6', 6};
    Color violet{'7', 7};
    Color grey{'8', 8};
    Color white{'9', 9};
    Color gold{'G', -1};
    Color silver{'S', -2};
};


#endif //PRAKTIKUM_WIDERSTAND_BAND_H