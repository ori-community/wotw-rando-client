#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafePipeHandle.h>

namespace app::classes::Microsoft::Win32::SafeHandles::SafePipeHandle {
    IL2CPP_REGISTER_METHOD(0x01F87F00, bool, ReleaseHandle, app::SafePipeHandle* this_ptr)
}
