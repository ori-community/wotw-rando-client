#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/SpriteRenderer.h>

namespace app::classes::UnityEngine::SpriteRenderer {
    IL2CPP_REGISTER_METHOD(0x02C63160, app::Color, get_color, app::SpriteRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C631E0, void, set_color, app::SpriteRenderer* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x02C63240, void, get_color_Injected, app::SpriteRenderer* this_ptr, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x02C632A0, void, set_color_Injected, app::SpriteRenderer* this_ptr, app::Color* value)
} // namespace app::classes::UnityEngine::SpriteRenderer
