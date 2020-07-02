#include <interception_macros.h>

INTERCEPT(27823760, void, NewSetupStateController__ApplyKnownState, (NewSetupStateController_o* this_ptr, int32_t stateGUID, int32_t context)) {
    // 1808259966 Present
    // 1558151251 Gone
    if (stateGUID == 1558151251)
        stateGUID = 1808259966;

    NewSetupStateController__ApplyKnownState(this_ptr, stateGUID, context);
}