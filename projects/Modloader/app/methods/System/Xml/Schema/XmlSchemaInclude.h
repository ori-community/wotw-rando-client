#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaInclude.h>

namespace app::classes::System::Xml::Schema::XmlSchemaInclude {
    IL2CPP_REGISTER_METHOD(0x01CA9670, void, ctor, app::XmlSchemaInclude* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, AddAnnotation, app::XmlSchemaInclude* this_ptr, app::XmlSchemaAnnotation* annotation)
} // namespace app::classes::System::Xml::Schema::XmlSchemaInclude
