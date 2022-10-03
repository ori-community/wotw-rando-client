#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_AuraDistortion {
    IL2CPP_REGISTER_METHOD(0x020F4CD0, app::Material*, get_material, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F4EB0, void, Start, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5040, void, OnRenderImage, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F5490, void, OnValidate, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5540, void, Update, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5620, void, OnDisable, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F4C90, void, ctor, (app::CameraFilterPack_Vision_AuraDistortion * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_AuraDistortion
