#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartItem_1.h>

namespace app::classes::PlayFab::PlayStreamModels::CartItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CartItem_1* this_ptr)
}
