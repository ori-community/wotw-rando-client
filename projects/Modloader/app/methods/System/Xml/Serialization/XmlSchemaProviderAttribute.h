#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlSchemaProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlSchemaProviderAttribute * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_MethodName, (app::XmlSchemaProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsAny, (app::XmlSchemaProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsAny, (app::XmlSchemaProviderAttribute * this_ptr, bool value))
} // namespace app::classes::System::Xml::Serialization::XmlSchemaProviderAttribute
