#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_.h>
#include <Modloader/app/structs/UpdateCharacterDataResult_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_* this_ptr,
        app::UpdateCharacterDataResult_1* result
    )
}
