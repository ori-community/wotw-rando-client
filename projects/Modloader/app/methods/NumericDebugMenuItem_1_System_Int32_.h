#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Func_1_Int32_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/NumericDebugMenuItem_1_System_Int32_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NumericDebugMenuItem_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12330, void, ctor_2, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::String* path, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x01D13030,
        void,
        ctor_3,
        app::NumericDebugMenuItem_1_System_Int32_* this_ptr,
        app::String* path,
        app::String* text,
        app::Func_1_Int32_* getter,
        app::Action_1_Int32_* setter,
        int32_t min,
        int32_t max,
        int32_t _speed,
        app::String* help,
        app::Func_1_String_* text_getter,
        bool should_show_only_selected
    )
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Value, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Value, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D12FB0, void, UpdateHold, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12FA0, void, ResetHold, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Text, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HelpText, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12D50, bool, Draw, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::Rect rect, bool selected)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_*, get_DynamicText, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, app::NumericDebugMenuItem_1_System_Int32_* this_ptr, app::Func_1_String_* value)
    IL2CPP_REGISTER_METHOD(0x01D13220, void, UpdateWithSetter, app::NumericDebugMenuItem_1_System_Int32_* this_ptr)
} // namespace app::classes::NumericDebugMenuItem_1_System_Int32_
