#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Numeric2FacetsChecker {
    IL2CPP_REGISTER_METHOD(0x016D2610, app::Exception*, CheckValueFacets_1, (app::Numeric2FacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016D26A0, app::Exception*, CheckValueFacets_2, (app::Numeric2FacetsChecker * this_ptr, double value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016D2D40, app::Exception*, CheckValueFacets_3, (app::Numeric2FacetsChecker * this_ptr, float value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016D2D60, bool, MatchEnumeration_1, (app::Numeric2FacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016D2E10, bool, MatchEnumeration_2, (app::Numeric2FacetsChecker * this_ptr, double value, app::ArrayList* enumeration, app::XmlValueConverter* value_converter))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Numeric2FacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::Numeric2FacetsChecker
