#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinInsideZoneCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinInsideZoneCondition {
    IL2CPP_REGISTER_METHOD(0x0100F230, bool, Validate, (app::SeinInsideZoneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinInsideZoneCondition * this_ptr))
} // namespace app::classes::SeinInsideZoneCondition
