#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoveItemToCharacterFromCharacterResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEven_1_PlayFa_ServerModel_MoveItemToCharacterFromCharacterResu_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_* this_ptr,
        app::MoveItemToCharacterFromCharacterResult* result
    )
}
