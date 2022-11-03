#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkillPointsFloatProvider {
    IL2CPP_REGISTER_METHOD(0x006B53D0, float, GetFloatValue, (app::SkillPointsFloatProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SkillPointsFloatProvider * this_ptr))
} // namespace app::classes::SkillPointsFloatProvider
