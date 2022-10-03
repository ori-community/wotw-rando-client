#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocomotionTurningTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, ShouldPauseLocomotion, (app::LocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC9570, bool, get_IsPlaying, (app::LocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC9590, void, OnInitializeTask, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC96B0, bool, CanCancel, (app::LocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC96D0, void, PlayAnimation, (app::LocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC98F0, bool, ShouldEndBehaviour, (app::LocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC9910, void, OnEnterTask, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC9950, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC9BE0, void, OnExitTask, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionModifier, (app::LocomotionTurningTimelineBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00FC9C40, void, ctor, (app::LocomotionTurningTimelineBehaviour * this_ptr))
} // namespace app::classes::LocomotionTurningTimelineBehaviour
