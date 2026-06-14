#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugMenuPage.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Text, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, app::DebugMenuPage* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_HelpText, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_HelpText, app::DebugMenuPage* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Active, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Active, app::DebugMenuPage* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_Visible, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_Visible, app::DebugMenuPage* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Path, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Path, app::DebugMenuPage* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_List_1_IDebugMenuItem_*, get_Items, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Items, app::DebugMenuPage* this_ptr, app::List_1_List_1_IDebugMenuItem_* value)
    IL2CPP_REGISTER_METHOD(0x00DF3E10, void, ctor_1, app::DebugMenuPage* this_ptr, app::String* path, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00DF3E40, void, ctor_2, app::DebugMenuPage* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Refresh, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF41B0, void, SetScaling, float multiplier)
    IL2CPP_REGISTER_METHOD(0x00DF4280, void, Clear, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF4560, void, AddMenuItem, app::DebugMenuPage* this_ptr, app::String* path, app::IDebugMenuItem* item, int32_t col)
    IL2CPP_REGISTER_METHOD(0x00DF5160, void, CloseAllMenus, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF52E0, void, UpdateOffset, app::DebugMenuPage* this_ptr, float offset_amount)
    IL2CPP_REGISTER_METHOD(0x00DF5320, bool, Draw, app::DebugMenuPage* this_ptr, app::Rect rect, bool selected)
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, OpenPage, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00651F80, void, OnSelected, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF6100, void, Reset, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF61D0, void, ResetHold, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF61E0, void, OnSelectedUpdate, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF63D0, bool, GoBackMenu_1, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF63E0, bool, GoBackMenu_2, app::DebugMenuPage* this_ptr, bool keep_visible)
    IL2CPP_REGISTER_METHOD(0x00DF6520, void, OnSelectedFixedUpdate, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF6D50, bool, IsCursorIndexValid, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF6E20, void, ConfineCursor, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Func_1_String_*, get_DynamicText, app::DebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DynamicText, app::DebugMenuPage* this_ptr, app::Func_1_String_* value)
    IL2CPP_REGISTER_METHOD(0x00DF71D0, void, cctor, )
} // namespace app::classes::DebugMenuPage
