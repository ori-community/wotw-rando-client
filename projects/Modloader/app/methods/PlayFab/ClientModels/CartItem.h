#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartItem.h>

namespace app::classes::PlayFab::ClientModels::CartItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CartItem* this_ptr)
}
