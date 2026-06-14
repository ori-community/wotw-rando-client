#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEven_1_PlayFa_ServerModel_GetServerCustomIDsFromPlayFabIDsResu_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_* this_ptr,
        app::GetServerCustomIDsFromPlayFabIDsResult* result
    )
}
