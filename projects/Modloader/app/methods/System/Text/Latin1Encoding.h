#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::Latin1Encoding {
    IL2CPP_REGISTER_METHOD(0x024594F0, void, ctor_1, (app::Latin1Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02459500, void, ctor_2, (app::Latin1Encoding * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02459550, void, ISerializable_GetObjectData, (app::Latin1Encoding * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02459750, int32_t, GetByteCount, (app::Latin1Encoding * this_ptr, uint16_t* chars, int32_t char_count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHOD(0x024599A0, int32_t, GetBytes, (app::Latin1Encoding * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, app::EncoderNLS* encoder))
    IL2CPP_REGISTER_METHOD(0x02459E20, int32_t, GetCharCount, (app::Latin1Encoding * this_ptr, uint8_t* bytes, int32_t count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x02459E30, int32_t, GetChars, (app::Latin1Encoding * this_ptr, uint8_t* bytes, int32_t byte_count, uint16_t* chars, int32_t char_count, app::DecoderNLS* decoder))
    IL2CPP_REGISTER_METHOD(0x02459ED0, int32_t, GetMaxByteCount, (app::Latin1Encoding * this_ptr, int32_t char_count))
    IL2CPP_REGISTER_METHODINFO(0x04767B40, Latin1Encoding_GetMaxByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0245A040, int32_t, GetMaxCharCount, (app::Latin1Encoding * this_ptr, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x04700FA0, Latin1Encoding_GetMaxCharCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0245A1B0, app::Char__Array*, GetBestFitUnicodeToBytesData, (app::Latin1Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0245A250, void, cctor, ())
} // namespace app::classes::System::Text::Latin1Encoding
