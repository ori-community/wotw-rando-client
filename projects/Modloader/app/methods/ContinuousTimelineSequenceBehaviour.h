#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>

namespace app::classes::ContinuousTimelineSequenceBehaviour {
    IL2CPP_REGISTER_METHOD(0x011E7B90, void, OnExecute, (app::ContinuousTimelineSequenceBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x011E7BD0, void, OnEndBehaviour, (app::ContinuousTimelineSequenceBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::ContinuousTimelineSequenceBehaviour * this_ptr))
} // namespace app::classes::ContinuousTimelineSequenceBehaviour
