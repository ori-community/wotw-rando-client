#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::BinaryFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x019A7FE0, app::Exception*, CheckValueFacets_1, (app::BinaryFacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x019A80C0, app::Exception*, CheckValueFacets_2, (app::BinaryFacetsChecker * this_ptr, app::Byte__Array* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x019A8580, bool, MatchEnumeration_1, (app::BinaryFacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x019A8670, bool, MatchEnumeration_2, (app::BinaryFacetsChecker * this_ptr, app::Byte__Array* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BinaryFacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::BinaryFacetsChecker
