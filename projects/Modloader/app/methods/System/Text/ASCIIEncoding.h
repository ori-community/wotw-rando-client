#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ASCIIEncoding.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Encoder.h>

namespace app::classes::System::Text::ASCIIEncoding {
    IL2CPP_REGISTER_METHOD(0x02445830, void, ctor, (app::ASCIIEncoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024458C0, void, SetDefaultFallbacks, (app::ASCIIEncoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024458F0, int32_t, GetByteCount_1, (app::ASCIIEncoding * this_ptr, app::Char__Array* chars, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047438D0, ASCIIEncoding_GetByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02445AC0, int32_t, GetByteCount_2, (app::ASCIIEncoding * this_ptr, app::String* chars))
    IL2CPP_REGISTER_METHODINFO(0x0476ACF0, ASCIIEncoding_GetByteCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02445BA0, int32_t, GetByteCount_3, (app::ASCIIEncoding * this_ptr, uint16_t* chars, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04781FA8, ASCIIEncoding_GetByteCount_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02445CE0, int32_t, GetBytes_1, (app::ASCIIEncoding * this_ptr, app::String* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHODINFO(0x047376B0, ASCIIEncoding_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02445F70, int32_t, GetBytes_2, (app::ASCIIEncoding * this_ptr, app::Char__Array* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHODINFO(0x04769F38, ASCIIEncoding_GetBytes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446210, int32_t, GetBytes_3, (app::ASCIIEncoding * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x04748BA0, ASCIIEncoding_GetBytes_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446390, int32_t, GetCharCount_1, (app::ASCIIEncoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047528C0, ASCIIEncoding_GetCharCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446560, int32_t, GetCharCount_2, (app::ASCIIEncoding * this_ptr, uint8_t* bytes, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04705098, ASCIIEncoding_GetCharCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024466A0, int32_t, GetChars_1, (app::ASCIIEncoding * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHODINFO(0x04796798, ASCIIEncoding_GetChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446940, int32_t, GetChars_2, (app::ASCIIEncoding * this_ptr, uint8_t* bytes, int32_t byte_count, uint16_t* chars, int32_t char_count))
    IL2CPP_REGISTER_METHODINFO(0x04725170, ASCIIEncoding_GetChars_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446AC0, app::String*, GetString, (app::ASCIIEncoding * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x04758BB0, ASCIIEncoding_GetString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02446C90, int32_t, GetByteCount_4, (app::ASCIIEncoding * this_ptr, uint16_t* chars, int32_t char_count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHODINFO(0x0471B7A8, ASCIIEncoding_GetByteCount_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02447050, int32_t, GetBytes_4, (app::ASCIIEncoding * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHODINFO(0x04711EC8, ASCIIEncoding_GetBytes_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024475F0, int32_t, GetCharCount_3, (app::ASCIIEncoding * this_ptr, uint8_t* bytes, int32_t count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x024477C0, int32_t, GetChars_3, (app::ASCIIEncoding * this_ptr, uint8_t* bytes, int32_t byte_count, uint16_t* chars, int32_t char_count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x02447B40, int32_t, GetMaxByteCount, (app::ASCIIEncoding * this_ptr, int32_t char_count))
    IL2CPP_REGISTER_METHODINFO(0x047095A8, ASCIIEncoding_GetMaxByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02447CB0, int32_t, GetMaxCharCount, (app::ASCIIEncoding * this_ptr, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x04722140, ASCIIEncoding_GetMaxCharCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02447E20, app::Decoder*, GetDecoder, (app::ASCIIEncoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02447F90, app::Encoder*, GetEncoder, (app::ASCIIEncoding * this_ptr))
} // namespace app::classes::System::Text::ASCIIEncoding
