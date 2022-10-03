#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaGroupRef {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlQualifiedName*, get_RefName, (app::XmlSchemaGroupRef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA9320, void, set_RefName, (app::XmlSchemaGroupRef * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::XmlSchemaGroupBase*, get_Particle, (app::XmlSchemaGroupRef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetParticle, (app::XmlSchemaGroupRef * this_ptr, app::XmlSchemaGroupBase* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::XmlSchemaGroup*, get_Redefined, (app::XmlSchemaGroupRef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_Redefined, (app::XmlSchemaGroupRef * this_ptr, app::XmlSchemaGroup* value))
    IL2CPP_REGISTER_METHOD(0x01CA9410, void, ctor, (app::XmlSchemaGroupRef * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaGroupRef
