#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::EncodingProvider {
    IL2CPP_REGISTER_METHOD(0x02457590, app::Encoding*, GetEncoding_1, (app::EncodingProvider * this_ptr, app::String* name, app::EncoderFallback* encoder_fallback, app::DecoderFallback* decoder_fallback))
    IL2CPP_REGISTER_METHOD(0x02457710, app::Encoding*, GetEncoding_2, (app::EncodingProvider * this_ptr, int32_t codepage, app::EncoderFallback* encoder_fallback, app::DecoderFallback* decoder_fallback))
    IL2CPP_REGISTER_METHOD(0x02457890, app::Encoding*, GetEncodingFromProvider_1, (int32_t codepage))
    IL2CPP_REGISTER_METHOD(0x024579F0, app::Encoding*, GetEncodingFromProvider_2, (app::String * encoding_name))
    IL2CPP_REGISTER_METHOD(0x02457B50, app::Encoding*, GetEncodingFromProvider_3, (int32_t codepage, app::EncoderFallback* enc, app::DecoderFallback* dec))
    IL2CPP_REGISTER_METHOD(0x02457CD0, app::Encoding*, GetEncodingFromProvider_4, (app::String * encoding_name, app::EncoderFallback* enc, app::DecoderFallback* dec))
    IL2CPP_REGISTER_METHOD(0x02457E50, void, cctor, ())
} // namespace app::classes::System::Text::EncodingProvider
