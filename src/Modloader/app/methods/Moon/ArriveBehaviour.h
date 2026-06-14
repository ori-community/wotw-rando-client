#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArriveBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>

namespace app::classes::Moon::ArriveBehaviour {
    IL2CPP_REGISTER_METHOD(0x0133CA10, void, OnExecute, app::ArriveBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x0133CD30, void, EndArriveBehaviour, app::ArriveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, app::ArriveBehaviour* this_ptr, app::EntityBehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, app::ArriveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00996540, bool, ContinuePlaying, app::ArriveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133CEE0, void, ctor, app::ArriveBehaviour* this_ptr)
} // namespace app::classes::Moon::ArriveBehaviour
