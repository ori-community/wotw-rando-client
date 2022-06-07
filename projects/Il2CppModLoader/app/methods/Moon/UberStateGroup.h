#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UberStateGroup {
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String *, get_GroupName, (app::UberStateGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::UberStateGroup * this_ptr))
}
