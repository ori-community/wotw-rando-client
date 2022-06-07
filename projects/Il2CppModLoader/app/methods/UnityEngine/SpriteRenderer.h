#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SpriteRenderer {
    IL2CPP_REGISTER_METHOD(0x02C63160, app::Color, get_color, (app::SpriteRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C631E0, void, set_color, (app::SpriteRenderer * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02C63240, void, get_color_Injected, (app::SpriteRenderer * this_ptr, app::Color * ret))
    IL2CPP_REGISTER_METHOD(0x02C632A0, void, set_color_Injected, (app::SpriteRenderer * this_ptr, app::Color * value))
}
