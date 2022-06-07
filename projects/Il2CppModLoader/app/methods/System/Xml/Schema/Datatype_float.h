#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_float {
    IL2CPP_REGISTER_METHOD(0x0235BED0, app::XmlValueConverter *, CreateValueConverter, (app::Datatype_float * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0235D3B0, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D51450, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D450, app::Type *, get_ValueType, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D4F0, app::Type *, get_ListValueType, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAB0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D590, int32_t, Compare, (app::Datatype_float * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x0235D650, app::Exception *, TryParseValue, (app::Datatype_float * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x0235D810, void, ctor, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D8B0, void, cctor, ())
}
