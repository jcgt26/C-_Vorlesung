/**
 * @author Juan Camilo Guzman T
 */

#ifndef PRAKTIKUM_WIDERSTAND_DECODER_H
#define PRAKTIKUM_WIDERSTAND_DECODER_H

#include<vector>
#include <string>
#include<iostream>
#include"Band.h"
#include "Resistor.h"
#include "Piece.h"
/**
 * @brief  Class "Decoder" : use to decode or encode a resistor band
 */
class Decoder
{
public:
    Decoder();
    ~Decoder();
/**
 *
 * @param band - band to decode, its a vector of color objects
 * @return
 */
    float decode_band(vector<Color> band);
    /**
 *@details The function endcode will use an auxiliar function called create_band
 * @param resistance - The resistance value, which have to be encoded to a new band
 * @param bandSize - Value necessary to find the right colors of the new band
 * @return - Vector of color objects
 *
 */
    vector<Color> encode(float resistance, int bandSize);

private:

    Band band;
    /** @details The function create_band needs to separate de values of the colors & multiplier; for that access to the
     * functions find color & find multiplier
     *
     * @param resistance Resistance value
     * @param bandSize - Size of the new band
     * @return  - Vector of colors
     */
    vector<Color> create_band(float resistance, int bandSize);
    /**
     *
     * @param color - Value to reference a color extracted from resistance value
     * @return -  Color object
     */
    Color find_color(char color);
    /**
     *
     * @param firstValues -> First characters of the resistance value
     * @param resistance -> The resistance value
     * @return An object color, which is the multiplier
     */
    Color find_multiplier(int firstValues, int resistance); //to chek

};



#endif //PRAKTIKUM_WIDERSTAND_DECODER_H
