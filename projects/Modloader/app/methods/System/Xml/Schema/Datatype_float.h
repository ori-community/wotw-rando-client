#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlValueConverter.h>
#include <Modloader/app/structs/Datatype_float.h>
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

namespace app::classes::System::Xml::Schema::Datatype_float {
    IL2CPP_REGISTER_METHOD(0x0235BED0, app::XmlValueConverter*, CreateValueConverter, (app::Datatype_float * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x0235D3B0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D51450, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D450, app::Type*, get_ValueType, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D4F0, app::Type*, get_ListValueType, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAB0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D590, int32_t, Compare, (app::Datatype_float * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x0235D650, app::Exception*, TryParseValue, (app::Datatype_float * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x0235D810, void, ctor, (app::Datatype_float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235D8B0, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_float
