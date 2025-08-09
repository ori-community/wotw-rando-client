#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GroundMovementTimelineBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x01096F50, void, OnEntityInitialized, app::GroundMovementTimelineBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01096FF0, void, OnEnter, app::GroundMovementTimelineBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010972A0, void, OnExit, app::GroundMovementTimelineBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010974B0, app::Vector3, RootMotionModifier, app::GroundMovementTimelineBehaviourNew* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, app::GroundMovementTimelineBehaviourNew* this_ptr)
} // namespace app::classes::GroundMovementTimelineBehaviourNew
