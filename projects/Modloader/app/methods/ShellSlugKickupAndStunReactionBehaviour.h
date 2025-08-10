#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShellSlugKickupAndStunReactionBehaviour.h>

namespace app::classes::ShellSlugKickupAndStunReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x005B38C0, bool, get_ShouldSkipUpdate, app::ShellSlugKickupAndStunReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B38D0, void, OnInitializeTask, app::ShellSlugKickupAndStunReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005B3A50, void, OnEnterTask, app::ShellSlugKickupAndStunReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x005B3DD0,
        app::BehaviourStatus__Enum,
        OnExecuteTask,
        app::ShellSlugKickupAndStunReactionBehaviour* this_ptr,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(0x005B3E30, void, OnExitTask, app::ShellSlugKickupAndStunReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::ShellSlugKickupAndStunReactionBehaviour* this_ptr)
} // namespace app::classes::ShellSlugKickupAndStunReactionBehaviour
