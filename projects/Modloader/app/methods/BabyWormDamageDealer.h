#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BabyWormDamageDealer.h>

namespace app::classes::BabyWormDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_BypassPlayerInvincibility, (app::BabyWormDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FE20, void, SetBypassPlayerInvincibility, (app::BabyWormDamageDealer * this_ptr, bool bypass))
    IL2CPP_REGISTER_METHOD(0x00F7FE30, void, ctor, (app::BabyWormDamageDealer * this_ptr))
} // namespace app::classes::BabyWormDamageDealer
