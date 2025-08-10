#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddUserVirtualCurrencyRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddUserVirtualCurrencyRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddUserVirtualCurrencyRequest_* this_ptr,
        app::AddUserVirtualCurrencyRequest_1* request
    )
}
