#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StoreItem.h>

namespace app::classes::PlayFab::ClientModels::StoreItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StoreItem* this_ptr)
}
