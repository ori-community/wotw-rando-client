#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_Hole.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Tilt_Shift_Hole {
    IL2CPP_REGISTER_METHOD(0x024D68F0, app::Material*, get_material, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D6AD0, void, Start, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D6C40, void, OnRenderImage, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D7280, void, OnValidate, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D7310, void, Update, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D73B0, void, OnDisable, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D7490, void, ctor, (app::CameraFilterPack_Blur_Tilt_Shift_Hole * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_Tilt_Shift_Hole
