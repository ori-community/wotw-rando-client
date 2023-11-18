#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/FacetType__Enum.h>
#include <Modloader/app/structs/XmlSchemaFacet.h>

namespace app::classes::System::Xml::Schema::XmlSchemaFacet {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Value, (app::XmlSchemaFacet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Value, (app::XmlSchemaFacet * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsFixed, (app::XmlSchemaFacet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA8E40, void, set_IsFixed, (app::XmlSchemaFacet * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::FacetType__Enum, get_FacetType, (app::XmlSchemaFacet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_FacetType, (app::XmlSchemaFacet * this_ptr, app::FacetType__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaFacet * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaFacet
