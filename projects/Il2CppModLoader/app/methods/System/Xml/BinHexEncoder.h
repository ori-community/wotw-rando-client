#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::BinHexEncoder {
    IL2CPP_REGISTER_METHOD(0x021E1E90, void, Encode_1, (app::Byte__Array * buffer, int32_t index, int32_t count, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHODINFO(0x04730CA0, BinHexEncoder_Encode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021E20A0, app::String*, Encode_2, (app::Byte__Array * in_array, int32_t offset_in, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04760930, BinHexEncoder_Encode_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021E2260, int32_t, Encode_3, (app::Byte__Array * in_array, int32_t offset_in, int32_t count, app::Char__Array* out_array))
} // namespace app::classes::System::Xml::BinHexEncoder
