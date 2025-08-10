#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InviteToGroupResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_InviteToGroupResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_InviteToGroupResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_InviteToGroupResponse_* this_ptr,
        app::InviteToGroupResponse* result
    )
}
