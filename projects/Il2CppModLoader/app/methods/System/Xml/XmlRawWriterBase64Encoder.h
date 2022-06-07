#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlRawWriterBase64Encoder {
    IL2CPP_REGISTER_METHOD(0x01701830, void, ctor, (app::XmlRawWriterBase64Encoder * this_ptr, app::XmlRawWriter * raw_writer))
    IL2CPP_REGISTER_METHOD(0x01701860, void, WriteChars, (app::XmlRawWriterBase64Encoder * this_ptr, app::Char__Array * chars, int32_t index, int32_t count))
}
