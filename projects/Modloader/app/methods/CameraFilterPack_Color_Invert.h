#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Color_Invert {
    IL2CPP_REGISTER_METHOD(0x024DA180, app::Material*, get_material, (app::CameraFilterPack_Color_Invert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DA360, void, Start, (app::CameraFilterPack_Color_Invert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DA4B0, void, OnRenderImage, (app::CameraFilterPack_Color_Invert * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Color_Invert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DA7A0, void, OnDisable, (app::CameraFilterPack_Color_Invert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Color_Invert * this_ptr))
} // namespace app::classes::CameraFilterPack_Color_Invert
