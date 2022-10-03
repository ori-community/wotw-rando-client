#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlStringConverter {
    IL2CPP_REGISTER_METHOD(0x0192ED80, void, ctor, (app::XmlStringConverter * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x0192EE30, app::XmlValueConverter*, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0192EFF0, app::String*, ToString, (app::XmlStringConverter * this_ptr, app::Object* value, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0476DA80, XmlStringConverter_ToString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0192F260, app::Object*, ChangeType_1, (app::XmlStringConverter * this_ptr, app::String* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047700F8, XmlStringConverter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0192F660, app::Object*, ChangeType_2, (app::XmlStringConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047639D8, XmlStringConverter_ChangeType_1__MethodInfo)
} // namespace app::classes::System::Xml::Schema::XmlStringConverter
