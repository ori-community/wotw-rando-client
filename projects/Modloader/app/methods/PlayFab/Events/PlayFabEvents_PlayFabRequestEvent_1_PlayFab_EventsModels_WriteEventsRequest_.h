#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_EventsModels_WriteEventsRequest_.h>
#include <Modloader/app/structs/WriteEventsRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_EventsModels_WriteEventsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_EventsModels_WriteEventsRequest_* this_ptr,
        app::WriteEventsRequest* request
    )
}
