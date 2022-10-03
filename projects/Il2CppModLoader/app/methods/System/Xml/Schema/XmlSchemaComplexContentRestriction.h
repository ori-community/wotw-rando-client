#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaComplexContentRestriction {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName*, get_BaseTypeName, (app::XmlSchemaComplexContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA3470, void, set_BaseTypeName, (app::XmlSchemaComplexContentRestriction * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaParticle*, get_Particle, (app::XmlSchemaComplexContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Particle, (app::XmlSchemaComplexContentRestriction * this_ptr, app::XmlSchemaParticle* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaObjectCollection*, get_Attributes, (app::XmlSchemaComplexContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaAnyAttribute*, get_AnyAttribute, (app::XmlSchemaComplexContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AnyAttribute, (app::XmlSchemaComplexContentRestriction * this_ptr, app::XmlSchemaAnyAttribute* value))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetAttributes, (app::XmlSchemaComplexContentRestriction * this_ptr, app::XmlSchemaObjectCollection* new_attributes))
    IL2CPP_REGISTER_METHOD(0x01CA3560, void, ctor, (app::XmlSchemaComplexContentRestriction * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaComplexContentRestriction
