#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::DecoderFallbackException {
    IL2CPP_REGISTER_METHOD(0x0244A140, void, ctor_1, (app::DecoderFallbackException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, ctor_2, (app::DecoderFallbackException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0244A1D0, void, ctor_3, (app::DecoderFallbackException * this_ptr, app::String * message, app::Byte__Array * bytes_unknown, int32_t index))
}
