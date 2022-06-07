#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadTimeMeasurer {
    IL2CPP_REGISTER_METHOD(0x00FB5670, void, Awake, (app::LoadTimeMeasurer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB5780, void, Update, (app::LoadTimeMeasurer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LoadTimeMeasurer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
