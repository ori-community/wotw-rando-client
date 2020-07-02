#include <interception_macros.h>
#include <macros.h>
#include <csharp_bridge.h>
namespace
{
    INTERCEPT(5475888, bool, Sein_World_Events__get_WaterPurified, ()) {
        return csharp_bridge::water_cleansed();
    }

    INTERCEPT(27823760, void, NewSetupStateController__ApplyKnownState, (NewSetupStateController_o* this_ptr, int32_t stateGUID, int32_t context)) {
        // Corrupted 569716315
        // Clean 2044614461
        if (stateGUID == 569716315 || stateGUID == 2044614461)
            stateGUID = csharp_bridge::water_cleansed() ? 2044614461 : 569716315;

        NewSetupStateController__ApplyKnownState(this_ptr, stateGUID, context);
    }
}