#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::ProfilerExt {
    IL2CPP_REGISTER_METHOD(0x00EB1100, bool, get_deepProfiling, ())
    IL2CPP_REGISTER_METHOD(0x00EB1500, void, cctor, ())
} // namespace app::classes::Moon::Rendering::ProfilerExt
