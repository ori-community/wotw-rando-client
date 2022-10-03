#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Win32::SafeHandles::SafeRegistryHandle {
    IL2CPP_REGISTER_METHOD(0x021722B0, void, ctor, (app::SafeRegistryHandle * this_ptr, void* preexisting_handle, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ReleaseHandle, (app::SafeRegistryHandle * this_ptr))
} // namespace app::classes::Microsoft::Win32::SafeHandles::SafeRegistryHandle
