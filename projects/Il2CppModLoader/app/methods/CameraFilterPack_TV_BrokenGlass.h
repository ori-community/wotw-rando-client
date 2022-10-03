#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_BrokenGlass {
    IL2CPP_REGISTER_METHOD(0x020E5E80, app::Material*, get_material, (app::CameraFilterPack_TV_BrokenGlass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E6060, void, Start, (app::CameraFilterPack_TV_BrokenGlass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E61E0, void, OnRenderImage, (app::CameraFilterPack_TV_BrokenGlass * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_BrokenGlass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E6540, void, OnDisable, (app::CameraFilterPack_TV_BrokenGlass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E6620, void, ctor, (app::CameraFilterPack_TV_BrokenGlass * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_BrokenGlass
