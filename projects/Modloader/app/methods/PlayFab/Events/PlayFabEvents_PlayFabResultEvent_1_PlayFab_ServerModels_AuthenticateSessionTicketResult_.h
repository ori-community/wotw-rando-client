#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticateSessionTicketResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_* this_ptr,
        app::AuthenticateSessionTicketResult* result
    )
}
