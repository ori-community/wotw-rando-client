#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_ColorBurn {
    IL2CPP_REGISTER_METHOD(0x02744730, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02744910, void, Start, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02744CD0, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x027450C0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027453B0, void, Update, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02745440, void, OnEnable, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02745710, void, OnDisable, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02745900, void, ctor, (app::CameraFilterPack_Blend2Camera_ColorBurn * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_ColorBurn
