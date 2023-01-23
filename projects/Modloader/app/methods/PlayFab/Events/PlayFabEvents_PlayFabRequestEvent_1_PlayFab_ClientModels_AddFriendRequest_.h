#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest_.h>
#include <Modloader/app/structs/AddFriendRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest_ * this_ptr, app::AddFriendRequest* request))
    IL2CPP_REGISTER_METHODINFO(0x04738E88, PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest_
