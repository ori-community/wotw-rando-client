#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion {
    IL2CPP_REGISTER_METHOD(0x02D61AB0, app::Material*, CreateMaterial, (app::Shader * shader))
    IL2CPP_REGISTER_METHOD(0x02D61C90, void, DestroyMaterial, (app::Material * mat))
    IL2CPP_REGISTER_METHOD(0x02D61D60, void, OnDisable, (app::ScreenSpaceAmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D61E30, void, Start, (app::ScreenSpaceAmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D61FD0, void, OnEnable, (app::ScreenSpaceAmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D62100, void, CreateMaterials, (app::ScreenSpaceAmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D62270, void, OnRenderImage, (app::ScreenSpaceAmbientOcclusion * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D62D60, void, ctor, (app::ScreenSpaceAmbientOcclusion * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion
