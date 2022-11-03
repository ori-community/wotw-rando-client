#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ConditionBasedGameObjectActivator {
    IL2CPP_REGISTER_METHOD(0x011E3EC0, void, Start, (app::ConditionBasedGameObjectActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E3EC0, void, Update, (app::ConditionBasedGameObjectActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E3ED0, void, UpdateActiveState, (app::ConditionBasedGameObjectActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ConditionBasedGameObjectActivator * this_ptr))
} // namespace app::classes::ConditionBasedGameObjectActivator
