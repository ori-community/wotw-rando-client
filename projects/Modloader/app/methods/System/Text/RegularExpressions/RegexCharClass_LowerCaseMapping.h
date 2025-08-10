#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping__Boxed.h>

namespace app::classes::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping {
    IL2CPP_REGISTER_METHOD(
        0x001FA1F0,
        void,
        ctor,
        app::RegexCharClass_LowerCaseMapping__Boxed* this_ptr,
        char16_t ch_min,
        char16_t ch_max,
        int32_t lc_op,
        int32_t data
    )
}
