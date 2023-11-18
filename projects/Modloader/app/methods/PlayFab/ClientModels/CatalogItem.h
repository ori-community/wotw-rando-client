#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItem.h>

namespace app::classes::PlayFab::ClientModels::CatalogItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CatalogItem * this_ptr))
}
