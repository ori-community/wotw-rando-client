#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::MatchSparse {
    IL2CPP_REGISTER_METHOD(0x02584070, void, ctor, (app::MatchSparse * this_ptr, app::Regex* regex, app::Hashtable* caps, int32_t capcount, app::String* text, int32_t begpos, int32_t len, int32_t startpos))
    IL2CPP_REGISTER_METHOD(0x02584170, app::GroupCollection*, get_Groups, (app::MatchSparse * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::MatchSparse
