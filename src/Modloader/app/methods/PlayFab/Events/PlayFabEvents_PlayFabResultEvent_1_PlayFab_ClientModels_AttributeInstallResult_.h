#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeInstallResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AttributeInstallResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AttributeInstallResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AttributeInstallResult_* this_ptr,
        app::AttributeInstallResult* result
    )
}
