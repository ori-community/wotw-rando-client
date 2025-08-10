#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>

namespace app::classes::System::Xml::Schema::XmlSchemaParticle {
    IL2CPP_REGISTER_METHOD(0x01CB9070, app::String*, get_MinOccursString, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB9150, void, set_MinOccursString, app::XmlSchemaParticle* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01CB9310, app::String*, get_MaxOccursString, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB94D0, void, set_MaxOccursString, app::XmlSchemaParticle* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01CB97B0, app::Decimal, get_MinOccurs, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB97C0, void, set_MinOccurs, app::XmlSchemaParticle* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01A6D2E0, app::Decimal, get_MaxOccurs, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB99F0, void, set_MaxOccurs, app::XmlSchemaParticle* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01CB9C90, bool, get_IsEmpty, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB9D60, app::String*, get_NameString, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB9DE0, app::XmlQualifiedName*, GetQualifiedName, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CBA060, void, ctor, app::XmlSchemaParticle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CBA120, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlSchemaParticle
