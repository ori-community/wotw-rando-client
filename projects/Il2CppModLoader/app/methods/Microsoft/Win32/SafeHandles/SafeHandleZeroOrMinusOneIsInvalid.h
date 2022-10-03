#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    IL2CPP_REGISTER_METHOD(0x023B6530, void, ctor, (app::SafeHandleZeroOrMinusOneIsInvalid * this_ptr, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x023B65C0, bool, get_IsInvalid, (app::SafeHandleZeroOrMinusOneIsInvalid * this_ptr))
} // namespace app::classes::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
