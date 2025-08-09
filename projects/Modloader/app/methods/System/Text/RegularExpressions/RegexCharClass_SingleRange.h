#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexCharClass_SingleRange.h>

namespace app::classes::System::Text::RegularExpressions::RegexCharClass_SingleRange {
    IL2CPP_REGISTER_METHOD(0x02590F80, void, ctor, app::RegexCharClass_SingleRange* this_ptr, char16_t first, char16_t last)
}
