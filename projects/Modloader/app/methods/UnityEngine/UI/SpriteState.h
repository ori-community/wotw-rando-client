#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/SpriteState__Boxed.h>

namespace app::classes::UnityEngine::UI::SpriteState {
    IL2CPP_REGISTER_METHOD(0x001D9820, app::Sprite*, get_highlightedSprite, app::SpriteState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_highlightedSprite, app::SpriteState__Boxed* this_ptr, app::Sprite* value)
    IL2CPP_REGISTER_METHOD(0x001FBB90, app::Sprite*, get_pressedSprite, app::SpriteState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_pressedSprite, app::SpriteState__Boxed* this_ptr, app::Sprite* value)
    IL2CPP_REGISTER_METHOD(0x001FBBA0, app::Sprite*, get_disabledSprite, app::SpriteState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_disabledSprite, app::SpriteState__Boxed* this_ptr, app::Sprite* value)
    IL2CPP_REGISTER_METHOD(0x001FBF30, bool, Equals, app::SpriteState__Boxed* this_ptr, app::SpriteState other)
} // namespace app::classes::UnityEngine::UI::SpriteState
