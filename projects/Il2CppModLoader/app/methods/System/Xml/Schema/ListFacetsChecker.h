#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::ListFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x016CD2E0, app::Exception *, CheckValueFacets, (app::ListFacetsChecker * this_ptr, app::Object * value, app::XmlSchemaDatatype * datatype))
    IL2CPP_REGISTER_METHOD(0x016CD840, bool, MatchEnumeration, (app::ListFacetsChecker * this_ptr, app::Object * value, app::ArrayList * enumeration, app::XmlSchemaDatatype * datatype))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListFacetsChecker * this_ptr))
}
