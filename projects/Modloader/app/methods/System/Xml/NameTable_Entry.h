#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameTable_Entry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::NameTable_Entry {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::NameTable_Entry * this_ptr, app::String* str, int32_t hash_code, app::NameTable_Entry* next))
}
