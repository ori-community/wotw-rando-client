#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_string {
    IL2CPP_REGISTER_METHOD(0x02360500, app::XmlValueConverter *, CreateValueConverter, (app::Datatype_string * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02360510, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40570, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_string * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023605B0, app::Exception *, TryParseValue, (app::Datatype_string * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x02360700, void, ctor, (app::Datatype_string * this_ptr))
}
