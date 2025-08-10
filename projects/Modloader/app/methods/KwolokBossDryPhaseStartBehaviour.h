#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KwolokBossDryPhaseStartBehaviour.h>

namespace app::classes::KwolokBossDryPhaseStartBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D6580, void, OnEnter, app::KwolokBossDryPhaseStartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012D6A10, app::BehaviourStatus__Enum, OnExecute, app::KwolokBossDryPhaseStartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012D6AB0, void, OnExit, app::KwolokBossDryPhaseStartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012D6DA0, void, RequestGoToCenter, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D6EE0, void, ClearMoveRequest, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D6F40, void, ModifyBodyHeight, app::KwolokBossDryPhaseStartBehaviour* this_ptr, float* height)
    IL2CPP_REGISTER_METHOD(0x012D6F50, void, ModifyLookAngle, app::KwolokBossDryPhaseStartBehaviour* this_ptr, float* angle)
    IL2CPP_REGISTER_METHOD(0x012D6F70, void, ctor, app::KwolokBossDryPhaseStartBehaviour* this_ptr)
} // namespace app::classes::KwolokBossDryPhaseStartBehaviour
