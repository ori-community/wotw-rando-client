#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_unsignedLong.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_unsignedLong {
    IL2CPP_REGISTER_METHOD(0x023628E0, app::FacetsChecker*, get_FacetsChecker, app::Datatype_unsignedLong* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E530, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_unsignedLong* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02362980, int32_t, Compare, app::Datatype_unsignedLong* this_ptr, app::Object* value1, app::Object* value2)
    IL2CPP_REGISTER_METHOD(0x02362A40, app::Type*, get_ValueType, app::Datatype_unsignedLong* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02362AE0, app::Type*, get_ListValueType, app::Datatype_unsignedLong* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02362B80,
        app::Exception*,
        TryParseValue,
        app::Datatype_unsignedLong* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02362D80, void, ctor, app::Datatype_unsignedLong* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02362E20, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_unsignedLong
