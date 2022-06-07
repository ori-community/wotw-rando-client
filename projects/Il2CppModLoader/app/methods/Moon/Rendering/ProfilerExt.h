#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::ProfilerExt {
    IL2CPP_REGISTER_METHOD(0x00EB1100, bool, get_deepProfiling, ())
    IL2CPP_REGISTER_METHOD(0x00EB1500, void, cctor, ())
}
