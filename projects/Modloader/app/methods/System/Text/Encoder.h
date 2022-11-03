#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::Encoder {
    IL2CPP_REGISTER_METHOD(0x0244B830, void, SerializeEncoder, (app::Encoder * this_ptr, app::SerializationInfo* info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::EncoderFallback*, get_Fallback, (app::Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B8D0, app::EncoderFallbackBuffer*, get_FallbackBuffer, (app::Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_InternalHasFallbackBuffer, (app::Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B940, void, Reset, (app::Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244BA50, int32_t, GetByteCount, (app::Encoder * this_ptr, uint16_t* chars, int32_t count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x0472B368, Encoder_GetByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244BC00, int32_t, GetBytes, (app::Encoder * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x04738EE8, Encoder_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244BE70, void, Convert_1, (app::Encoder * this_ptr, app::Char__Array* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, bool flush, int32_t* chars_used, int32_t* bytes_used, bool* completed))
    IL2CPP_REGISTER_METHODINFO(0x04795328, Encoder_Convert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244C200, void, Convert_2, (app::Encoder * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, bool flush, int32_t* chars_used, int32_t* bytes_used, bool* completed))
    IL2CPP_REGISTER_METHODINFO(0x04717AC8, Encoder_Convert_1__MethodInfo)
} // namespace app::classes::System::Text::Encoder
