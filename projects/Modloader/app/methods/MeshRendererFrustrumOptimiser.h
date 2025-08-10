#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeshRendererFrustrumOptimiser.h>

namespace app::classes::MeshRendererFrustrumOptimiser {
    IL2CPP_REGISTER_METHOD(0x009EB2E0, void, ctor, app::MeshRendererFrustrumOptimiser* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x009EB3B0, void, OnFrustumEnter, app::MeshRendererFrustrumOptimiser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EB4C0, void, OnFrustumExit, app::MeshRendererFrustrumOptimiser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E7A20, bool, get_InsideFrustum, app::MeshRendererFrustrumOptimiser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EB5D0, app::Bounds, get_Bounds, app::MeshRendererFrustrumOptimiser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, app::MeshRendererFrustrumOptimiser* this_ptr)
} // namespace app::classes::MeshRendererFrustrumOptimiser
