#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Encoding_DefaultDecoder.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Text::Encoding_DefaultDecoder {
    IL2CPP_REGISTER_METHOD(0x02453EF0, void, ctor_1, app::Encoding_DefaultDecoder* this_ptr, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x02453F00, void, ctor_2, app::Encoding_DefaultDecoder* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x02454120, app::Object*, GetRealObject, app::Encoding_DefaultDecoder* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x02454180,
        void,
        ISerializable_GetObjectData,
        app::Encoding_DefaultDecoder* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount_1, app::Encoding_DefaultDecoder* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02454250,
        int32_t,
        GetCharCount_2,
        app::Encoding_DefaultDecoder* this_ptr,
        app::Byte__Array* bytes,
        int32_t index,
        int32_t count,
        bool flush
    )
    IL2CPP_REGISTER_METHOD(0x02454280, int32_t, GetCharCount_3, app::Encoding_DefaultDecoder* this_ptr, uint8_t* bytes, int32_t count, bool flush)
    IL2CPP_REGISTER_METHOD(
        0x0244A840,
        int32_t,
        GetChars_1,
        app::Encoding_DefaultDecoder* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index
    )
    IL2CPP_REGISTER_METHOD(
        0x024542B0,
        int32_t,
        GetChars_2,
        app::Encoding_DefaultDecoder* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index,
        bool flush
    )
    IL2CPP_REGISTER_METHOD(
        0x024542E0,
        int32_t,
        GetChars_3,
        app::Encoding_DefaultDecoder* this_ptr,
        uint8_t* bytes,
        int32_t byte_count,
        char16_t* chars,
        int32_t char_count,
        bool flush
    )
} // namespace app::classes::System::Text::Encoding_DefaultDecoder
