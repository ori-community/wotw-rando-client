#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlTypeMapMemberAttribute {
    IL2CPP_REGISTER_METHOD(0x0194F2F0, void, ctor, (app::XmlTypeMapMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String *, get_AttributeName, (app::XmlTypeMapMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_AttributeName, (app::XmlTypeMapMemberAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_Namespace, (app::XmlTypeMapMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_Namespace, (app::XmlTypeMapMemberAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Form, (app::XmlTypeMapMemberAttribute * this_ptr, app::XmlSchemaForm__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlTypeMapping *, get_MappedType, (app::XmlTypeMapMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_MappedType, (app::XmlTypeMapMemberAttribute * this_ptr, app::XmlTypeMapping * value))
}
