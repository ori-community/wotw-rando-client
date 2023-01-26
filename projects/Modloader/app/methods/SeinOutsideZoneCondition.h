#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinOutsideZoneCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinOutsideZoneCondition {
    IL2CPP_REGISTER_METHOD(0x008AFD90, bool, Validate, (app::SeinOutsideZoneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinOutsideZoneCondition * this_ptr))
} // namespace app::classes::SeinOutsideZoneCondition
