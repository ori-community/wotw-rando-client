#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderAttackSettings {
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, IsSpecialAttack, (app::SpiderAttackSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00953E60, void, ctor, (app::SpiderAttackSettings * this_ptr))
}
