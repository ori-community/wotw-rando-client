#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/OneShotTimelineSequenceBehaviour.h>

namespace app::classes::OneShotTimelineSequenceBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614BE0, void, OnExecute, app::OneShotTimelineSequenceBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x005B7700, void, FinishedNew, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B7700, void, Finished, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614F30, void, OnEndBehaviour, app::OneShotTimelineSequenceBehaviour* this_ptr, app::EntityBehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, GetShouldPauseTree, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615270, bool, GetShouldPauseLocomotion, app::OneShotTimelineSequenceBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::OneShotTimelineSequenceBehaviour* this_ptr)
} // namespace app::classes::OneShotTimelineSequenceBehaviour
