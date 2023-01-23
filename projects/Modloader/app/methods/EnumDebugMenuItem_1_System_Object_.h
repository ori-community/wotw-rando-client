#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EnumDebugMenuItem_1_System_Object_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::EnumDebugMenuItem_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Text, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HelpText, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Func_1_String_*, get_DynamicText, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DynamicText, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E2930, void, ctor_2, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::String* path, app::String* text, app::Func_1_Object_* getter, app::Action_1_Object_* setter, app::String* help, bool should_show_only_selected))
    IL2CPP_REGISTER_METHOD(0x019E2AB0, bool, Draw, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E2CC0, void, OnSelectedFixedUpdate, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E2350, void, ResetHold, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E2360, void, UpdateHold, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E2F10, void, IncrementValue, (app::EnumDebugMenuItem_1_System_Object_ * this_ptr, int32_t delta))
    IL2CPP_REGISTER_METHOD(0x019E32D0, void, cctor, ())
} // namespace app::classes::EnumDebugMenuItem_1_System_Object_
