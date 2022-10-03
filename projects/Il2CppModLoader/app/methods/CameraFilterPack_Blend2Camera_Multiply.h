#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Multiply {
    IL2CPP_REGISTER_METHOD(0x02757AD0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02757CB0, void, Start, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02758070, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02758460, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02758750, void, Update, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027587E0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02758AB0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02758CA0, void, ctor, (app::CameraFilterPack_Blend2Camera_Multiply * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Multiply
