#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RegexCharClass_SingleRangeComparer.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange.h>

namespace app::classes::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer {
    IL2CPP_REGISTER_METHOD(0x02590F90, int32_t, Compare, (app::RegexCharClass_SingleRangeComparer * this_ptr, app::RegexCharClass_SingleRange* x, app::RegexCharClass_SingleRange* y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RegexCharClass_SingleRangeComparer * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer
