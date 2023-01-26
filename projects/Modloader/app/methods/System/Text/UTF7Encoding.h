#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UTF7Encoding.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::UTF7Encoding {
    IL2CPP_REGISTER_METHOD(0x027CAC80, void, ctor_1, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CAD20, void, ctor_2, (app::UTF7Encoding * this_ptr, bool allow_optionals))
    IL2CPP_REGISTER_METHOD(0x027CADD0, void, MakeTables, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CB0C0, void, SetDefaultFallbacks, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F700, void, OnDeserializing, (app::UTF7Encoding * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x027CB2E0, void, OnDeserialized, (app::UTF7Encoding * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x027CB3F0, bool, Equals, (app::UTF7Encoding * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x027CB520, int32_t, GetHashCode, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CB5A0, int32_t, GetByteCount_1, (app::UTF7Encoding * this_ptr, app::Char__Array* chars, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x027CB770, int32_t, GetByteCount_2, (app::UTF7Encoding * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x027CB850, int32_t, GetByteCount_3, (app::UTF7Encoding * this_ptr, char16_t* chars, int32_t count))
    IL2CPP_REGISTER_METHOD(0x027CB990, int32_t, GetBytes_1, (app::UTF7Encoding * this_ptr, app::String* s, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHOD(0x027CBC20, int32_t, GetBytes_2, (app::UTF7Encoding * this_ptr, app::Char__Array* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHOD(0x027CBEC0, int32_t, GetBytes_3, (app::UTF7Encoding * this_ptr, char16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count))
    IL2CPP_REGISTER_METHOD(0x027CC040, int32_t, GetCharCount_1, (app::UTF7Encoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x027CC210, int32_t, GetCharCount_2, (app::UTF7Encoding * this_ptr, uint8_t* bytes, int32_t count))
    IL2CPP_REGISTER_METHOD(0x027CC350, int32_t, GetChars_1, (app::UTF7Encoding * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x027CC5F0, int32_t, GetChars_2, (app::UTF7Encoding * this_ptr, uint8_t* bytes, int32_t byte_count, char16_t* chars, int32_t char_count))
    IL2CPP_REGISTER_METHOD(0x027CC770, app::String*, GetString, (app::UTF7Encoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x027CC940, int32_t, GetByteCount_4, (app::UTF7Encoding * this_ptr, char16_t* chars, int32_t count, app::EncoderNLS* base_encoder))
    IL2CPP_REGISTER_METHOD(0x027CC970, int32_t, GetBytes_4, (app::UTF7Encoding * this_ptr, char16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, app::EncoderNLS* base_encoder))
    IL2CPP_REGISTER_METHOD(0x027CCF60, int32_t, GetCharCount_3, (app::UTF7Encoding * this_ptr, uint8_t* bytes, int32_t count, app::DecoderNLS* base_decoder))
    IL2CPP_REGISTER_METHOD(0x027CCF90, int32_t, GetChars_3, (app::UTF7Encoding * this_ptr, uint8_t* bytes, int32_t byte_count, char16_t* chars, int32_t char_count, app::DecoderNLS* base_decoder))
    IL2CPP_REGISTER_METHOD(0x027CD360, app::Decoder*, GetDecoder, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CD4D0, app::Encoder*, GetEncoder, (app::UTF7Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CD640, int32_t, GetMaxByteCount, (app::UTF7Encoding * this_ptr, int32_t char_count))
    IL2CPP_REGISTER_METHOD(0x027CD760, int32_t, GetMaxCharCount, (app::UTF7Encoding * this_ptr, int32_t byte_count))
} // namespace app::classes::System::Text::UTF7Encoding
