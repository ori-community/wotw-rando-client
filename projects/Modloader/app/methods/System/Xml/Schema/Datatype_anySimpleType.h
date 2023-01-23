#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlValueConverter.h>
#include <Modloader/app/structs/Datatype_anySimpleType.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>

namespace app::classes::System::Xml::Schema::Datatype_anySimpleType {
    IL2CPP_REGISTER_METHOD(0x023582F0, app::XmlValueConverter*, CreateValueConverter, (app::Datatype_anySimpleType * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x02358390, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02358430, app::Type*, get_ValueType, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023584D0, app::Type*, get_ListValueType, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02358570, int32_t, Compare, (app::Datatype_anySimpleType * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x023586A0, app::Exception*, TryParseValue, (app::Datatype_anySimpleType * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x023586C0, void, ctor, (app::Datatype_anySimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02358750, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_anySimpleType
