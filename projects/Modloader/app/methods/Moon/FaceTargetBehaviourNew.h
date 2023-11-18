#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FaceTargetBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::FaceTargetBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00E2D530, app::Vector3, get_TargetPosition, (app::FaceTargetBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01222810, void, OnEntityInitialized, (app::FaceTargetBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012228B0, app::BehaviourStatus__Enum, OnExecute, (app::FaceTargetBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01222C10, void, OnEnter, (app::FaceTargetBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01222C70, void, ctor, (app::FaceTargetBehaviourNew * this_ptr))
} // namespace app::classes::Moon::FaceTargetBehaviourNew
