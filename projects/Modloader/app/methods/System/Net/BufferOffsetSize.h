#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BufferOffsetSize_1.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Net::BufferOffsetSize {
    IL2CPP_REGISTER_METHOD(0x020155B0, void, ctor_1, (app::BufferOffsetSize_1 * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, bool copy_buffer))
    IL2CPP_REGISTER_METHOD(0x020156A0, void, ctor_2, (app::BufferOffsetSize_1 * this_ptr, app::Byte__Array* buffer, bool copy_buffer))
} // namespace app::classes::System::Net::BufferOffsetSize
