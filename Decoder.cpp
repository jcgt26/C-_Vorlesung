
#include "Decoder.h"
#include<math.h>
Decoder::Decoder(){

}
Decoder::~Decoder(){

}
float Decoder::decode(Resistor resistor) {
    string temp;
    float ans;
    vector<Color> localBand = resistor.get_band();
    for (size_t i = 0; i < localBand.size(); i++)
    {
        if (i != localBand.size() - 1)
        {
            if (localBand[i].value == 'G' || localBand[i].value == 'S')
            {
                 cout<<"wrong Band color, please check"<<endl;
                 exit(-1);
            }
            else
            {
                temp += localBand[i].value;
            }
        }
        else
        {
            ans = stoi(temp) * pow(10,localBand[i].multiplier);
        }
    }
    return ans;
}

float Decoder::decode_band(vector<Color> localBand) {
    string temp;
    float ans;
    for (size_t i = 0; i < localBand.size(); i++)
    {
        if (i != localBand.size() - 1)
        {
            if (localBand[i].value == 'G' || localBand[i].value == 'S')
            {
                cout<<"wrong Band color, please check"<<endl;
                exit(-1);
            }
            else
            {
                temp += localBand[i].value;
            }
        }
        else
        {
            ans = stoi(temp) * pow(10,localBand[i].multiplier);
        }
    }
    return ans;
}
vector<Color> Decoder::encode(float resistance, int bandSize) {
    return create_band(resistance, bandSize);
}

vector<Color> Decoder::create_band(float resistance, int bandType) {
    vector<Color> band; //to return
    string sResistance = to_string(resistance);
    string firstValues;
    Color multiplierColor;
    for (int i = 0; i < bandType - 1; i++)
    {
        if(sResistance[i] == '.') {
            firstValues += sResistance[i+1];
            band.push_back(find_color(sResistance[i+1]));
        }
        else{
            firstValues += sResistance[i];
            band.push_back(find_color(sResistance[i]));
        }
    }

    multiplierColor = find_multiplier(stoi(firstValues), resistance);
    band.push_back(multiplierColor);
    return band;
}

Color Decoder::find_color(char color) {
    switch (color)
    {
        case '0':
            return band.black;
        case '1':
            return band.brown;
        case '2':
            return band.red;
        case '3':
            return band.orange;
        case '4':
            return band.yellow;
        case '5':
            return band.green;
        case '6':
            return band.blue;
        case '7':
            return band.violet;
        case '8':
            return band.grey;
        case '9':
            return band.white;

        case 'G':
            return band.gold;

        case 'S':
            return band.silver;
    }

}

Color Decoder::find_multiplier(int firstValues, int resistance) {
    if (resistance / 1 == firstValues)
    {
        return band.black;
    }
    else if (resistance / 10 == firstValues)
    {
        return band.brown;
    }
    else if (resistance / 100 == firstValues)
    {
        return band.red;
    }
    else if (resistance / 1000 == firstValues)
    {
        return band.orange;
    }
    else if (resistance / 10000 == firstValues)
    {
        return band.yellow;
    }
    else if (resistance / 100000 == firstValues)
    {
        return band.green;
    }
    else if (resistance / 1000000 == firstValues)
    {
        return band.blue;
    }
    else if (resistance / 0.1 == firstValues)
    {
        return band.gold;
    }
    else
    {
        return band.silver;
    }
}

