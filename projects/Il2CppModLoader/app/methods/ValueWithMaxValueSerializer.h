#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ValueWithMaxValueSerializer {
    IL2CPP_REGISTER_METHOD(0x013B93D0, void, Serialize, (app::ValueWithMaxValueSerializer * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ValueWithMaxValueSerializer * this_ptr))
}
