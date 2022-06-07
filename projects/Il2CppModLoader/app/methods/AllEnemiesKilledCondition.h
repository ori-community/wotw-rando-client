#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AllEnemiesKilledCondition {
    IL2CPP_REGISTER_METHOD(0x004F2750, bool, Validate, (app::AllEnemiesKilledCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AllEnemiesKilledCondition * this_ptr))
}
