#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DealDamageAction {
    IL2CPP_REGISTER_METHOD(0x00DDCAB0, void, Awake, (app::DealDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDCAC0, void, Perform, (app::DealDamageAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DDD310, void, Prewarm, (app::DealDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DealDamageAction * this_ptr))
} // namespace app::classes::DealDamageAction
