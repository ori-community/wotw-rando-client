#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::OutputWindow {
    IL2CPP_REGISTER_METHOD(0x02B7D5A0, void, Write, (app::OutputWindow * this_ptr, uint8_t b))
    IL2CPP_REGISTER_METHOD(0x02B7D5F0, void, WriteLengthDistance, (app::OutputWindow * this_ptr, int32_t length, int32_t distance))
    IL2CPP_REGISTER_METHOD(0x02B7D790, int32_t, CopyFrom, (app::OutputWindow * this_ptr, app::InputBuffer * input, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02B7D8F0, int32_t, get_FreeBytes, (app::OutputWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_AvailableBytes, (app::OutputWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D900, int32_t, CopyTo, (app::OutputWindow * this_ptr, app::Byte__Array * output, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02B7D9C0, void, ctor, (app::OutputWindow * this_ptr))
}
