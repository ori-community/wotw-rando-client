#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItem_1.h>

namespace app::classes::PlayFab::ServerModels::CatalogItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CatalogItem_1* this_ptr)
}
