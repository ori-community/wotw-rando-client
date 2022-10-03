#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::Encoding_EncodingCharBuffer {
    IL2CPP_REGISTER_METHOD(0x02454ED0, void, ctor, (app::Encoding_EncodingCharBuffer * this_ptr, app::Encoding* enc, app::DecoderNLS* decoder, uint16_t* char_start, int32_t char_count, uint8_t* byte_start, int32_t byte_count))
    IL2CPP_REGISTER_METHOD(0x02454F80, bool, AddChar_1, (app::Encoding_EncodingCharBuffer * this_ptr, uint16_t ch, int32_t num_bytes))
    IL2CPP_REGISTER_METHOD(0x02454FF0, bool, AddChar_2, (app::Encoding_EncodingCharBuffer * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x02455060, void, AdjustBytes, (app::Encoding_EncodingCharBuffer * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02455070, bool, get_MoreData, (app::Encoding_EncodingCharBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02455080, uint8_t, GetNextByte, (app::Encoding_EncodingCharBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024550A0, int32_t, get_BytesUsed, (app::Encoding_EncodingCharBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024550B0, bool, Fallback_1, (app::Encoding_EncodingCharBuffer * this_ptr, uint8_t fallback_byte))
    IL2CPP_REGISTER_METHOD(0x02455270, bool, Fallback_2, (app::Encoding_EncodingCharBuffer * this_ptr, app::Byte__Array* byte_buffer))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Count, (app::Encoding_EncodingCharBuffer * this_ptr))
} // namespace app::classes::System::Text::Encoding_EncodingCharBuffer
