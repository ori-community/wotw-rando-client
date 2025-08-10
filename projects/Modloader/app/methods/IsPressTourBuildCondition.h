#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsPressTourBuildCondition.h>

namespace app::classes::IsPressTourBuildCondition {
    IL2CPP_REGISTER_METHOD(0x00647440, bool, Validate, app::IsPressTourBuildCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsPressTourBuildCondition* this_ptr)
} // namespace app::classes::IsPressTourBuildCondition
