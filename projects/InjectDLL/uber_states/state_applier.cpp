#include <uber_states/state_applier.h>

#include <common.h>
#include <interception_macros.h>
#include <macros.h>
#include <csharp_bridge.h>

#include <unordered_map>

namespace uber_states
{
    namespace
    {
        std::unordered_map<int32_t, applier_intercept> applier_intercepts;

        INTERCEPT(27823760, void, NewSetupStateController__ApplyKnownState, (NewSetupStateController_o* this_ptr, int32_t stateGUID, int32_t context)) {
            auto it = applier_intercepts.find(stateGUID);
            if (it != applier_intercepts.end())
                stateGUID = it->second(this_ptr, stateGUID, context);

            NewSetupStateController__ApplyKnownState(this_ptr, stateGUID, context);
        }
    }

    void register_applier_intercept(int32_t state, applier_intercept callback)
    {
        if (applier_intercepts.find(state) != applier_intercepts.end())
            trace(MessageType::Error, 1, "init", "registering same applier state twice, overwriting.");

        applier_intercepts[state] = callback;
    }

    void register_applier_intercept(std::vector<int32_t> states, applier_intercept callback)
    {
        for (auto state : states)
            register_applier_intercept(state, callback);
    }
}
