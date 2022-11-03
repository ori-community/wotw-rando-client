#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Paper2 {
    IL2CPP_REGISTER_METHOD(0x024F9360, app::Material*, get_material, (app::CameraFilterPack_Drawing_Paper2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9540, void, Start, (app::CameraFilterPack_Drawing_Paper2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F96C0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Paper2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Drawing_Paper2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9BA0, void, OnDisable, (app::CameraFilterPack_Drawing_Paper2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9C80, void, ctor, (app::CameraFilterPack_Drawing_Paper2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Paper2
