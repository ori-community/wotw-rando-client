#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpawnOrbsAction {
    IL2CPP_REGISTER_METHOD(0x00EF5CA0, void, Perform, (app::SpawnOrbsAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EF5D70, app::String*, get_TargetName, (app::SpawnOrbsAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF5E50, app::String*, GetNiceName, (app::SpawnOrbsAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpawnOrbsAction * this_ptr))
} // namespace app::classes::SpawnOrbsAction
