#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSkillPointsProvider.h>

namespace app::classes::SeinSkillPointsProvider {
    IL2CPP_REGISTER_METHOD(0x005DAD40, float, GetFloatValue, (app::SeinSkillPointsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinSkillPointsProvider * this_ptr))
} // namespace app::classes::SeinSkillPointsProvider
