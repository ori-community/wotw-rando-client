#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::BinHexEncoder {
    IL2CPP_REGISTER_METHOD(0x021E1E90, void, Encode_1, app::Byte__Array* buffer, int32_t index, int32_t count, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x021E20A0, app::String*, Encode_2, app::Byte__Array* in_array, int32_t offset_in, int32_t count)
    IL2CPP_REGISTER_METHOD(0x021E2260, int32_t, Encode_3, app::Byte__Array* in_array, int32_t offset_in, int32_t count, app::Char__Array* out_array)
} // namespace app::classes::System::Xml::BinHexEncoder
