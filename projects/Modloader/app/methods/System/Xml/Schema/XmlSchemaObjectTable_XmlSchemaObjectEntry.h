#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObject.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed * this_ptr, app::XmlQualifiedName* name, app::XmlSchemaObject* value))
}
