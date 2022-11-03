#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Pixelisation_OilPaint {
    IL2CPP_REGISTER_METHOD(0x02489800, app::Material*, get_material, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024899E0, void, Start, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02489B50, void, OnRenderImage, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02489E80, void, OnValidate, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02489F10, void, Update, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02489FA0, void, OnDisable, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_Pixelisation_OilPaint * this_ptr))
} // namespace app::classes::CameraFilterPack_Pixelisation_OilPaint
