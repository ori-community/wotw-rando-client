#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleNewsRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleNewsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleNewsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleNewsRequest_* this_ptr,
        app::GetTitleNewsRequest_1* request
    )
}
