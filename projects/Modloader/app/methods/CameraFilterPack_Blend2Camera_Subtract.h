#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Subtract {
    IL2CPP_REGISTER_METHOD(0x02760F60, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02761140, void, Start, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02761500, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x027618F0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02761BE0, void, Update, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02761C70, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02761F40, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02762130, void, ctor, (app::CameraFilterPack_Blend2Camera_Subtract * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Subtract
