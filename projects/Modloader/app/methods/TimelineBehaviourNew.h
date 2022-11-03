#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimelineBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x010F4B70, app::BehaviourStatus__Enum, get_StatusWhenPlaying, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F4B80, bool, ShouldPauseLocomotion, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F4BA0, void, MoonCleanup, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F4BB0, void, OnBehaviourTreeInitialize, (app::TimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010F4F30, void, AllowCancel, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787AF8, TimelineBehaviourNew_AllowCancel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F4F40, void, DisallowCancel, (app::TimelineBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759DA8, TimelineBehaviourNew_DisallowCancel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F4F50, void, OnEnter, (app::TimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010F50B0, app::BehaviourStatus__Enum, OnExecute, (app::TimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010F51D0, void, OnExit, (app::TimelineBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, (app::TimelineBehaviourNew * this_ptr))
} // namespace app::classes::TimelineBehaviourNew
