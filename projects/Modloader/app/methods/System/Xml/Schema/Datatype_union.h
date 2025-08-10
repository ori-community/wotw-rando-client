#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/Datatype_union.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::Datatype_union {
    IL2CPP_REGISTER_METHOD(0x02360980, app::XmlValueConverter*, CreateValueConverter, app::Datatype_union* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x02360AD0, void, ctor, app::Datatype_union* this_ptr, app::XmlSchemaSimpleType__Array* types)
    IL2CPP_REGISTER_METHOD(0x02360B80, int32_t, Compare, app::Datatype_union* this_ptr, app::Object* value1, app::Object* value2)
    IL2CPP_REGISTER_METHOD(0x02360CE0, app::Type*, get_ValueType, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02360D80, app::FacetsChecker*, get_FacetsChecker, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02360E20, app::Type*, get_ListValueType, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XmlSchemaSimpleType__Array*, get_BaseMemberTypes, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02360EC0, bool, HasAtomicMembers, app::Datatype_union* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02360F80, bool, IsUnionBaseOf, app::Datatype_union* this_ptr, app::DatatypeImplementation* derived_type)
    IL2CPP_REGISTER_METHOD(
        0x02361050,
        app::Exception*,
        TryParseValue_1,
        app::Datatype_union* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(
        0x02361470,
        app::Exception*,
        TryParseValue_2,
        app::Datatype_union* this_ptr,
        app::Object* value,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02361A30, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_union
