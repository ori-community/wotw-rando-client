#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Ucs4Decoder1234.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::Ucs4Decoder1234 {
    IL2CPP_REGISTER_METHOD(0x01951870, int32_t, GetFullChars, (app::Ucs4Decoder1234 * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHODINFO(0x047712C8, Ucs4Decoder1234_GetFullChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01951B50, void, ctor, (app::Ucs4Decoder1234 * this_ptr))
} // namespace app::classes::System::Xml::Ucs4Decoder1234
