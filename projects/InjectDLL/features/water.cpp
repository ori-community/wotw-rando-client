#include <interception_macros.h>
#include <macros.h>

namespace
{
    bool water_purified = false;

    INTERCEPT(5475888, bool, Sein_World_Events__get_WaterPurified, ()) {
        return water_purified;
    }

    INTERCEPT(27823760, void, NewSetupStateController__ApplyKnownState, (NewSetupStateController_o* this_ptr, int32_t stateGUID, int32_t context)) {
        // Corrupted 569716315
        // Clean 2044614461
        if (stateGUID == 569716315 || stateGUID == 2044614461)
            stateGUID = water_purified ? 2044614461 : 569716315;

        NewSetupStateController__ApplyKnownState(this_ptr, stateGUID, context);
    }
}

INJECT_C_DLLEXPORT void set_water_purified(bool value)
{
    water_purified = value;
}
