#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocomotionFallingBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC50C0, void, OnInitialize, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC5160, void, OnExecute_1, (app::LocomotionFallingBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00FC5360, void, OnUpdateBehaviour, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (app::LocomotionFallingBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::BehaviourStatus__Enum, get_Status, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C9740, void, set_Status, (app::LocomotionFallingBehaviour * this_ptr, app::BehaviourStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00FC5390, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnStatus, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC53A0, void, set_ForceReturnStatus, (app::LocomotionFallingBehaviour * this_ptr, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value))
    IL2CPP_REGISTER_METHOD(0x00FC53B0, app::BehaviourStatus__Enum, OnExecute_2, (app::LocomotionFallingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474CB08, LocomotionFallingBehaviour_OnExecute_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FC5400, void, OnInitialise, (app::LocomotionFallingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04714788, LocomotionFallingBehaviour_OnInitialise__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FC5450, void, OnEnter, (app::LocomotionFallingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04764728, LocomotionFallingBehaviour_OnEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FC54A0, void, OnExit, (app::LocomotionFallingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047324A0, LocomotionFallingBehaviour_OnExit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FC54F0, void, OnReset, (app::LocomotionFallingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04791FF0, LocomotionFallingBehaviour_OnReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC5540, bool, _OnExecute_b__5_0, (app::LocomotionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735CE0, LocomotionFallingBehaviour__OnExecute_b__5_0__MethodInfo)
} // namespace app::classes::LocomotionFallingBehaviour
