#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Net::Security::BufferOffsetSize2 {
    IL2CPP_REGISTER_METHOD(0x0217C920, void, ctor, (app::BufferOffsetSize2 * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0217C9D0, void, Reset, (app::BufferOffsetSize2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0217CA70, void, MakeRoom, (app::BufferOffsetSize2 * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0217CB80, void, AppendData, (app::BufferOffsetSize2 * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
} // namespace app::classes::Mono::Net::Security::BufferOffsetSize2
