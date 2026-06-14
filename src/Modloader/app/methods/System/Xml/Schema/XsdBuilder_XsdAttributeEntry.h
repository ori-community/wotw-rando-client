#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry.h>
#include <Modloader/app/structs/XsdBuilder_XsdBuildFunction.h>

namespace app::classes::System::Xml::Schema::XsdBuilder_XsdAttributeEntry {
    IL2CPP_REGISTER_METHOD(
        0x0091DD30,
        void,
        ctor,
        app::XsdBuilder_XsdAttributeEntry* this_ptr,
        app::SchemaNames_Token__Enum a,
        app::XsdBuilder_XsdBuildFunction* build
    )
}
