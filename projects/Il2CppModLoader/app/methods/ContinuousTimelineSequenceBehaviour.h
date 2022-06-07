#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ContinuousTimelineSequenceBehaviour {
    IL2CPP_REGISTER_METHOD(0x011E7B90, void, OnExecute, (app::ContinuousTimelineSequenceBehaviour * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x011E7BD0, void, OnEndBehaviour, (app::ContinuousTimelineSequenceBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::ContinuousTimelineSequenceBehaviour * this_ptr))
}
