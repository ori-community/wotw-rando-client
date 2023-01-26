#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TargetMatch.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TargetMatch {
    IL2CPP_REGISTER_METHOD(0x031B6D90, void, Awake, (app::TargetMatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6E20, void, Match, (app::TargetMatch * this_ptr, float weight, app::Vector3 anchor))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TargetMatch * this_ptr))
} // namespace app::classes::TargetMatch
