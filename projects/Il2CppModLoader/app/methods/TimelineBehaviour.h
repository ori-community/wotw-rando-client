#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::LegacyTimelineSequence *, get_TimelineSequence, (app::TimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_TimelineSequence, (app::TimelineBehaviour * this_ptr, app::LegacyTimelineSequence * value))
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_AnimationSpeed, (app::TimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_AnimationSpeed, (app::TimelineBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010F4940, void, OnExecute, (app::TimelineBehaviour * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x010F4A60, void, OnUpdateBehaviour, (app::TimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F4B20, void, OnEndBehaviour, (app::TimelineBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, GetShouldPauseTree, (app::TimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::TimelineBehaviour * this_ptr))
}
