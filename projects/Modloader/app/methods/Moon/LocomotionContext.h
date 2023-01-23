#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LocomotionContext.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>

namespace app::classes::Moon::LocomotionContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LocomotionContext * this_ptr, app::Locomotion* locomotion))
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::Object*, GetLocomotionAs_1, (app::LocomotionContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::AirEntityLocomotion*, GetLocomotionAs_2, (app::LocomotionContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703350, LocomotionContext_GetLocomotionAs_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::GroundEntityLocomotion*, GetLocomotionAs_3, (app::LocomotionContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047148E8, LocomotionContext_GetLocomotionAs_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::VolumeEntityLocomotion*, GetLocomotionAs_4, (app::LocomotionContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CDE8, LocomotionContext_GetLocomotionAs_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::SkeetoLocomotion*, GetLocomotionAs_5, (app::LocomotionContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782648, LocomotionContext_GetLocomotionAs_4__MethodInfo)
} // namespace app::classes::Moon::LocomotionContext
