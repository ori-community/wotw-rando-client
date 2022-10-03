#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_LinearBurn {
    IL2CPP_REGISTER_METHOD(0x02753110, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027532F0, void, Start, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027536B0, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02753AA0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02753D90, void, Update, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02753E20, void, OnEnable, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027540F0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027542E0, void, ctor, (app::CameraFilterPack_Blend2Camera_LinearBurn * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_LinearBurn
