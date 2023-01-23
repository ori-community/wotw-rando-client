#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_.h>
#include <Modloader/app/structs/ServerLoginResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_ * this_ptr, app::ServerLoginResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04783BF0, PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_
