#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddSharedGroupMembersRequest_.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddSharedGroupMembersRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddSharedGroupMembersRequest_ * this_ptr, app::AddSharedGroupMembersRequest* request))
}
