#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NumericDebugMenuItem_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Text, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HelpText, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_Value, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Value, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_*, get_DynamicText, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D12330, void, ctor_2, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::String* path, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01D13690, bool, Draw, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D12600, void, ResetHold, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D12610, void, UpdateHold, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D138B0, void, ctor_3, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr, app::String* path, app::String* text, app::Func_1_Object_* getter, app::Action_1_Object_* setter, app::Object* min, app::Object* max, app::Object* _speed, app::String* help, app::Func_1_String_* text_getter, bool should_show_only_selected))
    IL2CPP_REGISTER_METHOD(0x01D13AA0, void, UpdateWithSetter, (app::NumericDebugMenuItem_1_System_Object_ * this_ptr))
} // namespace app::classes::NumericDebugMenuItem_1_System_Object_
