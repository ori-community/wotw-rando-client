#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/RegexBoyerMoore.h>
#include <Modloader/app/structs/RegexPrefix.h>

namespace app::classes::System::Text::RegularExpressions::RegexCode {
    IL2CPP_REGISTER_METHOD(0x02590FD0, void, ctor, (app::RegexCode * this_ptr, app::Int32__Array* codes, app::List_1_System_String_* stringlist, int32_t trackcount, app::Hashtable* caps, int32_t capsize, app::RegexBoyerMoore* bm_prefix, app::RegexPrefix* fc_prefix, int32_t anchors, bool right_to_left))
    IL2CPP_REGISTER_METHOD(0x02591100, bool, OpcodeBacktracks, (int32_t op))
} // namespace app::classes::System::Text::RegularExpressions::RegexCode
