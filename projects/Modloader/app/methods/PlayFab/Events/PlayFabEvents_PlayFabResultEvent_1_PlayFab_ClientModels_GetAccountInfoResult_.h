#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult_.h>
#include <Modloader/app/structs/GetAccountInfoResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult_ * this_ptr, app::GetAccountInfoResult* result))
    IL2CPP_REGISTER_METHODINFO(0x0473FF28, PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult_
