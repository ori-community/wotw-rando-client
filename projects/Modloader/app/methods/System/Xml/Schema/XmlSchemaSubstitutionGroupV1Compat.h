#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroupV1Compat.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::XmlSchemaChoice*, get_Choice, app::XmlSchemaSubstitutionGroupV1Compat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0191E1E0, void, ctor, app::XmlSchemaSubstitutionGroupV1Compat* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat
