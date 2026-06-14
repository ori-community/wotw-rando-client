#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlUntypedConverter.h>

namespace app::classes::System::Xml::Schema::XmlUntypedConverter {
    IL2CPP_REGISTER_METHOD(0x01930730, void, ctor_1, app::XmlUntypedConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019308F0, void, ctor_2, app::XmlUntypedConverter* this_ptr, app::XmlUntypedConverter* atomic_converter, bool allow_list_to_list)
    IL2CPP_REGISTER_METHOD(0x01930AA0, bool, ToBoolean_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01930B70, bool, ToBoolean_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01930D70, app::DateTime, ToDateTime_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01930E40, app::DateTime, ToDateTime_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931040, app::DateTimeOffset, ToDateTimeOffset_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01931130, app::DateTimeOffset, ToDateTimeOffset_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931340, app::Decimal, ToDecimal_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01931430, app::Decimal, ToDecimal_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931640, double, ToDouble_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01931710, double, ToDouble_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931920, int32_t, ToInt32_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01931A20, int32_t, ToInt32_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931C40, int64_t, ToInt64_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01931D40, int64_t, ToInt64_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01931F60, float, ToSingle_1, app::XmlUntypedConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01932030, float, ToSingle_2, app::XmlUntypedConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01932240, app::String*, ToString_1, app::XmlUntypedConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x019322E0, app::String*, ToString_2, app::XmlUntypedConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x019323A0, app::String*, ToString_3, app::XmlUntypedConverter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01932470, app::String*, ToString_4, app::XmlUntypedConverter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01932530, app::String*, ToString_5, app::XmlUntypedConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x019325D0, app::String*, ToString_6, app::XmlUntypedConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01932680, app::String*, ToString_7, app::XmlUntypedConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01932730, app::String*, ToString_8, app::XmlUntypedConverter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(
        0x019327D0,
        app::String*,
        ToString_9,
        app::XmlUntypedConverter* this_ptr,
        app::Object* value,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x019337C0, app::Object*, ChangeType_1, app::XmlUntypedConverter* this_ptr, bool value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x019339D0, app::Object*, ChangeType_2, app::XmlUntypedConverter* this_ptr, app::DateTime value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x01933C00, app::Object*, ChangeType_3, app::XmlUntypedConverter* this_ptr, app::Decimal value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x01933E30, app::Object*, ChangeType_4, app::XmlUntypedConverter* this_ptr, double value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x01934040, app::Object*, ChangeType_5, app::XmlUntypedConverter* this_ptr, int32_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x01934260, app::Object*, ChangeType_6, app::XmlUntypedConverter* this_ptr, int64_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(
        0x01934480,
        app::Object*,
        ChangeType_7,
        app::XmlUntypedConverter* this_ptr,
        app::String* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01935480,
        app::Object*,
        ChangeType_8,
        app::XmlUntypedConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01937020,
        app::Object*,
        ChangeTypeWildcardDestination,
        app::XmlUntypedConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01937190,
        app::Object*,
        ChangeTypeWildcardSource,
        app::XmlUntypedConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01937470,
        app::Object*,
        ChangeListType,
        app::XmlUntypedConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x019377E0, bool, SupportsType, app::XmlUntypedConverter* this_ptr, app::Type* clr_type)
    IL2CPP_REGISTER_METHOD(0x01937F50, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlUntypedConverter
