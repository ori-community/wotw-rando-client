#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/GUISettings.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUIStyle__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::GUISkin {
    IL2CPP_REGISTER_METHOD(0x029F01A0, void, ctor, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0330, void, OnEnable, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0340, void, CleanupRoots, ())
    IL2CPP_REGISTER_METHOD(0x01F25880, app::Font*, get_font, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F03D0, void, set_font, (app::GUISkin * this_ptr, app::Font* value))
    IL2CPP_REGISTER_METHOD(0x01704A60, app::GUIStyle*, get_box, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0510, void, set_box, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F1C1D0, app::GUIStyle*, get_label, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0520, void, set_label, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F1A590, app::GUIStyle*, get_textField, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0530, void, set_textField, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x024ACCC0, app::GUIStyle*, get_textArea, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0540, void, set_textArea, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::GUIStyle*, get_button, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0550, void, set_button, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F22F90, app::GUIStyle*, get_toggle, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0560, void, set_toggle, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F1A580, app::GUIStyle*, get_window, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0570, void, set_window, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x02668850, app::GUIStyle*, get_horizontalSlider, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0580, void, set_horizontalSlider, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x02668BB0, app::GUIStyle*, get_horizontalSliderThumb, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0590, void, set_horizontalSliderThumb, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x024CFE10, app::GUIStyle*, get_verticalSlider, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F05A0, void, set_verticalSlider, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x029F05B0, app::GUIStyle*, get_verticalSliderThumb, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F05C0, void, set_verticalSliderThumb, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x02668F80, app::GUIStyle*, get_horizontalScrollbar, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F05D0, void, set_horizontalScrollbar, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x029F05E0, app::GUIStyle*, get_horizontalScrollbarThumb, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F05F0, void, set_horizontalScrollbarThumb, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x029F0600, app::GUIStyle*, get_horizontalScrollbarLeftButton, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0610, void, set_horizontalScrollbarLeftButton, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F294F0, app::GUIStyle*, get_horizontalScrollbarRightButton, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0620, void, set_horizontalScrollbarRightButton, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x029F0630, app::GUIStyle*, get_verticalScrollbar, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0640, void, set_verticalScrollbar, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01BA66F0, app::GUIStyle*, get_verticalScrollbarThumb, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0650, void, set_verticalScrollbarThumb, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F26F80, app::GUIStyle*, get_verticalScrollbarUpButton, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0660, void, set_verticalScrollbarUpButton, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F26F90, app::GUIStyle*, get_verticalScrollbarDownButton, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0670, void, set_verticalScrollbarDownButton, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x01F26FA0, app::GUIStyle*, get_scrollView, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0680, void, set_scrollView, (app::GUISkin * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x02671DF0, app::GUIStyle__Array*, get_customStyles, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0690, void, set_customStyles, (app::GUISkin * this_ptr, app::GUIStyle__Array* value))
    IL2CPP_REGISTER_METHOD(0x029F06A0, app::GUISettings*, get_settings, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F06B0, app::GUIStyle*, get_error, ())
    IL2CPP_REGISTER_METHOD(0x029F0850, void, Apply, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0900, void, BuildStyleCache, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F24C0, app::GUIStyle*, GetStyle, (app::GUISkin * this_ptr, app::String* style_name))
    IL2CPP_REGISTER_METHOD(0x029F2870, app::GUIStyle*, FindStyle, (app::GUISkin * this_ptr, app::String* style_name))
    IL2CPP_REGISTER_METHOD(0x029F29F0, void, MakeCurrent, (app::GUISkin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F2B00, app::IEnumerator*, GetEnumerator, (app::GUISkin * this_ptr))
} // namespace app::classes::UnityEngine::GUISkin
