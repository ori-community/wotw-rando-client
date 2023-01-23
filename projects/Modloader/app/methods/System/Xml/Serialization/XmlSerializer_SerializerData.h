#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSerializationWriter.h>
#include <Modloader/app/structs/XmlSerializer_SerializerData.h>

namespace app::classes::System::Xml::Serialization::XmlSerializer_SerializerData {
    IL2CPP_REGISTER_METHOD(0x0194B990, app::XmlSerializationWriter*, CreateWriter, (app::XmlSerializer_SerializerData * this_ptr))
}
