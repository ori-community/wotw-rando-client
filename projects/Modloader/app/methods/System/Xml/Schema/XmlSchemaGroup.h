#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaGroupBase.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchema.h>

namespace app::classes::System::Xml::Schema::XmlSchemaGroup {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Name, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (app::XmlSchemaGroup * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaGroupBase*, get_Particle, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Particle, (app::XmlSchemaGroup * this_ptr, app::XmlSchemaGroupBase* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName*, get_QualifiedName, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaParticle*, get_CanonicalParticle, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_CanonicalParticle, (app::XmlSchemaGroup * this_ptr, app::XmlSchemaParticle* value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlSchemaGroup*, get_Redefined, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Redefined, (app::XmlSchemaGroup * this_ptr, app::XmlSchemaGroup* value))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_SelfReferenceCount, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_SelfReferenceCount, (app::XmlSchemaGroup * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_NameAttribute, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (app::XmlSchemaGroup * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetQualifiedName, (app::XmlSchemaGroup * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x01CA8F60, app::XmlSchemaObject*, Clone_1, (app::XmlSchemaGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA8F70, app::XmlSchemaObject*, Clone_2, (app::XmlSchemaGroup * this_ptr, app::XmlSchema* parent_schema))
    IL2CPP_REGISTER_METHOD(0x01CA91D0, void, ctor, (app::XmlSchemaGroup * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaGroup
