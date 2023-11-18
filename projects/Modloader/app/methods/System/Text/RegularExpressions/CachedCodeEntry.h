#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedCodeEntry.h>
#include <Modloader/app/structs/ExclusiveReference.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/SharedReference.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Text::RegularExpressions::CachedCodeEntry {
    IL2CPP_REGISTER_METHOD(0x02580B00, void, ctor, (app::CachedCodeEntry * this_ptr, app::String* key, app::Hashtable* capnames, app::String__Array* capslist, app::RegexCode* code, app::Hashtable* caps, int32_t capsize, app::ExclusiveReference* runner, app::SharedReference* repl))
}
