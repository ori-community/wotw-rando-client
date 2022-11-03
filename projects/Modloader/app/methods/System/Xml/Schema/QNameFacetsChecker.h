#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::QNameFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x016E53A0, app::Exception*, CheckValueFacets_1, (app::QNameFacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016E5520, app::Exception*, CheckValueFacets_2, (app::QNameFacetsChecker * this_ptr, app::XmlQualifiedName* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016E5A10, bool, MatchEnumeration_1, (app::QNameFacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016E5B90, bool, MatchEnumeration_2, (app::QNameFacetsChecker * this_ptr, app::XmlQualifiedName* value, app::ArrayList* enumeration))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QNameFacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::QNameFacetsChecker
