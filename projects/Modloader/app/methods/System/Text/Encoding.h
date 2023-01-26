#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/DecoderFallback.h>
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/EncoderFallback.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::Encoding {
    IL2CPP_REGISTER_METHOD(0x01952A10, void, ctor_1, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F410, void, ctor_2, (app::Encoding * this_ptr, int32_t code_page))
    IL2CPP_REGISTER_METHOD(0x0244F4E0, void, SetDefaultFallbacks, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F700, void, OnDeserializing_1, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F710, void, OnDeserialized_1, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F700, void, OnDeserializing_2, (app::Encoding * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x0244F710, void, OnDeserialized_2, (app::Encoding * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, OnSerializing, (app::Encoding * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x0244F760, void, DeserializeEncoding, (app::Encoding * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0244FA40, void, SerializeEncoding, (app::Encoding * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0244FBA0, app::Object*, get_InternalSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x0244FD10, app::Encoding*, GetEncoding_1, (int32_t codepage))
    IL2CPP_REGISTER_METHOD(0x024509C0, app::Encoding*, GetEncoding_2, (int32_t codepage, app::EncoderFallback* encoder_fallback, app::DecoderFallback* decoder_fallback))
    IL2CPP_REGISTER_METHOD(0x02450C70, app::Encoding*, GetEncoding_3, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x02450E70, app::Encoding*, GetEncoding_4, (app::String * name, app::EncoderFallback* encoder_fallback, app::DecoderFallback* decoder_fallback))
    IL2CPP_REGISTER_METHOD(0x024510B0, app::Byte__Array*, GetPreamble, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02451150, void, GetDataItem, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024512A0, app::String*, get_EncodingName, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024513F0, app::String*, get_WebName, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::EncoderFallback*, get_EncoderFallback, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02451570, void, set_EncoderFallback, (app::Encoding * this_ptr, app::EncoderFallback* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DecoderFallback*, get_DecoderFallback, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02451670, void, set_DecoderFallback, (app::Encoding * this_ptr, app::DecoderFallback* value))
    IL2CPP_REGISTER_METHOD(0x02451770, app::Object*, Clone, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_IsReadOnly, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024518D0, app::Encoding*, get_ASCII, ())
    IL2CPP_REGISTER_METHOD(0x02451AD0, app::Encoding*, get_Latin1, ())
    IL2CPP_REGISTER_METHOD(0x02451C60, int32_t, GetByteCount_1, (app::Encoding * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02451D50, int32_t, GetByteCount_2, (app::Encoding * this_ptr, char16_t* chars, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00E08510, int32_t, GetByteCount_3, (app::Encoding * this_ptr, char16_t* chars, int32_t count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHOD(0x02451EF0, app::Byte__Array*, GetBytes_1, (app::Encoding * this_ptr, app::Char__Array* chars))
    IL2CPP_REGISTER_METHOD(0x02451FE0, app::Byte__Array*, GetBytes_2, (app::Encoding * this_ptr, app::Char__Array* chars, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x024520E0, app::Byte__Array*, GetBytes_3, (app::Encoding * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02452210, int32_t, GetBytes_4, (app::Encoding * this_ptr, app::String* s, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHOD(0x02452310, int32_t, GetBytes_5, (app::Encoding * this_ptr, char16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHOD(0x02452330, int32_t, GetBytes_6, (app::Encoding * this_ptr, char16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count))
    IL2CPP_REGISTER_METHOD(0x024525A0, int32_t, GetCharCount_1, (app::Encoding * this_ptr, uint8_t* bytes, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02452740, int32_t, GetCharCount_2, (app::Encoding * this_ptr, uint8_t* bytes, int32_t count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x02452760, app::Char__Array*, GetChars_1, (app::Encoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02452860, int32_t, GetChars_2, (app::Encoding * this_ptr, uint8_t* bytes, int32_t byte_count, char16_t* chars, int32_t char_count))
    IL2CPP_REGISTER_METHOD(0x02452AC0, int32_t, GetChars_3, (app::Encoding * this_ptr, uint8_t* bytes, int32_t byte_count, char16_t* chars, int32_t char_count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_CodePage, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02452AE0, app::Decoder*, GetDecoder, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02452C30, app::Encoding*, CreateDefaultEncoding, ())
    IL2CPP_REGISTER_METHOD(0x00DF3E00, void, setReadOnly, (app::Encoding * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02452CD0, app::Encoding*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02452E10, app::Encoder*, GetEncoder, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02452F60, app::String*, GetString_1, (app::Encoding * this_ptr, app::Byte__Array* bytes))
    IL2CPP_REGISTER_METHOD(0x02453050, app::String*, GetString_2, (app::Encoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02453080, app::Encoding*, get_Unicode, ())
    IL2CPP_REGISTER_METHOD(0x02453220, app::Encoding*, get_BigEndianUnicode, ())
    IL2CPP_REGISTER_METHOD(0x024533C0, app::Encoding*, get_UTF7, ())
    IL2CPP_REGISTER_METHOD(0x024535D0, app::Encoding*, get_UTF8, ())
    IL2CPP_REGISTER_METHOD(0x02453760, app::Encoding*, get_UTF32, ())
    IL2CPP_REGISTER_METHOD(0x02453910, bool, Equals, (app::Encoding * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02453A40, int32_t, GetHashCode, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02453AB0, app::Char__Array*, GetBestFitUnicodeToBytesData, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02453B50, app::Char__Array*, GetBestFitBytesToUnicodeData, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02453BF0, void, ThrowBytesOverflow_1, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02453CF0, void, ThrowBytesOverflow_2, (app::Encoding * this_ptr, app::EncoderNLS* encoder, bool nothing_encoded))
    IL2CPP_REGISTER_METHOD(0x02453D70, void, ThrowCharsOverflow_1, (app::Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02453E70, void, ThrowCharsOverflow_2, (app::Encoding * this_ptr, app::DecoderNLS* decoder, bool nothing_decoded))
} // namespace app::classes::System::Text::Encoding
