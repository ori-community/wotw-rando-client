#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_* this_ptr,
        app::RedeemMatchmakerTicketResult* result
    )
}
