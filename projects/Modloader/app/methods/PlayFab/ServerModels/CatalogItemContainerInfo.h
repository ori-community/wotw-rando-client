#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatalogItemContainerInfo_1.h>

namespace app::classes::PlayFab::ServerModels::CatalogItemContainerInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CatalogItemContainerInfo_1* this_ptr)
}
