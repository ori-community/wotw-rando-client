#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ListFacetsChecker.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>

namespace app::classes::System::Xml::Schema::ListFacetsChecker {
    IL2CPP_REGISTER_METHOD(
        0x016CD2E0,
        app::Exception*,
        CheckValueFacets,
        app::ListFacetsChecker* this_ptr,
        app::Object* value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016CD840,
        bool,
        MatchEnumeration,
        app::ListFacetsChecker* this_ptr,
        app::Object* value,
        app::ArrayList* enumeration,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListFacetsChecker* this_ptr)
} // namespace app::classes::System::Xml::Schema::ListFacetsChecker
