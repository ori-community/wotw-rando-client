#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TexturePoolEntity.h>
#include <Modloader/app/structs/TexturesPool.h>

namespace app::classes::Moon::ArtOptimization::TexturePoolEntity {
    IL2CPP_REGISTER_METHOD(0x00CB2DB0, void, ctor, app::TexturePoolEntity* this_ptr, app::TexturesPool* pool)
    IL2CPP_REGISTER_METHOD(0x00CB2F70, void, Release, app::TexturePoolEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB3030, void, Clear, app::TexturePoolEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Texture2D*, get_Texture, app::TexturePoolEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Texture, app::TexturePoolEntity* this_ptr, app::Texture2D* value)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_InUse, app::TexturePoolEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_InUse, app::TexturePoolEntity* this_ptr, bool value)
} // namespace app::classes::Moon::ArtOptimization::TexturePoolEntity
