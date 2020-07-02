#include <interception_macros.h>
#include <csharp_bridge.h>
#include <dev/dev_commands.h>

namespace
{
    bool no_energy = false;

    INTERCEPT(9451104, float, SeinEnergy__get_EnergyCostMultiplier, (SeinEnergy_o* this_ptr)) {
        if (no_energy)
            return 0.f;

        return SeinEnergy__get_EnergyCostMultiplier(this_ptr);
    }

    void initialize_no_energy()
    {
        no_energy = csharp_bridge::check_ini("NoEnergyCost");
    }

    CALL_ON_INIT(initialize_no_energy);
}
