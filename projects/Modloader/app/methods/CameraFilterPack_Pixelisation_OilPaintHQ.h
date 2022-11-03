#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Pixelisation_OilPaintHQ {
    IL2CPP_REGISTER_METHOD(0x0248A080, app::Material*, get_material, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A260, void, Start, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A3D0, void, OnRenderImage, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0248A700, void, OnValidate, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A790, void, Update, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A820, void, OnDisable, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A900, void, ctor, (app::CameraFilterPack_Pixelisation_OilPaintHQ * this_ptr))
} // namespace app::classes::CameraFilterPack_Pixelisation_OilPaintHQ
