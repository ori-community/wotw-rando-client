#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/VolatileDebugMenuLog.h>

namespace app::classes::VolatileDebugMenuLog {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Path, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Path, (app::VolatileDebugMenuLog * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Text, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Text, (app::VolatileDebugMenuLog * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_HelpText, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_HelpText, (app::VolatileDebugMenuLog * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x008C2DD0, void, Awake, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C2FB0, bool, Draw, (app::VolatileDebugMenuLog * this_ptr, app::Rect rect, bool is_selected))
    IL2CPP_REGISTER_METHOD(0x008C3530, void, OnSelected, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C35F0, void, OnSelectedUpdate, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3860, void, OnSelectedFixedUpdate, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3970, void, MoveSelectionDown, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3A30, void, MoveSelectionUp, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3AE0, void, ResetHold, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Func_1_String_*, get_DynamicText, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_DynamicText, (app::VolatileDebugMenuLog * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Active, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Active, (app::VolatileDebugMenuLog * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_List_1_IDebugMenuItem_*, get_Items, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Items, (app::VolatileDebugMenuLog * this_ptr, app::List_1_List_1_IDebugMenuItem_* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddMenuItem, (app::VolatileDebugMenuLog * this_ptr, app::String* path, app::IDebugMenuItem* item, int32_t col))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GoBackMenu, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3B00, void, Reset, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3BC0, void, Log, (app::String * text, bool should_send_telemetry))
    IL2CPP_REGISTER_METHOD(0x008C3E30, void, DeleteMessage, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VolatileDebugMenuLog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C3FF0, void, cctor, ())
} // namespace app::classes::VolatileDebugMenuLog
