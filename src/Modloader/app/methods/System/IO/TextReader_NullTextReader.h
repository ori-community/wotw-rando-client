#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader_NullTextReader.h>

namespace app::classes::System::IO::TextReader_NullTextReader {
    IL2CPP_REGISTER_METHOD(0x02385CC0, void, ctor, app::TextReader_NullTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Read, app::TextReader_NullTextReader* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, ReadLine, app::TextReader_NullTextReader* this_ptr)
} // namespace app::classes::System::IO::TextReader_NullTextReader
