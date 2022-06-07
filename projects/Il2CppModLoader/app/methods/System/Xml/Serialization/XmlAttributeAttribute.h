#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlAttributeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlAttributeAttribute * this_ptr, app::String * attribute_name))
    IL2CPP_REGISTER_METHOD(0x01C9B110, app::String *, get_AttributeName, (app::XmlAttributeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9B1A0, app::String *, get_DataType, (app::XmlAttributeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DataType, (app::XmlAttributeAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::XmlSchemaForm__Enum, get_Form, (app::XmlAttributeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Namespace, (app::XmlAttributeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9B230, void, AddKeyHash, (app::XmlAttributeAttribute * this_ptr, app::StringBuilder * sb))
}
