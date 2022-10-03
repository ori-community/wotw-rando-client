#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IncludeInSchema, (app::XmlTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Namespace, (app::XmlTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194CBD0, app::String*, get_TypeName, (app::XmlTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194CC60, void, AddKeyHash, (app::XmlTypeAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlTypeAttribute
