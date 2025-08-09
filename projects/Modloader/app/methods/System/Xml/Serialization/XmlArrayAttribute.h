#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlArrayAttribute.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>

namespace app::classes::System::Xml::Serialization::XmlArrayAttribute {
    IL2CPP_REGISTER_METHOD(0x01C9A660, app::String*, get_ElementName, app::XmlArrayAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::XmlSchemaForm__Enum, get_Form, app::XmlArrayAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsNullable, app::XmlArrayAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Namespace, app::XmlArrayAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Order, app::XmlArrayAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C9A6F0, void, AddKeyHash, app::XmlArrayAttribute* this_ptr, app::StringBuilder* sb)
} // namespace app::classes::System::Xml::Serialization::XmlArrayAttribute
