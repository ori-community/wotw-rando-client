#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetRandomResultTablesRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetRandomResultTablesRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetRandomResultTablesRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetRandomResultTablesRequest_* this_ptr,
        app::GetRandomResultTablesRequest* request
    )
}
