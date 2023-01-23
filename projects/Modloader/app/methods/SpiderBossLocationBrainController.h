#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/SpiderBossLocationBrainController.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::SpiderBossLocationBrainController {
    IL2CPP_REGISTER_METHOD(0x011B24C0, app::Enum__Array*, GetEntries, (app::SpiderBossLocationBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B2550, app::Enum, Evaluate, (app::SpiderBossLocationBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::SpiderBossLocationBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiderBossLocationBrainController * this_ptr))
} // namespace app::classes::SpiderBossLocationBrainController
