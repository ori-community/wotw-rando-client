#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEv_1_Play_ClientMod_GetPlayFabIDsFromFacebookInstantGamesIdsRe_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* this_ptr,
        app::GetPlayFabIDsFromFacebookInstantGamesIdsResult* result
    )
}
