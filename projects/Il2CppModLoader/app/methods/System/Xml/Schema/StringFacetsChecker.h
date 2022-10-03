#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::StringFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x01ABA6E0, app::Regex*, get_LanguagePattern, ())
    IL2CPP_REGISTER_METHOD(0x01ABA870, app::Exception*, CheckValueFacets_1, (app::StringFacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x01ABA900, app::Exception*, CheckValueFacets_2, (app::StringFacetsChecker * this_ptr, app::String* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x01ABA920, app::Exception*, CheckValueFacets_3, (app::StringFacetsChecker * this_ptr, app::String* value, app::XmlSchemaDatatype* datatype, bool verify_uri))
    IL2CPP_REGISTER_METHOD(0x01ABAE70, bool, MatchEnumeration_1, (app::StringFacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x01ABAF00, bool, MatchEnumeration_2, (app::StringFacetsChecker * this_ptr, app::String* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x01ABB110, app::Exception*, CheckBuiltInFacets, (app::StringFacetsChecker * this_ptr, app::String* s, app::XmlTypeCode__Enum type_code, bool verify_uri))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StringFacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::StringFacetsChecker
