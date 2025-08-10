#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CStreamReader.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::CStreamReader {
    IL2CPP_REGISTER_METHOD(0x01E00E50, void, ctor, app::CStreamReader* this_ptr, app::Stream* stream, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x01E00F90, int32_t, Peek, app::CStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E01030, int32_t, Read_1, app::CStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E01170, int32_t, Read_2, app::CStreamReader* this_ptr, app::Char__Array* dest, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E01340, app::String*, ReadLine, app::CStreamReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E013F0, app::String*, ReadToEnd, app::CStreamReader* this_ptr)
} // namespace app::classes::System::IO::CStreamReader
