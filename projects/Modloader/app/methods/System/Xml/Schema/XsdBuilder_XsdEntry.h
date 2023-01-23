#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XsdBuilder_XsdEntry.h>
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction.h>
#include <Modloader/app/structs/XsdBuilder_XsdEndChildFunction.h>

namespace app::classes::System::Xml::Schema::XsdBuilder_XsdEntry {
    IL2CPP_REGISTER_METHOD(0x01C7CD70, void, ctor, (app::XsdBuilder_XsdEntry * this_ptr, app::SchemaNames_Token__Enum n, app::XsdBuilder_State__Enum state, app::XsdBuilder_State__Enum__Array* next_states, app::XsdBuilder_XsdAttributeEntry__Array* attributes, app::XsdBuilder_XsdInitFunction* init, app::XsdBuilder_XsdEndChildFunction* end, bool parse_content))
}
