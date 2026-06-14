#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_unsignedByte.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_unsignedByte {
    IL2CPP_REGISTER_METHOD(0x02361B00, app::FacetsChecker*, get_FacetsChecker, app::Datatype_unsignedByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3CE50, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_unsignedByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02361BA0, int32_t, Compare, app::Datatype_unsignedByte* this_ptr, app::Object* value1, app::Object* value2)
    IL2CPP_REGISTER_METHOD(0x02361C60, app::Type*, get_ValueType, app::Datatype_unsignedByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02361D00, app::Type*, get_ListValueType, app::Datatype_unsignedByte* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02361DA0,
        app::Exception*,
        TryParseValue,
        app::Datatype_unsignedByte* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02361F50, void, ctor, app::Datatype_unsignedByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02361FF0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_unsignedByte
