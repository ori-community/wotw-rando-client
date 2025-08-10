#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/InstantStopBehaviour.h>

namespace app::classes::Moon::InstantStopBehaviour {
    IL2CPP_REGISTER_METHOD(0x01102CC0, app::BehaviourStatus__Enum, OnExecute, app::InstantStopBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::InstantStopBehaviour* this_ptr)
} // namespace app::classes::Moon::InstantStopBehaviour
