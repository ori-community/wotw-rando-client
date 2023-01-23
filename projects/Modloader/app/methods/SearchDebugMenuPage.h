#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SearchDebugMenuPage.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>

namespace app::classes::SearchDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::SearchDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, (app::SearchDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106B700, void, Awake, (app::SearchDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106B880, void, GetItems, (app::SearchDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_* items))
    IL2CPP_REGISTER_METHOD(0x0106BA10, void, ctor, (app::SearchDebugMenuPage * this_ptr))
} // namespace app::classes::SearchDebugMenuPage
