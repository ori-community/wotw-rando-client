#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/RegexFC.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::RegularExpressions::RegexFC {
    IL2CPP_REGISTER_METHOD(0x02591160, void, ctor_1, app::RegexFC* this_ptr, bool nullable)
    IL2CPP_REGISTER_METHOD(0x025912B0, void, ctor_2, app::RegexFC* this_ptr, char16_t ch, bool not_1, bool nullable, bool case_insensitive)
    IL2CPP_REGISTER_METHOD(0x02591490, void, ctor_3, app::RegexFC* this_ptr, app::String* char_class, bool nullable, bool case_insensitive)
    IL2CPP_REGISTER_METHOD(0x02591560, bool, AddFC, app::RegexFC* this_ptr, app::RegexFC* fc, bool concatenate)
    IL2CPP_REGISTER_METHOD(0x02591610, app::String*, GetFirstChars, app::RegexFC* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x00533160, bool, IsCaseInsensitive, app::RegexFC* this_ptr)
} // namespace app::classes::System::Text::RegularExpressions::RegexFC
