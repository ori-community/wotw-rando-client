#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_QName.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::Datatype_QName {
    IL2CPP_REGISTER_METHOD(0x02356E60, app::XmlValueConverter*, CreateValueConverter, app::Datatype_QName* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x023576E0, app::FacetsChecker*, get_FacetsChecker, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E950, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlTokenizedType__Enum, get_TokenizedType, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02357780, app::Type*, get_ValueType, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02357820, app::Type*, get_ListValueType, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x023578C0,
        app::Exception*,
        TryParseValue,
        app::Datatype_QName* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02357B90, void, ctor, app::Datatype_QName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02357C30, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_QName
