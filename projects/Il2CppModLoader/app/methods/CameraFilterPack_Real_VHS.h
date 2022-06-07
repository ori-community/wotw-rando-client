#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Real_VHS {
    IL2CPP_REGISTER_METHOD(0x0248A920, app::Material *, get_material, (app::CameraFilterPack_Real_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248AB00, void, Start, (app::CameraFilterPack_Real_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248ACB0, app::Texture2D *, GetRTPixels, (app::Texture2D * t, app::RenderTexture * rt, int32_t sx, int32_t sy))
    IL2CPP_REGISTER_METHOD(0x0248AE40, void, OnRenderImage, (app::CameraFilterPack_Real_VHS * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Real_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248B1C0, void, OnDisable, (app::CameraFilterPack_Real_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248B2A0, void, ctor, (app::CameraFilterPack_Real_VHS * this_ptr))
}
