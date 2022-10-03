#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GoThroughPlatform {
    IL2CPP_REGISTER_METHOD(0x007FBA30, int32_t, get_Length, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBA50, void, OnValidate, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBA60, void, Awake, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBC10, void, OnEnable, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBD60, void, OnDisable, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBEC0, void, CacheComponents, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GoThroughPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC0F0, void, cctor, ())
} // namespace app::classes::GoThroughPlatform
