#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TexturesPool.h>
#include <Modloader/app/structs/TexturePoolEntity.h>

namespace app::classes::Moon::ArtOptimization::TexturesPool {
    IL2CPP_REGISTER_METHOD(0x00CB30D0, void, ctor, (app::TexturesPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB3240, app::TexturePoolEntity*, Get, (app::TexturesPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB33E0, void, Back, (app::TexturesPool * this_ptr, app::TexturePoolEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00CB34A0, void, Dump, (app::TexturesPool * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::TexturesPool
