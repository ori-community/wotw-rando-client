#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafePipeHandle {
    IL2CPP_REGISTER_METHOD(0x01F87F00, bool, ReleaseHandle, (app::SafePipeHandle * this_ptr))
}
