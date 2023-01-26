#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Datatype_int.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_int {
    IL2CPP_REGISTER_METHOD(0x0235E1E0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_int * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40FA0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_int * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235E280, int32_t, Compare, (app::Datatype_int * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x0235E340, app::Type*, get_ValueType, (app::Datatype_int * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235E3E0, app::Type*, get_ListValueType, (app::Datatype_int * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235E480, app::Exception*, TryParseValue, (app::Datatype_int * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x0235E630, void, ctor, (app::Datatype_int * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235E6D0, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_int
