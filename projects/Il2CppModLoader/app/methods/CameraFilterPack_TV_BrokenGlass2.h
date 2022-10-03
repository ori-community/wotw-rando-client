#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_BrokenGlass2 {
    IL2CPP_REGISTER_METHOD(0x020E6640, app::Material*, get_material, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E6820, void, Start, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E69A0, void, OnRenderImage, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E7010, void, OnDisable, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_TV_BrokenGlass2 * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_BrokenGlass2
