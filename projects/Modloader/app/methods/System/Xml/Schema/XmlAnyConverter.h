#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlAnyConverter.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XPathNavigator.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::XmlAnyConverter {
    IL2CPP_REGISTER_METHOD(0x02236CC0, void, ctor, (app::XmlAnyConverter * this_ptr, app::XmlTypeCode__Enum type_code))
    IL2CPP_REGISTER_METHOD(0x02236E70, bool, ToBoolean, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237060, app::DateTime, ToDateTime, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237250, app::DateTimeOffset, ToDateTimeOffset, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x022374B0, app::Decimal, ToDecimal, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237700, double, ToDouble, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x022378F0, int32_t, ToInt32, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237AE0, int64_t, ToInt64, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237CD0, float, ToSingle, (app::XmlAnyConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02237F20, app::Object*, ChangeType_1, (app::XmlAnyConverter * this_ptr, bool value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x022381E0, app::Object*, ChangeType_2, (app::XmlAnyConverter * this_ptr, app::DateTime value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x022384A0, app::Object*, ChangeType_3, (app::XmlAnyConverter * this_ptr, app::Decimal value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x02238780, app::Object*, ChangeType_4, (app::XmlAnyConverter * this_ptr, double value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x02238A50, app::Object*, ChangeType_5, (app::XmlAnyConverter * this_ptr, int32_t value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x02238D10, app::Object*, ChangeType_6, (app::XmlAnyConverter * this_ptr, int64_t value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x02238FD0, app::Object*, ChangeType_7, (app::XmlAnyConverter * this_ptr, app::String* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHOD(0x022392C0, app::Object*, ChangeType_8, (app::XmlAnyConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHOD(0x0223ADE0, app::Object*, ChangeTypeWildcardDestination, (app::XmlAnyConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHOD(0x0223AF50, app::Object*, ChangeTypeWildcardSource, (app::XmlAnyConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHOD(0x0223B110, app::XPathNavigator*, ToNavigator, (app::XmlAnyConverter * this_ptr, app::XPathNavigator* nav))
    IL2CPP_REGISTER_METHOD(0x0223B210, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::XmlAnyConverter
