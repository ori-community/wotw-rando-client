#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DropCurrentlyHeldItem {
    IL2CPP_REGISTER_METHOD(0x00BDCEE0, void, Perform, (app::DropCurrentlyHeldItem * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::DropCurrentlyHeldItem * this_ptr))
} // namespace app::classes::DropCurrentlyHeldItem
