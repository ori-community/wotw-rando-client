#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LocomotionIdleEntryBehaviour.h>

namespace app::classes::LocomotionIdleEntryBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FC77B0, void, OnInitializeTask, app::LocomotionIdleEntryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FC78A0, void, OnEnterTask, app::LocomotionIdleEntryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::LocomotionIdleEntryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FC79B0, void, OnExitTask, app::LocomotionIdleEntryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, app::LocomotionIdleEntryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::LocomotionIdleEntryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::LocomotionIdleEntryBehaviour* this_ptr)
} // namespace app::classes::LocomotionIdleEntryBehaviour
