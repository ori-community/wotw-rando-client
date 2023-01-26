#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSerializableMapping.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlRootAttribute.h>

namespace app::classes::System::Xml::Serialization::XmlSerializableMapping {
    IL2CPP_REGISTER_METHOD(0x025ABAE0, void, ctor, (app::XmlSerializableMapping * this_ptr, app::XmlRootAttribute* root, app::String* element_name, app::String* ns, app::TypeData* type_data, app::String* xml_type, app::String* xml_type_namespace))
}
