#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Ucs4Decoder4321.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::Ucs4Decoder4321 {
    IL2CPP_REGISTER_METHOD(0x01952120, int32_t, GetFullChars, (app::Ucs4Decoder4321 * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHODINFO(0x04701858, Ucs4Decoder4321_GetFullChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01951B50, void, ctor, (app::Ucs4Decoder4321 * this_ptr))
} // namespace app::classes::System::Xml::Ucs4Decoder4321
