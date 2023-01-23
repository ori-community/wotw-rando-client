#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlValueConverter.h>
#include <Modloader/app/structs/Datatype_boolean.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>

namespace app::classes::System::Xml::Schema::Datatype_boolean {
    IL2CPP_REGISTER_METHOD(0x023594E0, app::XmlValueConverter*, CreateValueConverter, (app::Datatype_boolean * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x023594F0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004AB2B0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359590, app::Type*, get_ValueType, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359630, app::Type*, get_ListValueType, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C754B0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023596D0, int32_t, Compare, (app::Datatype_boolean * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x02359790, app::Exception*, TryParseValue, (app::Datatype_boolean * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x023598E0, void, ctor, (app::Datatype_boolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359980, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_boolean
