#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ColosseumTower {
    IL2CPP_REGISTER_METHOD(0x011DDB80, void, Upgrade, (app::ColosseumTower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DDE40, void, ApplyStats, (app::ColosseumTower * this_ptr, app::ColosseumTower_SentryStats stats))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ColosseumTower * this_ptr))
}
