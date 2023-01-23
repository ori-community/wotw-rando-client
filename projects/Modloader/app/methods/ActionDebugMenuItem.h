#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActionDebugMenuItem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Func_1_String_.h>

namespace app::classes::ActionDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, ctor_1, (app::ActionDebugMenuItem * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x004C49E0, void, ctor_2, (app::ActionDebugMenuItem * this_ptr, app::String* path, app::String* name, app::Func_1_Boolean_* func))
    IL2CPP_REGISTER_METHOD(0x004C4A90, void, ctor_3, (app::ActionDebugMenuItem * this_ptr, app::String* path, app::String* name, app::String* help_text, app::Func_1_Boolean_* func))
    IL2CPP_REGISTER_METHOD(0x004C4B50, bool, Draw, (app::ActionDebugMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x004C4CE0, void, OnSelected, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C4CF0, void, OnSelectedFixedUpdate, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Func_1_String_*, get_DynamicText, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DynamicText, (app::ActionDebugMenuItem * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Text, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (app::ActionDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_HelpText, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_HelpText, (app::ActionDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Path, (app::ActionDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Path, (app::ActionDebugMenuItem * this_ptr, app::String* value))
} // namespace app::classes::ActionDebugMenuItem
