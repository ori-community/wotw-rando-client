#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RedefineEntry.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaRedefine.h>

namespace app::classes::System::Xml::Schema::RedefineEntry {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::RedefineEntry* this_ptr, app::XmlSchemaRedefine* external, app::XmlSchema* schema)
}
