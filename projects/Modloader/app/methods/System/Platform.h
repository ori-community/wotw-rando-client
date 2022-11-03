#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Platform {
    IL2CPP_REGISTER_METHOD(0x021BB900, int32_t, uname, (void* buf))
    IL2CPP_REGISTER_METHOD(0x021BB9A0, void, CheckOS, ())
    IL2CPP_REGISTER_METHOD(0x021BBC90, bool, get_IsMacOS, ())
} // namespace app::classes::System::Platform
