#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugGuardBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::HornBugGuardBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_Target, app::HornBugGuardBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_Target, app::HornBugGuardBehaviour* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00B6B280, void, OnExecute, app::HornBugGuardBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x00B6B560, void, OnUpdateBehaviour, app::HornBugGuardBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::HornBugGuardBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00996540, bool, _OnUpdateBehaviour_b__10_0, app::HornBugGuardBehaviour* this_ptr)
} // namespace app::classes::HornBugGuardBehaviour
