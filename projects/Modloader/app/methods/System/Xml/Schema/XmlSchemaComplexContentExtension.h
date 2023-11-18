#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaComplexContentExtension.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>

namespace app::classes::System::Xml::Schema::XmlSchemaComplexContentExtension {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName*, get_BaseTypeName, (app::XmlSchemaComplexContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA3200, void, set_BaseTypeName, (app::XmlSchemaComplexContentExtension * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaParticle*, get_Particle, (app::XmlSchemaComplexContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Particle, (app::XmlSchemaComplexContentExtension * this_ptr, app::XmlSchemaParticle* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaObjectCollection*, get_Attributes, (app::XmlSchemaComplexContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaAnyAttribute*, get_AnyAttribute, (app::XmlSchemaComplexContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AnyAttribute, (app::XmlSchemaComplexContentExtension * this_ptr, app::XmlSchemaAnyAttribute* value))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetAttributes, (app::XmlSchemaComplexContentExtension * this_ptr, app::XmlSchemaObjectCollection* new_attributes))
    IL2CPP_REGISTER_METHOD(0x01CA32F0, void, ctor, (app::XmlSchemaComplexContentExtension * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaComplexContentExtension
