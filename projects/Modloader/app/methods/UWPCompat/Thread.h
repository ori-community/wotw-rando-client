#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UWPCompat::Thread {
    IL2CPP_REGISTER_METHOD(0x013DDC00, void, Sleep, (int32_t time))
}
