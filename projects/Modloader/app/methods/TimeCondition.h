#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::TimeCondition {
    IL2CPP_REGISTER_METHOD(0x00CF6CC0, void, ResetCondition, (app::TimeCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED800, void, UpdateCondition, (app::TimeCondition * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010ED810, bool, Validate, (app::TimeCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimeCondition * this_ptr))
} // namespace app::classes::TimeCondition
