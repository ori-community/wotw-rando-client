#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/GUIText.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::GUIText {
    IL2CPP_REGISTER_METHOD(0x0319B000, app::String*, get_text, app::GUIText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0319B050, void, set_text, app::GUIText* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0319B0B0, void, set_fontSize, app::GUIText* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0319B110, void, set_fontStyle, app::GUIText* this_ptr, app::FontStyle__Enum value)
} // namespace app::classes::UnityEngine::GUIText
