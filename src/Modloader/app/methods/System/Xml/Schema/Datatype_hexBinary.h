#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_hexBinary.h>
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

namespace app::classes::System::Xml::Schema::Datatype_hexBinary {
    IL2CPP_REGISTER_METHOD(0x02356E60, app::XmlValueConverter*, CreateValueConverter, app::Datatype_hexBinary* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x0235DBD0, app::FacetsChecker*, get_FacetsChecker, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3AE80, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0235DC70, app::Type*, get_ValueType, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0235DD10, app::Type*, get_ListValueType, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0235DDB0, int32_t, Compare, app::Datatype_hexBinary* this_ptr, app::Object* value1, app::Object* value2)
    IL2CPP_REGISTER_METHOD(
        0x0235DEC0,
        app::Exception*,
        TryParseValue,
        app::Datatype_hexBinary* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x0235E070, void, ctor, app::Datatype_hexBinary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0235E110, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_hexBinary
