#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Net::Security::BufferOffsetSize {
    IL2CPP_REGISTER_METHOD(0x0217C670, int32_t, get_EndOffset, (app::BufferOffsetSize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0217C680, int32_t, get_Remaining, (app::BufferOffsetSize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0217C6B0, void, ctor, (app::BufferOffsetSize * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x04731168, BufferOffsetSize__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0217C810, app::String *, ToString, (app::BufferOffsetSize * this_ptr))
}
