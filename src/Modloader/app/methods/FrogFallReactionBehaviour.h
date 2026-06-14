#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FrogFallReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FrogFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x01647CE0, void, OnInitializeTask, app::FrogFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01647DB0, void, OnEnterTask, app::FrogFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01647F20, app::BehaviourStatus__Enum, OnExecuteTask, app::FrogFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C0C910, void, OnExitTask, app::FrogFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::FrogFallReactionBehaviour* this_ptr)
} // namespace app::classes::FrogFallReactionBehaviour
