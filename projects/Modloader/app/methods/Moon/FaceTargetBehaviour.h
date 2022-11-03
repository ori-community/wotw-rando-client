#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::FaceTargetBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, (app::FaceTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (app::FaceTargetBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x012225F0, void, OnInitialize, (app::FaceTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01222690, void, OnExecute, (app::FaceTargetBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x01222740, void, OnUpdateBehaviour, (app::FaceTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (app::FaceTargetBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::FaceTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::FaceTargetBehaviour * this_ptr))
} // namespace app::classes::Moon::FaceTargetBehaviour
