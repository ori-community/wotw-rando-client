#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexBoyerMoore.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::RegularExpressions::RegexBoyerMoore {
    IL2CPP_REGISTER_METHOD(0x025878B0, void, ctor, (app::RegexBoyerMoore * this_ptr, app::String* pattern, bool case_insensitive, bool right_to_left, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x02587FB0, bool, MatchPattern, (app::RegexBoyerMoore * this_ptr, app::String* text, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02588160, bool, IsMatch, (app::RegexBoyerMoore * this_ptr, app::String* text, int32_t index, int32_t beglimit, int32_t endlimit))
    IL2CPP_REGISTER_METHOD(0x025881F0, int32_t, Scan, (app::RegexBoyerMoore * this_ptr, app::String* text, int32_t index, int32_t beglimit, int32_t endlimit))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, ToString, (app::RegexBoyerMoore * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::RegexBoyerMoore
