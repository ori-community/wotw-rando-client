#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HornBugPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00B6D360, void, Spawn, (app::HornBugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsUsingVariations, (app::HornBugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6D490, void, ctor, (app::HornBugPlaceholder * this_ptr))
}
