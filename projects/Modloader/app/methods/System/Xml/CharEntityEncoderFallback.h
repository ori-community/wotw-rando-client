#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharEntityEncoderFallback.h>
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Xml::CharEntityEncoderFallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharEntityEncoderFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E80E0, app::EncoderFallbackBuffer*, CreateFallbackBuffer, (app::CharEntityEncoderFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, int32_t, get_MaxCharCount, (app::CharEntityEncoderFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_StartOffset, (app::CharEntityEncoderFallback * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x021E82B0, void, Reset, (app::CharEntityEncoderFallback * this_ptr, app::Int32__Array* text_content_marks, int32_t end_mark_pos))
    IL2CPP_REGISTER_METHOD(0x021E82C0, bool, CanReplaceAt, (app::CharEntityEncoderFallback * this_ptr, int32_t index))
} // namespace app::classes::System::Xml::CharEntityEncoderFallback
