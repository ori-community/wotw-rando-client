#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::TextMesh {
    IL2CPP_REGISTER_METHOD(0x0319D520, app::String *, get_text, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D570, void, set_text, (app::TextMesh * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0319D5D0, app::Font *, get_font, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D620, void, set_font, (app::TextMesh * this_ptr, app::Font * value))
    IL2CPP_REGISTER_METHOD(0x0319D680, int32_t, get_fontSize, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D6D0, void, set_fontSize, (app::TextMesh * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0319D730, float, get_offsetZ, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D780, void, set_offsetZ, (app::TextMesh * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0319D7E0, app::TextAlignment__Enum, get_alignment, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D830, void, set_alignment, (app::TextMesh * this_ptr, app::TextAlignment__Enum value))
    IL2CPP_REGISTER_METHOD(0x0319D890, app::TextAnchor__Enum, get_anchor, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D8E0, void, set_anchor, (app::TextMesh * this_ptr, app::TextAnchor__Enum value))
    IL2CPP_REGISTER_METHOD(0x0319D940, float, get_characterSize, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319D990, void, set_characterSize, (app::TextMesh * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0319D9F0, float, get_lineSpacing, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319DA40, void, set_lineSpacing, (app::TextMesh * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0319DAA0, float, get_tabSize, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319DAF0, void, set_tabSize, (app::TextMesh * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0319DB50, bool, get_richText, (app::TextMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319DBA0, void, set_richText, (app::TextMesh * this_ptr, bool value))
}
