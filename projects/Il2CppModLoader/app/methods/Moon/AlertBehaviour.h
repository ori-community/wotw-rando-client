#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AlertBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, (app::AlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (app::AlertBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01337C80, void, OnInitialize, (app::AlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01337E50, void, OnExecute, (app::AlertBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::AlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01338010, void, OnEndBehaviour, (app::AlertBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::AlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996540, bool, ContinuePlaying, (app::AlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::AlertBehaviour * this_ptr))
} // namespace app::classes::Moon::AlertBehaviour
