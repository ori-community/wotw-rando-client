#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinSkillPointsProvider {
    IL2CPP_REGISTER_METHOD(0x005DAD40, float, GetFloatValue, (app::SeinSkillPointsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinSkillPointsProvider * this_ptr))
}
