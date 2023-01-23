#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlAttributeEventArgs.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Serialization::XmlAttributeEventArgs {
    IL2CPP_REGISTER_METHOD(0x01C9B3F0, void, ctor, (app::XmlAttributeEventArgs * this_ptr, app::XmlAttribute* attr, int32_t line_number, int32_t line_position, app::Object* o, app::String* qnames))
}
