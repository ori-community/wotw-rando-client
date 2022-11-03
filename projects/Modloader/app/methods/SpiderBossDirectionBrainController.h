#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossDirectionBrainController {
    IL2CPP_REGISTER_METHOD(0x0096C060, app::Enum__Array*, GetEntries, (app::SpiderBossDirectionBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C0F0, app::Enum, Evaluate, (app::SpiderBossDirectionBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::SpiderBossDirectionBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiderBossDirectionBrainController * this_ptr))
} // namespace app::classes::SpiderBossDirectionBrainController
