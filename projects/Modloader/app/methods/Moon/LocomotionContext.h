#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/LocomotionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>

namespace app::classes::Moon::LocomotionContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::LocomotionContext* this_ptr, app::Locomotion* locomotion)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::Object*, GetLocomotionAs_1, app::LocomotionContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::AirEntityLocomotion*, GetLocomotionAs_2, app::LocomotionContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::GroundEntityLocomotion*, GetLocomotionAs_3, app::LocomotionContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::VolumeEntityLocomotion*, GetLocomotionAs_4, app::LocomotionContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1CF0, app::SkeetoLocomotion*, GetLocomotionAs_5, app::LocomotionContext* this_ptr)
} // namespace app::classes::Moon::LocomotionContext
