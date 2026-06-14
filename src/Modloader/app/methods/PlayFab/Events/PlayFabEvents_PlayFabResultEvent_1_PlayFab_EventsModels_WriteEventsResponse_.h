#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_EventsModels_WriteEventsResponse_.h>
#include <Modloader/app/structs/WriteEventsResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_EventsModels_WriteEventsResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_EventsModels_WriteEventsResponse_* this_ptr,
        app::WriteEventsResponse* result
    )
}
