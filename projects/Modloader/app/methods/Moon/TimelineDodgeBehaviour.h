#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/TimelineDodgeBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::TimelineDodgeBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecute, (app::TimelineDodgeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::TimelineDodgeBehaviour * this_ptr))
} // namespace app::classes::Moon::TimelineDodgeBehaviour
