#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::CachedCodeEntry {
    IL2CPP_REGISTER_METHOD(0x02580B00, void, ctor, (app::CachedCodeEntry * this_ptr, app::String* key, app::Hashtable* capnames, app::String__Array* capslist, app::RegexCode* code, app::Hashtable* caps, int32_t capsize, app::ExclusiveReference* runner, app::SharedReference* repl))
}
