#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CatalogItemContainerInfo.h>

namespace app::classes::PlayFab::ClientModels::CatalogItemContainerInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CatalogItemContainerInfo * this_ptr))
}
