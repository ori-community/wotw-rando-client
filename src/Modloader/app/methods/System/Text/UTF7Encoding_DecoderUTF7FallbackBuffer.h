#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UTF7Encoding_DecoderUTF7Fallback.h>
#include <Modloader/app/structs/UTF7Encoding_DecoderUTF7FallbackBuffer.h>

namespace app::classes::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x027CDE00, void, ctor, app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr, app::UTF7Encoding_DecoderUTF7Fallback* fallback)
    IL2CPP_REGISTER_METHOD(0x027CDE10, bool, Fallback, app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr, app::Byte__Array* bytes_unknown, int32_t index)
    IL2CPP_REGISTER_METHOD(0x027CDE60, char16_t, GetNextChar, app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02458690, int32_t, get_Remaining, app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024586A0, void, Reset, app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027CDE80,
        int32_t,
        InternalFallback,
        app::UTF7Encoding_DecoderUTF7FallbackBuffer* this_ptr,
        app::Byte__Array* bytes,
        uint8_t* p_bytes
    )
} // namespace app::classes::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer
