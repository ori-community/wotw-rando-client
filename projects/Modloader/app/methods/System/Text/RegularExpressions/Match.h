#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::Match {
    IL2CPP_REGISTER_METHOD(0x025823A0, app::Match*, get_Empty, ())
    IL2CPP_REGISTER_METHOD(0x02582440, void, ctor_1, (app::Match * this_ptr, app::Regex* regex, int32_t capcount, app::String* text, int32_t begpos, int32_t len, int32_t startpos))
    IL2CPP_REGISTER_METHOD(0x025825E0, void, Reset, (app::Match * this_ptr, app::Regex* regex, app::String* text, int32_t textbeg, int32_t textend, int32_t textstart))
    IL2CPP_REGISTER_METHOD(0x02582670, app::GroupCollection*, get_Groups, (app::Match * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025827D0, app::Match*, NextMatch, (app::Match * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02582820, app::String*, GroupToStringImpl, (app::Match * this_ptr, int32_t groupnum))
    IL2CPP_REGISTER_METHOD(0x02582990, app::String*, LastGroupToStringImpl, (app::Match * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025829C0, void, AddMatch, (app::Match * this_ptr, int32_t cap, int32_t start, int32_t len))
    IL2CPP_REGISTER_METHOD(0x02582DA0, void, BalanceMatch, (app::Match * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02582F50, void, RemoveMatch, (app::Match * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02582F90, bool, IsMatched, (app::Match * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02583060, int32_t, MatchIndex, (app::Match * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02583150, int32_t, MatchLength, (app::Match * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02583240, void, Tidy, (app::Match * this_ptr, int32_t textpos))
    IL2CPP_REGISTER_METHOD(0x025834D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02583650, void, ctor_2, (app::Match * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047465E0, Match__ctor_1__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::Match
