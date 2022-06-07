#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_dateTimeBase {
    IL2CPP_REGISTER_METHOD(0x0235A810, app::XmlValueConverter *, CreateValueConverter, (app::Datatype_dateTimeBase * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0235A820, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D980, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235A8C0, void, ctor, (app::Datatype_dateTimeBase * this_ptr, app::XsdDateTimeFlags__Enum date_time_flags))
    IL2CPP_REGISTER_METHOD(0x0235A970, app::Type *, get_ValueType, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AA10, app::Type *, get_ListValueType, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAB0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_dateTimeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAC0, int32_t, Compare, (app::Datatype_dateTimeBase * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x0235AC30, app::Exception *, TryParseValue, (app::Datatype_dateTimeBase * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x0235B0D0, void, cctor, ())
}
