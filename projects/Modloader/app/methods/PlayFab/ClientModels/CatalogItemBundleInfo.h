#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItemBundleInfo.h>

namespace app::classes::PlayFab::ClientModels::CatalogItemBundleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CatalogItemBundleInfo* this_ptr)
}
