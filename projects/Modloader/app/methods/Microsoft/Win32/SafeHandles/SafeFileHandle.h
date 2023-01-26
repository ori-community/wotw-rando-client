#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafeFileHandle.h>

namespace app::classes::Microsoft::Win32::SafeHandles::SafeFileHandle {
    IL2CPP_REGISTER_METHOD(0x021722B0, void, ctor, (app::SafeFileHandle * this_ptr, void* preexisting_handle, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x023B63D0, bool, ReleaseHandle, (app::SafeFileHandle * this_ptr))
} // namespace app::classes::Microsoft::Win32::SafeHandles::SafeFileHandle
