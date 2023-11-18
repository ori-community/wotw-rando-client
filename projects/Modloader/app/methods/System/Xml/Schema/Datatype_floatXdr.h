#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Datatype_floatXdr.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>

namespace app::classes::System::Xml::Schema::Datatype_floatXdr {
    IL2CPP_REGISTER_METHOD(0x0235D980, app::Object*, ParseValue, (app::Datatype_floatXdr * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr))
    IL2CPP_REGISTER_METHOD(0x0235DB30, void, ctor, (app::Datatype_floatXdr * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_floatXdr
