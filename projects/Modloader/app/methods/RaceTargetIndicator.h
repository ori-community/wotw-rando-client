#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceTargetIndicator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RaceTargetIndicator {
    IL2CPP_REGISTER_METHOD(0x00723E70, bool, get_AllowIndicator, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00723F10, app::Vector3, get_TargetPositon, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RotateIndicator, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ScaleByDistance, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00723FF0, void, ctor, (app::RaceTargetIndicator * this_ptr))
} // namespace app::classes::RaceTargetIndicator
