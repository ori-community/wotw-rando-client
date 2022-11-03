#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Overlay {
    IL2CPP_REGISTER_METHOD(0x02758D40, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02758F20, void, Start, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027592E0, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x027596D0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027599C0, void, Update, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02759A50, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02759D20, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02759F10, void, ctor, (app::CameraFilterPack_Blend2Camera_Overlay * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Overlay
