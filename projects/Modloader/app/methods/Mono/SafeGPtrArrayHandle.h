#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::SafeGPtrArrayHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::SafeGPtrArrayHandle__Boxed * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x001EA750, void, Dispose, (app::SafeGPtrArrayHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA580, int32_t, get_Length, (app::SafeGPtrArrayHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA5A0, void*, get_Item, (app::SafeGPtrArrayHandle__Boxed * this_ptr, int32_t i))
} // namespace app::classes::Mono::SafeGPtrArrayHandle
