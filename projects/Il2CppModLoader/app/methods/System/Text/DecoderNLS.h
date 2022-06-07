#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::DecoderNLS {
    IL2CPP_REGISTER_METHOD(0x0244A220, void, ctor_1, (app::DecoderNLS * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0478D268, DecoderNLS__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244A320, void, ISerializable_GetObjectData, (app::DecoderNLS * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0244A470, void, ctor_2, (app::DecoderNLS * this_ptr, app::Encoding * encoding))
    IL2CPP_REGISTER_METHOD(0x0244A4A0, void, ctor_3, (app::DecoderNLS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244A4C0, void, Reset, (app::DecoderNLS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount_1, (app::DecoderNLS * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0244A4E0, int32_t, GetCharCount_2, (app::DecoderNLS * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x04751670, DecoderNLS_GetCharCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244A6D0, int32_t, GetCharCount_3, (app::DecoderNLS * this_ptr, uint8_t * bytes, int32_t count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x047832B8, DecoderNLS_GetCharCount_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244A840, int32_t, GetChars_1, (app::DecoderNLS * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x0244A880, int32_t, GetChars_2, (app::DecoderNLS * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x04778390, DecoderNLS_GetChars_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244AB40, int32_t, GetChars_3, (app::DecoderNLS * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x0475A0E0, DecoderNLS_GetChars_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244ACE0, void, Convert_1, (app::DecoderNLS * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, int32_t char_count, bool flush, int32_t * bytes_used, int32_t * chars_used, bool * completed))
    IL2CPP_REGISTER_METHODINFO(0x0474A010, DecoderNLS_Convert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244B030, void, Convert_2, (app::DecoderNLS * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, bool flush, int32_t * bytes_used, int32_t * chars_used, bool * completed))
    IL2CPP_REGISTER_METHODINFO(0x047666A0, DecoderNLS_Convert_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_MustFlush, (app::DecoderNLS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasState, (app::DecoderNLS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B240, void, ClearMustFlush, (app::DecoderNLS * this_ptr))
}
