#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_yearMonthDuration.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_yearMonthDuration {
    IL2CPP_REGISTER_METHOD(
        0x02363EE0,
        app::Exception*,
        TryParseValue,
        app::Datatype_yearMonthDuration* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x00E406F0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_yearMonthDuration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023641D0, void, ctor, app::Datatype_yearMonthDuration* this_ptr)
} // namespace app::classes::System::Xml::Schema::Datatype_yearMonthDuration
