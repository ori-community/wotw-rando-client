#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::TouchScreenKeyboard {
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::TouchScreenKeyboard*, Open_1, (app::String * text, app::TouchScreenKeyboardType__Enum keyboard_type, bool autocorrection, bool multiline, bool secure, bool alert, app::String* text_placeholder, int32_t character_limit))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::TouchScreenKeyboard*, Open_2, (app::String * text, app::TouchScreenKeyboardType__Enum keyboard_type, bool autocorrection, bool multiline, bool secure))
    IL2CPP_REGISTER_METHOD(0x02C6A9C0, app::String*, get_text, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_text, (app::TouchScreenKeyboard * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_hideInput, (bool value))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_active, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_active, (app::TouchScreenKeyboard * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024CE020, app::TouchScreenKeyboard_Status__Enum, get_status, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_isSupported, ())
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_canGetSelection, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_canSetSelection, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C6AA40, app::RangeInt, get_selection, (app::TouchScreenKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_selection, (app::TouchScreenKeyboard * this_ptr, app::RangeInt value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_characterLimit, (app::TouchScreenKeyboard * this_ptr, int32_t value))
} // namespace app::classes::UnityEngine::TouchScreenKeyboard
