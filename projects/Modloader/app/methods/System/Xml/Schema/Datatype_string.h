#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlValueConverter.h>
#include <Modloader/app/structs/Datatype_string.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::Datatype_string {
    IL2CPP_REGISTER_METHOD(0x02360500, app::XmlValueConverter*, CreateValueConverter, (app::Datatype_string * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02360510, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023605B0, app::Exception*, TryParseValue, (app::Datatype_string * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x02360700, void, ctor, (app::Datatype_string * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_string
