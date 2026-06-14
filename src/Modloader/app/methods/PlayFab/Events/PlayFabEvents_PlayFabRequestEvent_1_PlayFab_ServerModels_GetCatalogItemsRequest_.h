#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCatalogItemsRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCatalogItemsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCatalogItemsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCatalogItemsRequest_* this_ptr,
        app::GetCatalogItemsRequest_1* request
    )
}
