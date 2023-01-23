#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Encoding_EncodingByteBuffer.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/EncoderNLS.h>

namespace app::classes::System::Text::Encoding_EncodingByteBuffer {
    IL2CPP_REGISTER_METHOD(0x02454840, void, ctor, (app::Encoding_EncodingByteBuffer * this_ptr, app::Encoding* in_encoding, app::EncoderNLS* in_encoder, uint8_t* in_byte_start, int32_t in_byte_count, uint16_t* in_char_start, int32_t in_char_count))
    IL2CPP_REGISTER_METHODINFO(0x0470B930, Encoding_EncodingByteBuffer__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02454B00, bool, AddByte_1, (app::Encoding_EncodingByteBuffer * this_ptr, uint8_t b, int32_t more_bytes_expected))
    IL2CPP_REGISTER_METHOD(0x02454BB0, bool, AddByte_2, (app::Encoding_EncodingByteBuffer * this_ptr, uint8_t b1))
    IL2CPP_REGISTER_METHOD(0x02454BC0, bool, AddByte_3, (app::Encoding_EncodingByteBuffer * this_ptr, uint8_t b1, uint8_t b2))
    IL2CPP_REGISTER_METHOD(0x02454C80, bool, AddByte_4, (app::Encoding_EncodingByteBuffer * this_ptr, uint8_t b1, uint8_t b2, int32_t more_bytes_expected))
    IL2CPP_REGISTER_METHOD(0x02454D60, void, MovePrevious, (app::Encoding_EncodingByteBuffer * this_ptr, bool b_throw))
    IL2CPP_REGISTER_METHOD(0x02454DF0, bool, get_MoreData, (app::Encoding_EncodingByteBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02454E40, uint16_t, GetNextChar, (app::Encoding_EncodingByteBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02454EB0, int32_t, get_CharsUsed, (app::Encoding_EncodingByteBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Count, (app::Encoding_EncodingByteBuffer * this_ptr))
} // namespace app::classes::System::Text::Encoding_EncodingByteBuffer
