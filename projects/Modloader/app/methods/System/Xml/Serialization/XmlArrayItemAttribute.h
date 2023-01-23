#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlArrayItemAttribute.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Xml::Serialization::XmlArrayItemAttribute {
    IL2CPP_REGISTER_METHOD(0x01C9A8B0, app::String*, get_DataType, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9A940, app::String*, get_ElementName, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::XmlSchemaForm__Enum, get_Form, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Namespace, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsNullable, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_IsNullableSpecified, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Type*, get_Type, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_NestingLevel, (app::XmlArrayItemAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9A9D0, void, AddKeyHash, (app::XmlArrayItemAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlArrayItemAttribute
