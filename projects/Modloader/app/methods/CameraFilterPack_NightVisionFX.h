#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_NightVisionFX {
    IL2CPP_REGISTER_METHOD(0x024807A0, app::Material*, get_material, (app::CameraFilterPack_NightVisionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480980, void, Start, (app::CameraFilterPack_NightVisionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480AD0, void, OnRenderImage, (app::CameraFilterPack_NightVisionFX * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024811E0, void, Update, (app::CameraFilterPack_NightVisionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02481640, void, OnDisable, (app::CameraFilterPack_NightVisionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02481720, void, ctor, (app::CameraFilterPack_NightVisionFX * this_ptr))
} // namespace app::classes::CameraFilterPack_NightVisionFX
