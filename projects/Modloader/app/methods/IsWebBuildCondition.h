#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsWebBuildCondition.h>

namespace app::classes::IsWebBuildCondition {
    IL2CPP_REGISTER_METHOD(0x00648FD0, bool, Validate, app::IsWebBuildCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsWebBuildCondition* this_ptr)
} // namespace app::classes::IsWebBuildCondition
