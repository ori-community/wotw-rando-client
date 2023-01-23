#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult_.h>
#include <Modloader/app/structs/PayForPurchaseResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult_ * this_ptr, app::PayForPurchaseResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04761FB8, PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult_
