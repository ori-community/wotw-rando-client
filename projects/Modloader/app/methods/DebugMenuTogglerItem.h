#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugMenuTogglerItem.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IDebugMenuToggleable.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DebugMenuTogglerItem {
    IL2CPP_REGISTER_METHOD(0x00DF7B50, void, ctor, app::DebugMenuTogglerItem* this_ptr, app::String* path, app::IDebugMenuToggleable* toggleable)
    IL2CPP_REGISTER_METHOD(0x00DF7B60, bool, Draw, app::DebugMenuTogglerItem* this_ptr, app::Rect rect, bool selected)
    IL2CPP_REGISTER_METHOD(0x00DF7E50, app::String*, get_Text, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Text, app::DebugMenuTogglerItem* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00DF7EE0, app::String*, get_HelpText, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HelpText, app::DebugMenuTogglerItem* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Path, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, app::DebugMenuTogglerItem* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF7F70, void, OnSelectedFixedUpdate, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF8330, void, ResetHold, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF8340, void, UpdateHold, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Func_1_String_*, get_DynamicText, app::DebugMenuTogglerItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DynamicText, app::DebugMenuTogglerItem* this_ptr, app::Func_1_String_* value)
} // namespace app::classes::DebugMenuTogglerItem
