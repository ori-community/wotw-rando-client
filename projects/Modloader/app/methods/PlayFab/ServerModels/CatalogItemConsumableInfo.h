#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItemConsumableInfo_1.h>

namespace app::classes::PlayFab::ServerModels::CatalogItemConsumableInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CatalogItemConsumableInfo_1 * this_ptr))
}
