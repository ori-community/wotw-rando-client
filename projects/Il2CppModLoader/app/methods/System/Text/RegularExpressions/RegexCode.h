#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexCode {
    IL2CPP_REGISTER_METHOD(0x02590FD0, void, ctor, (app::RegexCode * this_ptr, app::Int32__Array * codes, app::List_1_System_String_ * stringlist, int32_t trackcount, app::Hashtable * caps, int32_t capsize, app::RegexBoyerMoore * bm_prefix, app::RegexPrefix * fc_prefix, int32_t anchors, bool right_to_left))
    IL2CPP_REGISTER_METHOD(0x02591100, bool, OpcodeBacktracks, (int32_t op))
}
