#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::DepthOfField {
    IL2CPP_REGISTER_METHOD(0x0251FF20, bool, CheckResources, (app::DepthOfField * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251FFA0, void, OnEnable, (app::DepthOfField * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025200D0, void, OnDisable, (app::DepthOfField * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02520250, void, ReleaseComputeResources, (app::DepthOfField * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025202A0, void, CreateComputeResources, (app::DepthOfField * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025205D0, float, FocalDistance01, (app::DepthOfField * this_ptr, float world_dist))
    IL2CPP_REGISTER_METHOD(0x02520A00, void, WriteCoc, (app::DepthOfField * this_ptr, app::RenderTexture* from_to, bool fg_dilate))
    IL2CPP_REGISTER_METHOD(0x02521150, void, OnRenderImage, (app::DepthOfField * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02523590, void, ctor, (app::DepthOfField * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::DepthOfField
