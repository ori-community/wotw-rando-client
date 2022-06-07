#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OneShotTimelineSequenceBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614BE0, void, OnExecute, (app::OneShotTimelineSequenceBehaviour * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x005B7700, void, FinishedNew, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D650, OneShotTimelineSequenceBehaviour_FinishedNew__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B7700, void, Finished, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047008A8, OneShotTimelineSequenceBehaviour_Finished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614F30, void, OnEndBehaviour, (app::OneShotTimelineSequenceBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, GetShouldPauseTree, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615270, bool, GetShouldPauseLocomotion, (app::OneShotTimelineSequenceBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::OneShotTimelineSequenceBehaviour * this_ptr))
}
