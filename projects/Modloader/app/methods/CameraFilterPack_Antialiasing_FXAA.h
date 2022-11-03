#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Antialiasing_FXAA {
    IL2CPP_REGISTER_METHOD(0x0273F360, app::Material*, get_material, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F540, void, Start, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F690, void, OnRenderImage, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F9F0, void, OnDisable, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Antialiasing_FXAA * this_ptr))
} // namespace app::classes::CameraFilterPack_Antialiasing_FXAA
