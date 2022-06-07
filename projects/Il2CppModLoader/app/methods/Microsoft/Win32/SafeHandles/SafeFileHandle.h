#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeFileHandle {
    IL2CPP_REGISTER_METHOD(0x021722B0, void, ctor, (app::SafeFileHandle * this_ptr, void * preexisting_handle, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x023B63D0, bool, ReleaseHandle, (app::SafeFileHandle * this_ptr))
}
