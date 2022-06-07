#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeakDetector {
    IL2CPP_REGISTER_METHOD(0x015C2C60, void, Start, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C2DE0, app::String *, GetTexturePath, (app::String * texture_name))
    IL2CPP_REGISTER_METHOD(0x015C2F80, void, ctor, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
