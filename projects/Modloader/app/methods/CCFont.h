#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCFont.h>
#include <Modloader/app/structs/CCFont_Char.h>

namespace app::classes::CCFont {
    IL2CPP_REGISTER_METHOD(0x0315ACC0, app::CCFont_Char*, get_Item, app::CCFont* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x02581530, bool, get_IsValid, app::CCFont* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315AF20, void, UpdateAllCCText, app::CCFont* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::CCFont* this_ptr)
} // namespace app::classes::CCFont
