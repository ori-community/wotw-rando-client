#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpawnEntityAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SpawnEntityAction {
    IL2CPP_REGISTER_METHOD(0x00EF4FB0, void, Awake, (app::SpawnEntityAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF5080, void, Perform, (app::SpawnEntityAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EF5150, app::String*, get_TargetName, (app::SpawnEntityAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF5230, app::String*, GetNiceName, (app::SpawnEntityAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpawnEntityAction * this_ptr))
} // namespace app::classes::SpawnEntityAction
