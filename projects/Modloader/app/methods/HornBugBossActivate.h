#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugBossActivate.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HornBugBossActivate {
    IL2CPP_REGISTER_METHOD(0x00B60690, void, Perform, (app::HornBugBossActivate * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::HornBugBossActivate * this_ptr))
} // namespace app::classes::HornBugBossActivate
