#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketRequest_.h>
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketRequest_ * this_ptr, app::AuthenticateSessionTicketRequest* request))
}
