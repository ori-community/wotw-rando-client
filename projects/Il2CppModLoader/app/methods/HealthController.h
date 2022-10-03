#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HealthController {
    IL2CPP_REGISTER_METHOD(0x010A16F0, void, Awake, (app::HealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A1930, void, OnValueChanged, (app::HealthController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779688, HealthController_OnValueChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010A1960, void, add_OnHealthDepletedEvent, (app::HealthController * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010A1A50, void, remove_OnHealthDepletedEvent, (app::HealthController * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010A1B40, void, ctor, (app::HealthController * this_ptr))
} // namespace app::classes::HealthController
