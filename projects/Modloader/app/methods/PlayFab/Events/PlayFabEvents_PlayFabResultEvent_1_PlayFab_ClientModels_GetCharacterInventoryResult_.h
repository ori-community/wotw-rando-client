#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterInventoryResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterInventoryResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterInventoryResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterInventoryResult_* this_ptr,
        app::GetCharacterInventoryResult* result
    )
}
