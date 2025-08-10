#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/HorizontalKickbackTimelineBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::HorizontalKickbackTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_PlayingAirAnimation, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkipAnimation, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F9B0, bool, get_IsInReaction, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::HorizontalKickbackTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B5F9C0, void, OnInitializeTask, app::HorizontalKickbackTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B5FAF0, void, OnEnterTask, app::HorizontalKickbackTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B5FDE0, app::MoonTimeline*, GetProperAnimation, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnAnimationFinished, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B601A0, void, OnExitTask, app::HorizontalKickbackTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_1, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_2, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_3, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_4, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_5, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_6, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_7, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_8, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_9, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_10, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_11, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_12, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_13, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_14, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_15, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_16, app::HorizontalKickbackTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IMoonTypeResolver*, GetResolverForType_17, app::HorizontalKickbackTimelineBehaviour* this_ptr)
} // namespace app::classes::HorizontalKickbackTimelineBehaviour
