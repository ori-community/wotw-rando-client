#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Number_NumberBuffer__Boxed.h>

namespace app::classes::System::Number_NumberBuffer {
    IL2CPP_REGISTER_METHOD(0x001E1140, void, ctor, app::Number_NumberBuffer__Boxed* this_ptr, uint8_t* stack_buffer)
    IL2CPP_REGISTER_METHOD(0x001E1160, uint8_t*, PackForNative, app::Number_NumberBuffer__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022736B0, void, cctor, )
} // namespace app::classes::System::Number_NumberBuffer
