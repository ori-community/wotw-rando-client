#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Vector2DebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F28570, app::Vector2, get_Value, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010655B0, void, set_Value, (app::Vector2DebugMenuItem * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x013BAA00, void, ctor_1, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013BAA90, void, ctor_2, (app::Vector2DebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x013BAB40, bool, Draw, (app::Vector2DebugMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Text, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (app::Vector2DebugMenuItem * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Func_1_String_ *, get_DynamicText, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DynamicText, (app::Vector2DebugMenuItem * this_ptr, app::Func_1_String_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_HelpText, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_HelpText, (app::Vector2DebugMenuItem * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Path, (app::Vector2DebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Path, (app::Vector2DebugMenuItem * this_ptr, app::String * value))
}
