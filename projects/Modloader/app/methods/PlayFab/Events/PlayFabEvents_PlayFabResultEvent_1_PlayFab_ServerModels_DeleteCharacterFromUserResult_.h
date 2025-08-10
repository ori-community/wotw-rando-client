#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteCharacterFromUserResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_* this_ptr,
        app::DeleteCharacterFromUserResult* result
    )
}
