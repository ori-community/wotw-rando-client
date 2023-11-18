#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTextWriterBase64Encoder.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/XmlTextEncoder.h>

namespace app::classes::System::Xml::XmlTextWriterBase64Encoder {
    IL2CPP_REGISTER_METHOD(0x01701830, void, ctor, (app::XmlTextWriterBase64Encoder * this_ptr, app::XmlTextEncoder* xml_text_encoder))
    IL2CPP_REGISTER_METHOD(0x01FC3A00, void, WriteChars, (app::XmlTextWriterBase64Encoder * this_ptr, app::Char__Array* chars, int32_t index, int32_t count))
} // namespace app::classes::System::Xml::XmlTextWriterBase64Encoder
