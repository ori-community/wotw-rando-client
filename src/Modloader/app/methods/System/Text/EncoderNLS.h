#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Text::EncoderNLS {
    IL2CPP_REGISTER_METHOD(0x0244D970, void, ctor_1, app::EncoderNLS* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x0244DA70,
        void,
        ISerializable_GetObjectData,
        app::EncoderNLS* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x0244DBE0, void, ctor_2, app::EncoderNLS* this_ptr, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x0244DC10, void, ctor_3, app::EncoderNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244DC30, void, Reset, app::EncoderNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244DC60, int32_t, GetByteCount_1, app::EncoderNLS* this_ptr, app::Char__Array* chars, int32_t index, int32_t count, bool flush)
    IL2CPP_REGISTER_METHOD(0x0244DE50, int32_t, GetByteCount_2, app::EncoderNLS* this_ptr, char16_t* chars, int32_t count, bool flush)
    IL2CPP_REGISTER_METHOD(
        0x0244DFC0,
        int32_t,
        GetBytes_1,
        app::EncoderNLS* this_ptr,
        app::Char__Array* chars,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index,
        bool flush
    )
    IL2CPP_REGISTER_METHOD(
        0x0244E280,
        int32_t,
        GetBytes_2,
        app::EncoderNLS* this_ptr,
        char16_t* chars,
        int32_t char_count,
        uint8_t* bytes,
        int32_t byte_count,
        bool flush
    )
    IL2CPP_REGISTER_METHOD(
        0x0244E420,
        void,
        Convert_1,
        app::EncoderNLS* this_ptr,
        app::Char__Array* chars,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        bool flush,
        int32_t* chars_used,
        int32_t* bytes_used,
        bool* completed
    )
    IL2CPP_REGISTER_METHOD(
        0x0244E770,
        void,
        Convert_2,
        app::EncoderNLS* this_ptr,
        char16_t* chars,
        int32_t char_count,
        uint8_t* bytes,
        int32_t byte_count,
        bool flush,
        int32_t* chars_used,
        int32_t* bytes_used,
        bool* completed
    )
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Encoding*, get_Encoding, app::EncoderNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_MustFlush, app::EncoderNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244E980, bool, get_HasState, app::EncoderNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0089F980, void, ClearMustFlush, app::EncoderNLS* this_ptr)
} // namespace app::classes::System::Text::EncoderNLS
