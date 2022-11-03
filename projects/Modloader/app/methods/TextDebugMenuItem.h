#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::TextDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x010E7BB0, app::String*, get_Text, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::TextDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x010E7C40, app::String*, get_HelpText, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_HelpText, (app::TextDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7CD0, void, ctor_2, (app::TextDebugMenuItem * this_ptr, app::String* path, app::String* text, app::String* help_text, app::Func_1_String_* text_getter, app::Func_1_String_* help_getter))
    IL2CPP_REGISTER_METHOD(0x010E7CF0, void, ctor_3, (app::TextDebugMenuItem * this_ptr, app::String* path, app::String* text, app::String* help_text, app::Func_1_String_* help_getter))
    IL2CPP_REGISTER_METHOD(0x010E7D10, void, ctor_4, (app::TextDebugMenuItem * this_ptr, app::String* path, app::Func_1_String_* text_getter, app::String* help_text, app::Func_1_String_* help_getter))
    IL2CPP_REGISTER_METHOD(0x010E7D30, bool, Draw, (app::TextDebugMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_*, get_DynamicText, (app::TextDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (app::TextDebugMenuItem * this_ptr, app::Func_1_String_* value))
} // namespace app::classes::TextDebugMenuItem
