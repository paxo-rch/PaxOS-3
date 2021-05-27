#include "../include/battery.hpp"

namespace battery
{
    #define MAX_VOLTAGE /* value */
    #define MIN_VOLTAGE /* value */

    // retourne true si le téléphone est en chargement, false sinon
    bool is_charging(void)
    {
        // content
    }

    // retourne le voltage au borne de la batterie (ou du moins une indication du niveau de batterie)
    float get_voltage(void)
    {
        // content
    }

    // retourne le niveau de charge de la batterie (les différents niveaux sont définis dans le fichier battery.hpp)
    charge_level get_current_charge_level(void)
    {
        float current_voltage = get_voltage();

        if(current_voltage == MAX_VOLTAGE)
            return FULL;
        else if(current_voltage == MIN_VOLTAGE)
            return LOW;
        else
            return MIDDLE;
    }

}
