#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_BlackHole.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_BlackHole {
    IL2CPP_REGISTER_METHOD(0x024E4E50, app::Material*, get_material, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E5030, void, Start, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E51B0, void, OnRenderImage, (app::CameraFilterPack_Distortion_BlackHole * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E5600, void, OnValidate, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E56A0, void, Update, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E5740, void, OnDisable, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E5820, void, ctor, (app::CameraFilterPack_Distortion_BlackHole * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_BlackHole
