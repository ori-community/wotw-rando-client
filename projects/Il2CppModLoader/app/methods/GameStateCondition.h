#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GameStateCondition {
    IL2CPP_REGISTER_METHOD(0x00403F30, bool, Validate, (app::GameStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GameStateCondition * this_ptr))
} // namespace app::classes::GameStateCondition
