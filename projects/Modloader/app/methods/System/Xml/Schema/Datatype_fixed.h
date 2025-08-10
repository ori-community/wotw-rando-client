#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_fixed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>

namespace app::classes::System::Xml::Schema::Datatype_fixed {
    IL2CPP_REGISTER_METHOD(
        0x0235CEF0,
        app::Object*,
        ParseValue,
        app::Datatype_fixed* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr
    )
    IL2CPP_REGISTER_METHOD(
        0x0235D140,
        app::Exception*,
        TryParseValue,
        app::Datatype_fixed* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x0235D310, void, ctor, app::Datatype_fixed* this_ptr)
} // namespace app::classes::System::Xml::Schema::Datatype_fixed
