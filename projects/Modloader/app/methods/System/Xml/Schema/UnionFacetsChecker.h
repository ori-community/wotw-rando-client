#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnionFacetsChecker.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>

namespace app::classes::System::Xml::Schema::UnionFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x01ABD9A0, app::Exception*, CheckValueFacets, (app::UnionFacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x016CD840, bool, MatchEnumeration, (app::UnionFacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnionFacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::UnionFacetsChecker
