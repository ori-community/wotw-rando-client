#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AirMovementTimelineBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x004F19A0, void, OnEntityInitialized, (app::AirMovementTimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1A40, void, OnEnter, (app::AirMovementTimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004F1BF0, void, OnExit, (app::AirMovementTimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004F1D00, app::Vector3, RootMotionModifier, (app::AirMovementTimelineBehaviourNew * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04735CA8, AirMovementTimelineBehaviourNew_RootMotionModifier__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, (app::AirMovementTimelineBehaviourNew * this_ptr))
} // namespace app::classes::AirMovementTimelineBehaviourNew
