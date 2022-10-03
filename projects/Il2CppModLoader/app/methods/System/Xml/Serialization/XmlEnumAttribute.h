#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlEnumAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlEnumAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::XmlEnumAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025A2400, void, AddKeyHash, (app::XmlEnumAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlEnumAttribute
