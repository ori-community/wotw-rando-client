#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarWindupBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::MortarWindupBehaviour {
    IL2CPP_REGISTER_METHOD(0x0147F890, void, OnEnter, (app::MortarWindupBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0147FA50, app::BehaviourStatus__Enum, OnExecute, (app::MortarWindupBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0147FAA0, void, OnExit, (app::MortarWindupBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MortarWindupBehaviour * this_ptr))
} // namespace app::classes::MortarWindupBehaviour
