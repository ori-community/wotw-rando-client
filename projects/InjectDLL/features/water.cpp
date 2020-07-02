#include <interception_macros.h>
#include <macros.h>
#include <csharp_bridge.h>

#include <vector>

namespace
{
    bool water_damage_override = false;
    INTERCEPT(5475888, bool, Sein_World_Events__get_WaterPurified, ()) {
        return !water_damage_override && csharp_bridge::water_cleansed();
    }

    std::vector<std::pair<int32_t, int32_t>> water_states = {
        { 569716315, 2044614461 },      // Corrupted / Clean
        { 135459242, 2010339656 },      // notClean  / Clean
        { 742737118, 669048353 },       // corrupted / clean
        { 739518878, -1861424606 },     // corrupted / clean
        { 2054782292, -357160486 },     // Corrupted / Clean
        { 1639966459, 127921689 },      // Corrupted / Clean
        { -1876259767, -1976832348 },   // Corrupted / Clean
        { -1947088109, 385303388 },     // Corrupted / Clean
        { 378117992, -760384866 },      // Poisoned / Clean
        { -144265033, 685358568 },      // corrupted / clean
        { -882028644, -1833484193 },    // corrupted / clean
        { -1848734555, 30971136 },      // corrupted / clean
        { 1762013712, 816885685 },      // Corrupted / Clean
    };

    INTERCEPT(27823760, void, NewSetupStateController__ApplyKnownState, (NewSetupStateController_o* this_ptr, int32_t stateGUID, int32_t context)) {
        for (auto const& s : water_states)
        {
            if (stateGUID == s.first || stateGUID == s.second)
            {
                stateGUID = csharp_bridge::water_cleansed() ? s.second : s.first;
                break;
            }
        }

        // Enable water damage during the watermill escape.
        //-> -1629508673 : NotStarted
        //-> - 1353113975 : Started
        //-> - 2075520848 : Finished
        if (stateGUID == -1353113975)
            water_damage_override = true;
        else if (stateGUID == -2075520848 || stateGUID == -1629508673)
            water_damage_override = false;

        NewSetupStateController__ApplyKnownState(this_ptr, stateGUID, context);
    }
}