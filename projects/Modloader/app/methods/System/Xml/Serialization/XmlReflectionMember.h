#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlReflectionMember {
    IL2CPP_REGISTER_METHOD(0x025AB710, void, ctor, (app::XmlReflectionMember * this_ptr, app::String* name, app::Type* type, app::XmlAttributes* attributes))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReturnValue, (app::XmlReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_MemberName, (app::XmlReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_MemberType, (app::XmlReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025AB720, app::XmlAttributes*, get_XmlAttributes, (app::XmlReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Type*, get_DeclaringType, (app::XmlReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_DeclaringType, (app::XmlReflectionMember * this_ptr, app::Type* value))
} // namespace app::classes::System::Xml::Serialization::XmlReflectionMember
