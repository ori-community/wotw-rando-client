#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HealthController.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::HealthController {
    IL2CPP_REGISTER_METHOD(0x010A16F0, void, Awake, (app::HealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A1930, void, OnValueChanged, (app::HealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A1960, void, add_OnHealthDepletedEvent, (app::HealthController * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010A1A50, void, remove_OnHealthDepletedEvent, (app::HealthController * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010A1B40, void, ctor, (app::HealthController * this_ptr))
} // namespace app::classes::HealthController
