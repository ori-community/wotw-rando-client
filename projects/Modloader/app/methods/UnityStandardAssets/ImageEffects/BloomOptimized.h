#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BloomOptimized.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::BloomOptimized {
    IL2CPP_REGISTER_METHOD(0x025152C0, bool, CheckResources, (app::BloomOptimized * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02515310, void, OnDisable, (app::BloomOptimized * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025153F0, void, OnRenderImage, (app::BloomOptimized * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02515AF0, void, ctor, (app::BloomOptimized * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::BloomOptimized
