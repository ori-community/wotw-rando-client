#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundQuickStopBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::GroundQuickStopBehaviour {
    IL2CPP_REGISTER_METHOD(0x01497010, void, OnEntityInitialized, app::GroundQuickStopBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014970B0, app::BehaviourStatus__Enum, OnExecute, app::GroundQuickStopBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01497290, void, ctor, app::GroundQuickStopBehaviour* this_ptr)
} // namespace app::classes::Moon::GroundQuickStopBehaviour
