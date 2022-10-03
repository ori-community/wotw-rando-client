#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SharedStateProvider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AssignStates, (app::SharedStateProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SharedStateProvider * this_ptr))
} // namespace app::classes::SharedStateProvider
