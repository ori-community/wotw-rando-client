#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_AAA_WaterDrop {
    IL2CPP_REGISTER_METHOD(0x0273E0E0, app::Material *, get_material, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E2C0, void, Start, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E460, void, OnRenderImage, (app::CameraFilterPack_AAA_WaterDrop * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0273E790, void, OnValidate, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E830, void, Update, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E8D0, void, OnDisable, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E9B0, void, ctor, (app::CameraFilterPack_AAA_WaterDrop * this_ptr))
}
