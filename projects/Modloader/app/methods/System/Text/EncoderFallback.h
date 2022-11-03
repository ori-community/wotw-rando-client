#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::EncoderFallback {
    IL2CPP_REGISTER_METHOD(0x0244CB50, app::Object*, get_InternalSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x0244CCC0, app::EncoderFallback*, get_ReplacementFallback, ())
    IL2CPP_REGISTER_METHOD(0x0244CFA0, app::EncoderFallback*, get_ExceptionFallback, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EncoderFallback * this_ptr))
} // namespace app::classes::System::Text::EncoderFallback
