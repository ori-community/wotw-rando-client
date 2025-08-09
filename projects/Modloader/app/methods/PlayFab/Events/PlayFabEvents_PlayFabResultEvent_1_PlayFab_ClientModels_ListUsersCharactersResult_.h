#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListUsersCharactersResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ListUsersCharactersResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ListUsersCharactersResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ListUsersCharactersResult_* this_ptr,
        app::ListUsersCharactersResult* result
    )
}
