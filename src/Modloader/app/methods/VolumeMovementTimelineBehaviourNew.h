#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew.h>

namespace app::classes::VolumeMovementTimelineBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00877D80, void, OnEntityInitialized, app::VolumeMovementTimelineBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C4180, void, OnEnter, app::VolumeMovementTimelineBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008C4330, app::BehaviourStatus__Enum, OnExecute, app::VolumeMovementTimelineBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008C4410, void, OnExit, app::VolumeMovementTimelineBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008C4520, app::Vector3, RootMotionModifier, app::VolumeMovementTimelineBehaviourNew* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, app::VolumeMovementTimelineBehaviourNew* this_ptr)
} // namespace app::classes::VolumeMovementTimelineBehaviourNew
