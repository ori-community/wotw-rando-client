#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RammingBehaviour_KnockbackState.h>
#include <Modloader/app/structs/RammingBehaviour.h>

namespace app::classes::Moon::RammingBehaviour_KnockbackState {
    IL2CPP_REGISTER_METHOD(0x00C525C0, void, ctor, (app::RammingBehaviour_KnockbackState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00C52B70, void, OnEnter, (app::RammingBehaviour_KnockbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingBehaviour_KnockbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52E00, void, OnExit, (app::RammingBehaviour_KnockbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52E30, void, OnKnockbackEnded, (app::RammingBehaviour_KnockbackState * this_ptr))
} // namespace app::classes::Moon::RammingBehaviour_KnockbackState
