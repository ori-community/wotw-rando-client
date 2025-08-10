#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Double_.h>
#include <Modloader/app/structs/Func_1_Double_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/NumericDebugMenuItem_1_System_Double_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NumericDebugMenuItem_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12330, void, ctor_2, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::String* path, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x01D12690,
        void,
        ctor_3,
        app::NumericDebugMenuItem_1_System_Double_* this_ptr,
        app::String* path,
        app::String* text,
        app::Func_1_Double_* getter,
        app::Action_1_Double_* setter,
        double min,
        double max,
        double _speed,
        app::String* help,
        app::Func_1_String_* text_getter,
        bool should_show_only_selected
    )
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_Value, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB30, void, set_Value, app::NumericDebugMenuItem_1_System_Double_* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Text, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HelpText, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D12390, bool, Draw, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::Rect rect, bool selected)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12600, void, ResetHold, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D12610, void, UpdateHold, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_*, get_DynamicText, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, app::NumericDebugMenuItem_1_System_Double_* this_ptr, app::Func_1_String_* value)
    IL2CPP_REGISTER_METHOD(0x01D12890, void, UpdateWithSetter, app::NumericDebugMenuItem_1_System_Double_* this_ptr)
} // namespace app::classes::NumericDebugMenuItem_1_System_Double_
