#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Hue {
    IL2CPP_REGISTER_METHOD(0x0274F9C0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274FBA0, void, Start, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274FF60, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02750350, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02750640, void, Update, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027506D0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027509A0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02750B90, void, ctor, (app::CameraFilterPack_Blend2Camera_Hue * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Hue
