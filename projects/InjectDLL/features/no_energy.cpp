#include <csharp_bridge.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool no_energy = false;

    IL2CPP_INTERCEPT(, SeinEnergy, float, get_EnergyCostMultiplier, (app::SeinEnergy* this_ptr)) {
        if (no_energy)
            return 0.f;

        return SeinEnergy::get_EnergyCostMultiplier(this_ptr);
    }

    void initialize_no_energy()
    {
        no_energy = csharp_bridge::check_ini("NoEnergyCost");
    }

    CALL_ON_INIT(initialize_no_energy);
}
