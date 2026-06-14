#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListGroupApplicationsResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_* this_ptr,
        app::ListGroupApplicationsResponse* result
    )
}
