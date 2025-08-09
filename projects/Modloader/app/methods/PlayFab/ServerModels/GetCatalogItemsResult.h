#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCatalogItemsResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetCatalogItemsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetCatalogItemsResult_1* this_ptr)
}
