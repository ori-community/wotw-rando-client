#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Byte__Array__Array.h>
#include <Modloader/app/structs/DateTimeOffset__Array.h>
#include <Modloader/app/structs/DateTime__Array.h>
#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IEnumerable.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/Uri__Array.h>
#include <Modloader/app/structs/XPathItem__Array.h>
#include <Modloader/app/structs/XPathNavigator__Array.h>
#include <Modloader/app/structs/XmlAtomicValue__Array.h>
#include <Modloader/app/structs/XmlBaseConverter.h>
#include <Modloader/app/structs/XmlListConverter.h>
#include <Modloader/app/structs/XmlQualifiedName__Array.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::XmlListConverter {
    IL2CPP_REGISTER_METHOD(0x0224A020, void, ctor_1, app::XmlListConverter* this_ptr, app::XmlBaseConverter* atomic_converter)
    IL2CPP_REGISTER_METHOD(0x0224A110, void, ctor_2, app::XmlListConverter* this_ptr, app::XmlBaseConverter* atomic_converter, app::Type* clr_type_default)
    IL2CPP_REGISTER_METHOD(0x0224A1E0, void, ctor_3, app::XmlListConverter* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x0224A290, app::XmlValueConverter*, Create, app::XmlValueConverter* atomic_converter)
    IL2CPP_REGISTER_METHOD(
        0x0224A530,
        app::Object*,
        ChangeType,
        app::XmlListConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0224A680,
        app::Object*,
        ChangeListType,
        app::XmlListConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x0224B530, bool, IsListType, app::XmlListConverter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0224B750, app::IList*, ToList, app::XmlListConverter* this_ptr, app::Object* list, app::IXmlNamespaceResolver* ns_resolver)
    IL2CPP_REGISTER_METHOD(0x0224BB80, app::List_1_System_String_*, StringAsList, app::XmlListConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x0224BD00,
        app::String*,
        ListAsString,
        app::XmlListConverter* this_ptr,
        app::IEnumerable* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0224C070,
        app::Exception*,
        CreateInvalidClrMappingException,
        app::XmlListConverter* this_ptr,
        app::Type* source_type,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::Object__Array*,
        ToArray_1,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01587370,
        app::Boolean__Array*,
        ToArray_2,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01587890,
        app::Byte__Array*,
        ToArray_3,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::Byte__Array__Array*,
        ToArray_4,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01587DB0,
        app::DateTime__Array*,
        ToArray_5,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x015882D0,
        app::DateTimeOffset__Array*,
        ToArray_6,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x015887F0,
        app::Decimal__Array*,
        ToArray_7,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01588D10,
        app::Double__Array*,
        ToArray_8,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01589230,
        app::Int16__Array*,
        ToArray_9,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01589750,
        app::Int32__Array*,
        ToArray_10,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x01589C70,
        app::Int64__Array*,
        ToArray_11,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A670,
        app::SByte__Array*,
        ToArray_12,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158AB90,
        app::Single__Array*,
        ToArray_13,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::String__Array*,
        ToArray_14,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158B0B0,
        app::TimeSpan__Array*,
        ToArray_15,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158B5D0,
        app::UInt16__Array*,
        ToArray_16,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158BAF0,
        app::UInt32__Array*,
        ToArray_17,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158C010,
        app::UInt64__Array*,
        ToArray_18,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::Uri__Array*,
        ToArray_19,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::XmlAtomicValue__Array*,
        ToArray_20,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::XmlQualifiedName__Array*,
        ToArray_21,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::XPathItem__Array*,
        ToArray_22,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x0158A190,
        app::XPathNavigator__Array*,
        ToArray_23,
        app::XmlListConverter* this_ptr,
        app::Object* list,
        app::IXmlNamespaceResolver* ns_resolver
    )
} // namespace app::classes::System::Xml::Schema::XmlListConverter
