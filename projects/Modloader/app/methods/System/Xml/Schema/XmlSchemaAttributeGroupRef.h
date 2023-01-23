#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroupRef.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAttributeGroupRef {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlQualifiedName*, get_RefName, (app::XmlSchemaAttributeGroupRef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA1C70, void, set_RefName, (app::XmlSchemaAttributeGroupRef * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x01CA1D60, void, ctor, (app::XmlSchemaAttributeGroupRef * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaAttributeGroupRef
