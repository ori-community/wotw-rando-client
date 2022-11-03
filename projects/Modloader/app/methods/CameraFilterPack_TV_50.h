#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_50 {
    IL2CPP_REGISTER_METHOD(0x020E2E40, app::Material*, get_material, (app::CameraFilterPack_TV_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3020, void, Start, (app::CameraFilterPack_TV_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3170, void, OnRenderImage, (app::CameraFilterPack_TV_50 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3460, void, OnDisable, (app::CameraFilterPack_TV_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_TV_50 * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_50
