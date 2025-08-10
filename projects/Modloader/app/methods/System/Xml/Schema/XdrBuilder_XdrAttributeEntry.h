#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry.h>
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>

namespace app::classes::System::Xml::Schema::XdrBuilder_XdrAttributeEntry {
    IL2CPP_REGISTER_METHOD(
        0x02232500,
        void,
        ctor_1,
        app::XdrBuilder_XdrAttributeEntry* this_ptr,
        app::SchemaNames_Token__Enum a,
        app::XmlTokenizedType__Enum ttype,
        app::XdrBuilder_XdrBuildFunction* build
    )
    IL2CPP_REGISTER_METHOD(
        0x02232540,
        void,
        ctor_2,
        app::XdrBuilder_XdrAttributeEntry* this_ptr,
        app::SchemaNames_Token__Enum a,
        app::XmlTokenizedType__Enum ttype,
        int32_t schema_flags,
        app::XdrBuilder_XdrBuildFunction* build
    )
} // namespace app::classes::System::Xml::Schema::XdrBuilder_XdrAttributeEntry
