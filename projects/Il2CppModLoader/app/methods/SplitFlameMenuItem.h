#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SplitFlameMenuItem {
    IL2CPP_REGISTER_METHOD(0x009A3220, void, ctor, (app::SplitFlameMenuItem * this_ptr, app::String * str))
    IL2CPP_REGISTER_METHOD(0x009A3310, void, OnSelectedFixedUpdate, (app::SplitFlameMenuItem * this_ptr))
}
