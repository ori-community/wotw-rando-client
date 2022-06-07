#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Number_NumberBuffer {
    IL2CPP_REGISTER_METHOD(0x001E1140, void, ctor, (app::Number_NumberBuffer__Boxed * this_ptr, uint8_t * stack_buffer))
    IL2CPP_REGISTER_METHOD(0x001E1160, uint8_t *, PackForNative, (app::Number_NumberBuffer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022736B0, void, cctor, ())
}
