#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNumeric10Converter.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::XmlNumeric10Converter {
    IL2CPP_REGISTER_METHOD(0x0224EB90, void, ctor, app::XmlNumeric10Converter* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x0224EC40, app::XmlValueConverter*, Create, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x0224EE00, app::Decimal, ToDecimal_1, app::XmlNumeric10Converter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0224EF30, app::Decimal, ToDecimal_2, app::XmlNumeric10Converter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0224F460, int32_t, ToInt32_1, app::XmlNumeric10Converter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0224F500, int32_t, ToInt32_2, app::XmlNumeric10Converter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0224F680, int32_t, ToInt32_3, app::XmlNumeric10Converter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0224FAF0, int64_t, ToInt64_1, app::XmlNumeric10Converter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0224FB00, int64_t, ToInt64_2, app::XmlNumeric10Converter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0224FC80, int64_t, ToInt64_3, app::XmlNumeric10Converter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x022500D0, app::String*, ToString_1, app::XmlNumeric10Converter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x022502C0, app::String*, ToString_2, app::XmlNumeric10Converter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02250370, app::String*, ToString_3, app::XmlNumeric10Converter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(
        0x02250420,
        app::String*,
        ToString_4,
        app::XmlNumeric10Converter* this_ptr,
        app::Object* value,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x022508C0, app::Object*, ChangeType_1, app::XmlNumeric10Converter* this_ptr, app::Decimal value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02250E90, app::Object*, ChangeType_2, app::XmlNumeric10Converter* this_ptr, int32_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02251460, app::Object*, ChangeType_3, app::XmlNumeric10Converter* this_ptr, int64_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(
        0x02251A60,
        app::Object*,
        ChangeType_4,
        app::XmlNumeric10Converter* this_ptr,
        app::String* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x02252010,
        app::Object*,
        ChangeType_5,
        app::XmlNumeric10Converter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x022537D0,
        app::Object*,
        ChangeTypeWildcardDestination,
        app::XmlNumeric10Converter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x02253C60,
        app::Object*,
        ChangeTypeWildcardSource,
        app::XmlNumeric10Converter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
} // namespace app::classes::System::Xml::Schema::XmlNumeric10Converter
