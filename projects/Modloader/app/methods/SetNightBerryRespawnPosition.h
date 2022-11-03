#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetNightBerryRespawnPosition {
    IL2CPP_REGISTER_METHOD(0x005A2F50, void, Perform, (app::SetNightBerryRespawnPosition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetNightBerryRespawnPosition * this_ptr))
} // namespace app::classes::SetNightBerryRespawnPosition
