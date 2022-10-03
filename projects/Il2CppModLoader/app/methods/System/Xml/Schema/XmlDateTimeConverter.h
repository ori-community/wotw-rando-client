#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlDateTimeConverter {
    IL2CPP_REGISTER_METHOD(0x02246B80, void, ctor, (app::XmlDateTimeConverter * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x02246C30, app::XmlValueConverter*, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x02246DF0, app::DateTime, ToDateTime_1, (app::XmlDateTimeConverter * this_ptr, app::DateTimeOffset value))
    IL2CPP_REGISTER_METHOD(0x02246EB0, app::DateTime, ToDateTime_2, (app::XmlDateTimeConverter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04755C00, XmlDateTimeConverter_ToDateTime_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022473E0, app::DateTime, ToDateTime_3, (app::XmlDateTimeConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0474A3E8, XmlDateTimeConverter_ToDateTime_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022477A0, app::DateTimeOffset, ToDateTimeOffset_1, (app::XmlDateTimeConverter * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x022477D0, app::DateTimeOffset, ToDateTimeOffset_2, (app::XmlDateTimeConverter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0473FEB0, XmlDateTimeConverter_ToDateTimeOffset_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02247D10, app::DateTimeOffset, ToDateTimeOffset_3, (app::XmlDateTimeConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04768750, XmlDateTimeConverter_ToDateTimeOffset_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02248120, app::String*, ToString_1, (app::XmlDateTimeConverter * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x02248350, app::String*, ToString_2, (app::XmlDateTimeConverter * this_ptr, app::DateTimeOffset value))
    IL2CPP_REGISTER_METHOD(0x02248590, app::String*, ToString_3, (app::XmlDateTimeConverter * this_ptr, app::Object* value, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0474F680, XmlDateTimeConverter_ToString_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02248940, app::Object*, ChangeType_1, (app::XmlDateTimeConverter * this_ptr, app::DateTime value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0473A538, XmlDateTimeConverter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02248E40, app::Object*, ChangeType_2, (app::XmlDateTimeConverter * this_ptr, app::String* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0473BBB8, XmlDateTimeConverter_ChangeType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02249360, app::Object*, ChangeType_3, (app::XmlDateTimeConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04708D60, XmlDateTimeConverter_ChangeType_2__MethodInfo)
} // namespace app::classes::System::Xml::Schema::XmlDateTimeConverter
