#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSerializationWriter.h>
#include <Modloader/app/structs/XmlSerializerImplementation.h>

namespace app::classes::System::Xml::Serialization::XmlSerializerImplementation {
    IL2CPP_REGISTER_METHOD(0x0194C120, app::XmlSerializationWriter*, get_Writer, (app::XmlSerializerImplementation * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047734D8, XmlSerializerImplementation_get_Writer__MethodInfo)
} // namespace app::classes::System::Xml::Serialization::XmlSerializerImplementation
