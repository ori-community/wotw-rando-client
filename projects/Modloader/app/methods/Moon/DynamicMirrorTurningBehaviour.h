#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DynamicMirrorTurningBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::DynamicMirrorTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x01207370, app::SplitTurnAnimation*, get_CurrentMirrorTurningAnimation, (app::DynamicMirrorTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012073D0, void, OnEnterTask, (app::DynamicMirrorTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01207640, app::BehaviourStatus__Enum, OnExecuteTask, (app::DynamicMirrorTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::DynamicMirrorTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, ctor, (app::DynamicMirrorTurningBehaviour * this_ptr))
} // namespace app::classes::Moon::DynamicMirrorTurningBehaviour
