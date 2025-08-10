#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#include <Modloader/app/structs/DecoderReplacementFallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::DecoderReplacementFallback {
    IL2CPP_REGISTER_METHOD(0x0244B250, void, ctor_1, app::DecoderReplacementFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244B2E0, void, ctor_2, app::DecoderReplacementFallback* this_ptr, app::String* replacement)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DefaultString, app::DecoderReplacementFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244B4C0, app::DecoderFallbackBuffer*, CreateFallbackBuffer, app::DecoderReplacementFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_MaxCharCount, app::DecoderReplacementFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244B640, bool, Equals, app::DecoderReplacementFallback* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, app::DecoderReplacementFallback* this_ptr)
} // namespace app::classes::System::Text::DecoderReplacementFallback
