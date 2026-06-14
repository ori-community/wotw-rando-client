#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/GZipDecoder.h>
#include <Modloader/app/structs/InputBuffer.h>

namespace app::classes::Unity::IO::Compression::GZipDecoder {
    IL2CPP_REGISTER_METHOD(0x02B781E0, void, ctor, app::GZipDecoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B781E0, void, Reset, app::GZipDecoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B78200, bool, ReadHeader, app::GZipDecoder* this_ptr, app::InputBuffer* input)
    IL2CPP_REGISTER_METHOD(0x02B78700, bool, ReadFooter, app::GZipDecoder* this_ptr, app::InputBuffer* input)
    IL2CPP_REGISTER_METHOD(0x02B78820, void, UpdateWithBytesRead, app::GZipDecoder* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t copied)
    IL2CPP_REGISTER_METHOD(0x02B78930, void, Validate, app::GZipDecoder* this_ptr)
} // namespace app::classes::Unity::IO::Compression::GZipDecoder
