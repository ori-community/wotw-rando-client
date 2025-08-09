#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/SpriteAtlas.h>

namespace app::classes::UnityEngine::U2D::SpriteAtlas {
    IL2CPP_REGISTER_METHOD(0x02C6FE90, bool, CanBindTo, app::SpriteAtlas* this_ptr, app::Sprite* sprite)
}
