#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItemBundleInfo_1.h>

namespace app::classes::PlayFab::ServerModels::CatalogItemBundleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CatalogItemBundleInfo_1* this_ptr)
}
