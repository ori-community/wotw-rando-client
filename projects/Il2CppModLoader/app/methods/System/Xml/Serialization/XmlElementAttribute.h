#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlElementAttribute {
    IL2CPP_REGISTER_METHOD(0x025A1A00, void, ctor_1, (app::XmlElementAttribute * this_ptr, app::String * element_name))
    IL2CPP_REGISTER_METHOD(0x025A1A10, void, ctor_2, (app::XmlElementAttribute * this_ptr, app::String * element_name, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x025A1A20, app::String *, get_DataType, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025A1AB0, app::String *, get_ElementName, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::XmlSchemaForm__Enum, get_Form, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_Namespace, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsNullable, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Order, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Type *, get_Type, (app::XmlElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025A1B40, void, AddKeyHash, (app::XmlElementAttribute * this_ptr, app::StringBuilder * sb))
}
