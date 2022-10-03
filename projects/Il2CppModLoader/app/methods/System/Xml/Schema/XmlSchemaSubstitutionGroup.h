#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSubstitutionGroup {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::ArrayList*, get_Members, (app::XmlSchemaSubstitutionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::XmlQualifiedName*, get_Examplar, (app::XmlSchemaSubstitutionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Examplar, (app::XmlSchemaSubstitutionGroup * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x0191E060, void, ctor, (app::XmlSchemaSubstitutionGroup * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaSubstitutionGroup
