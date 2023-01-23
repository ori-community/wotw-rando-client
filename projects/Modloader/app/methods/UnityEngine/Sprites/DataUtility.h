#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Sprites::DataUtility {
    IL2CPP_REGISTER_METHOD(0x02C63300, app::Vector4, GetInnerUV, (app::Sprite * sprite))
    IL2CPP_REGISTER_METHOD(0x02C63390, app::Vector4, GetOuterUV, (app::Sprite * sprite))
    IL2CPP_REGISTER_METHOD(0x02C63420, app::Vector4, GetPadding, (app::Sprite * sprite))
    IL2CPP_REGISTER_METHOD(0x02C634B0, app::Vector2, GetMinSize, (app::Sprite * sprite))
} // namespace app::classes::UnityEngine::Sprites::DataUtility
