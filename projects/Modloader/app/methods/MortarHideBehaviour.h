#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MortarHideBehaviour.h>

namespace app::classes::MortarHideBehaviour {
    IL2CPP_REGISTER_METHOD(0x0147D140, void, OnEnter, app::MortarHideBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0147D320, app::BehaviourStatus__Enum, OnExecute, app::MortarHideBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0147D3E0, void, OnExit, app::MortarHideBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0147D440, void, ctor, app::MortarHideBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0147D4D0, void, _OnEnter_b__3_0, app::MortarHideBehaviour* this_ptr)
} // namespace app::classes::MortarHideBehaviour
