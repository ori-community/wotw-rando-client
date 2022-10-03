#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CreditsController {
    IL2CPP_REGISTER_METHOD(0x00DB76B0, void, Awake, (app::CreditsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB7740, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00DB77C0, bool, IsCreditsTimelinePlaying, (app::CreditsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB7890, void, SkipCredits, (app::CreditsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CreditsController * this_ptr))
} // namespace app::classes::CreditsController
