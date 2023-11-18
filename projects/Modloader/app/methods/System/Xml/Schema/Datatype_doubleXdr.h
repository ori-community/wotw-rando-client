#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Datatype_doubleXdr.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>

namespace app::classes::System::Xml::Schema::Datatype_doubleXdr {
    IL2CPP_REGISTER_METHOD(0x0235C4B0, app::Object*, ParseValue, (app::Datatype_doubleXdr * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr))
    IL2CPP_REGISTER_METHOD(0x0235C6C0, void, ctor, (app::Datatype_doubleXdr * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_doubleXdr
