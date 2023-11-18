#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafeFindHandle.h>

namespace app::classes::Microsoft::Win32::SafeHandles::SafeFindHandle {
    IL2CPP_REGISTER_METHOD(0x02172280, void, ctor, (app::SafeFindHandle * this_ptr, void* preexisting_handle))
    IL2CPP_REGISTER_METHOD(0x023B6490, bool, ReleaseHandle, (app::SafeFindHandle * this_ptr))
} // namespace app::classes::Microsoft::Win32::SafeHandles::SafeFindHandle
