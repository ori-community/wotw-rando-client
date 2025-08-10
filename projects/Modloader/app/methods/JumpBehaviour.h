#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/JumpBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::JumpBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, app::JumpBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, app::JumpBehaviour* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_TraversalSpeed, app::JumpBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_TraversalSpeed, app::JumpBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0064D980, void, OnExecute, app::JumpBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x0064DE50, void, OnUpdateBehaviour, app::JumpBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064DEE0, void, OnTransitionInStopped, app::JumpBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064E140, void, ctor, app::JumpBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064E150, bool, _OnTransitionInStopped_b__21_0, app::JumpBehaviour* this_ptr)
} // namespace app::classes::JumpBehaviour
