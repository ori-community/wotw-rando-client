#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TailStream.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>

namespace app::classes::System::Security::Cryptography::TailStream {
    IL2CPP_REGISTER_METHOD(0x01E112F0, void, ctor, (app::TailStream * this_ptr, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x01E113B0, void, Clear, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E113D0, void, Dispose, (app::TailStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E11470, app::Byte__Array*, get_Buffer, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_CanWrite, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E115B0, int64_t, get_Length, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11620, int64_t, get_Position, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11690, void, set_Position, (app::TailStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11700, int64_t, Seek, (app::TailStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01E11770, void, SetLength, (app::TailStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01E117E0, int32_t, Read, (app::TailStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E11850, void, Write, (app::TailStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
} // namespace app::classes::System::Security::Cryptography::TailStream
