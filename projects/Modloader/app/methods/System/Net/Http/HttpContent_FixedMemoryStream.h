#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpContent_FixedMemoryStream.h>

namespace app::classes::System::Net::Http::HttpContent_FixedMemoryStream {
    IL2CPP_REGISTER_METHOD(0x02D1B5E0, void, CheckOverflow, app::HttpContent_FixedMemoryStream* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02D1B6E0, void, WriteByte, app::HttpContent_FixedMemoryStream* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x02D1B7E0, void, Write, app::HttpContent_FixedMemoryStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
} // namespace app::classes::System::Net::Http::HttpContent_FixedMemoryStream
