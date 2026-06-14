#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrBeginChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrEndChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrEntry.h>
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction.h>

namespace app::classes::System::Xml::Schema::XdrBuilder_XdrEntry {
    IL2CPP_REGISTER_METHOD(
        0x02232580,
        void,
        ctor,
        app::XdrBuilder_XdrEntry* this_ptr,
        app::SchemaNames_Token__Enum n,
        app::Int32__Array* states,
        app::XdrBuilder_XdrAttributeEntry__Array* attributes,
        app::XdrBuilder_XdrInitFunction* init,
        app::XdrBuilder_XdrBeginChildFunction* begin,
        app::XdrBuilder_XdrEndChildFunction* end,
        bool f_text
    )
}
