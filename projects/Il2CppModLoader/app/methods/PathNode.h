#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PathNode {
    IL2CPP_REGISTER_METHOD(0x004485B0, bool, get_TangentsAreLinked, (app::PathNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PathNode * this_ptr))
}
