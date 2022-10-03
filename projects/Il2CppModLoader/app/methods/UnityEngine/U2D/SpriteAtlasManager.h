#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::U2D::SpriteAtlasManager {
    IL2CPP_REGISTER_METHOD(0x02C6FEF0, bool, RequestAtlas, (app::String * tag))
    IL2CPP_REGISTER_METHOD(0x02C70150, void, add_atlasRegistered, (app::Action_1_UnityEngine_U2D_SpriteAtlas_ * value))
    IL2CPP_REGISTER_METHOD(0x02C70290, void, remove_atlasRegistered, (app::Action_1_UnityEngine_U2D_SpriteAtlas_ * value))
    IL2CPP_REGISTER_METHOD(0x02C703D0, void, PostRegisteredAtlas, (app::SpriteAtlas * sprite_atlas))
    IL2CPP_REGISTER_METHOD(0x02C704C0, void, Register, (app::SpriteAtlas * sprite_atlas))
    IL2CPP_REGISTER_METHODINFO(0x04730818, SpriteAtlasManager_Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C70510, void, cctor, ())
} // namespace app::classes::UnityEngine::U2D::SpriteAtlasManager
