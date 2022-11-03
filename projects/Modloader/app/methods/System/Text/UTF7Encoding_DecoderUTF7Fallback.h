#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::UTF7Encoding_DecoderUTF7Fallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UTF7Encoding_DecoderUTF7Fallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CDC10, app::DecoderFallbackBuffer*, CreateFallbackBuffer, (app::UTF7Encoding_DecoderUTF7Fallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_MaxCharCount, (app::UTF7Encoding_DecoderUTF7Fallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CDD50, bool, Equals, (app::UTF7Encoding_DecoderUTF7Fallback * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x027CDDF0, int32_t, GetHashCode, (app::UTF7Encoding_DecoderUTF7Fallback * this_ptr))
} // namespace app::classes::System::Text::UTF7Encoding_DecoderUTF7Fallback
