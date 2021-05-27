#ifndef __BATTERY__
#define __BATTERY__

namespace battery
{
    
    bool is_charging(void);
    float get_voltage(void);

    /* charge level */
    typedef enum
    {
        LOW,   // 1
        MIDDLE, // 2
        FULL   // 3
        
    }charge_level;

    charge_level get_current_charge_level(void);

}



#endif /* __BATTERY__ */