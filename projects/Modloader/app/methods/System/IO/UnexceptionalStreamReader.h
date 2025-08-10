#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnexceptionalStreamReader.h>

namespace app::classes::System::IO::UnexceptionalStreamReader {
    IL2CPP_REGISTER_METHOD(0x02388770, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02388850, void, ctor, app::UnexceptionalStreamReader* this_ptr, app::Stream* stream, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x02388910, int32_t, Peek, app::UnexceptionalStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023889B0, int32_t, Read_1, app::UnexceptionalStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02388A50, int32_t, Read_2, app::UnexceptionalStreamReader* this_ptr, app::Char__Array* dest_buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02388CB0, bool, CheckEOL, app::UnexceptionalStreamReader* this_ptr, char16_t current)
    IL2CPP_REGISTER_METHOD(0x02388F50, app::String*, ReadLine, app::UnexceptionalStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02388FF0, app::String*, ReadToEnd, app::UnexceptionalStreamReader* this_ptr)
} // namespace app::classes::System::IO::UnexceptionalStreamReader
