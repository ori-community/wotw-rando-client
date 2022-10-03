#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlBooleanConverter {
    IL2CPP_REGISTER_METHOD(0x02244E40, void, ctor, (app::XmlBooleanConverter * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x02244EF0, app::XmlValueConverter*, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x022450B0, bool, ToBoolean_1, (app::XmlBooleanConverter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04785438, XmlBooleanConverter_ToBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02245180, bool, ToBoolean_2, (app::XmlBooleanConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047428A0, XmlBooleanConverter_ToBoolean_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022454B0, app::String*, ToString_1, (app::XmlBooleanConverter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02245550, app::String*, ToString_2, (app::XmlBooleanConverter * this_ptr, app::Object* value, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0473B2D0, XmlBooleanConverter_ToString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02245860, app::Object*, ChangeType_1, (app::XmlBooleanConverter * this_ptr, bool value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04736730, XmlBooleanConverter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02245CF0, app::Object*, ChangeType_2, (app::XmlBooleanConverter * this_ptr, app::String* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04741D50, XmlBooleanConverter_ChangeType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022461A0, app::Object*, ChangeType_3, (app::XmlBooleanConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04723438, XmlBooleanConverter_ChangeType_2__MethodInfo)
} // namespace app::classes::System::Xml::Schema::XmlBooleanConverter
