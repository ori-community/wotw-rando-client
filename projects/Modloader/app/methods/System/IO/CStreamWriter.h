#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CStreamWriter.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::CStreamWriter {
    IL2CPP_REGISTER_METHOD(0x01E014A0, void, ctor, (app::CStreamWriter * this_ptr, app::Stream* stream, app::Encoding* encoding, bool leave_open))
    IL2CPP_REGISTER_METHOD(0x01E01600, void, Write_1, (app::CStreamWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E018F0, void, Write_2, (app::CStreamWriter * this_ptr, char16_t val))
    IL2CPP_REGISTER_METHOD(0x01E01AE0, void, InternalWriteString, (app::CStreamWriter * this_ptr, app::String* val))
    IL2CPP_REGISTER_METHOD(0x01E01B80, void, InternalWriteChar, (app::CStreamWriter * this_ptr, char16_t val))
    IL2CPP_REGISTER_METHOD(0x01E01C20, void, InternalWriteChars, (app::CStreamWriter * this_ptr, app::Char__Array* buffer, int32_t n))
    IL2CPP_REGISTER_METHOD(0x01E01CE0, void, Write_3, (app::CStreamWriter * this_ptr, app::Char__Array* val))
    IL2CPP_REGISTER_METHOD(0x01E01D20, void, Write_4, (app::CStreamWriter * this_ptr, app::String* val))
} // namespace app::classes::System::IO::CStreamWriter
