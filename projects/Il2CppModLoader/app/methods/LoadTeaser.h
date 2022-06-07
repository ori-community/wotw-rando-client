#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadTeaser {
    IL2CPP_REGISTER_METHOD(0x00FB4CC0, void, Awake, (app::LoadTeaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB5210, void, Update, (app::LoadTeaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB5650, void, ctor, (app::LoadTeaser * this_ptr))
}
