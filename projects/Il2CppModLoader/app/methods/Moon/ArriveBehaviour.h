#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArriveBehaviour {
    IL2CPP_REGISTER_METHOD(0x0133CA10, void, OnExecute, (app::ArriveBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x0133CD30, void, EndArriveBehaviour, (app::ArriveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B5A0, ArriveBehaviour_EndArriveBehaviour__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (app::ArriveBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::ArriveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996540, bool, ContinuePlaying, (app::ArriveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C0A0, ArriveBehaviour_ContinuePlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0133CEE0, void, ctor, (app::ArriveBehaviour * this_ptr))
} // namespace app::classes::Moon::ArriveBehaviour
