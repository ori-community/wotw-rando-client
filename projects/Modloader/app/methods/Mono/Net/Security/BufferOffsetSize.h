#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BufferOffsetSize.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Net::Security::BufferOffsetSize {
    IL2CPP_REGISTER_METHOD(0x0217C670, int32_t, get_EndOffset, app::BufferOffsetSize* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0217C680, int32_t, get_Remaining, app::BufferOffsetSize* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0217C6B0, void, ctor, app::BufferOffsetSize* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x0217C810, app::String*, ToString, app::BufferOffsetSize* this_ptr)
} // namespace app::classes::Mono::Net::Security::BufferOffsetSize
