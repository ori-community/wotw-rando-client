#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SplatterSpray {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::SplatterSpray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, PerformTheSpray, (app::SplatterSpray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A21D0, void, ctor, (app::SplatterSpray * this_ptr))
}
