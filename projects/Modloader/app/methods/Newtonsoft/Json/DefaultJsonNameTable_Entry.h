#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultJsonNameTable_Entry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::DefaultJsonNameTable_Entry {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::DefaultJsonNameTable_Entry * this_ptr, app::String* value, int32_t hash_code, app::DefaultJsonNameTable_Entry* next))
}
