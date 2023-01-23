#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetCatalogItemsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetCatalogItemsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCatalogItemsRequest * this_ptr))
}
