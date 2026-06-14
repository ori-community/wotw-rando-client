#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_anyURI.h>
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
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::Datatype_anyURI {
    IL2CPP_REGISTER_METHOD(0x02356E60, app::XmlValueConverter*, CreateValueConverter, app::Datatype_anyURI* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x02358820, app::FacetsChecker*, get_FacetsChecker, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E99A0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023588C0, app::Type*, get_ValueType, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasValueFacets, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02358960, app::Type*, get_ListValueType, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02358A00, int32_t, Compare, app::Datatype_anyURI* this_ptr, app::Object* value1, app::Object* value2)
    IL2CPP_REGISTER_METHOD(
        0x02358B80,
        app::Exception*,
        TryParseValue,
        app::Datatype_anyURI* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02358D70, void, ctor, app::Datatype_anyURI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02358E10, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_anyURI
