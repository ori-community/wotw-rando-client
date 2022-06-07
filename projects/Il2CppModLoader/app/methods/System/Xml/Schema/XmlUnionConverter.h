#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlUnionConverter {
    IL2CPP_REGISTER_METHOD(0x0192FD00, void, ctor, (app::XmlUnionConverter * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x019300A0, app::XmlValueConverter *, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x019301F0, app::Object *, ChangeType, (app::XmlUnionConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047812D8, XmlUnionConverter_ChangeType__MethodInfo)
}
