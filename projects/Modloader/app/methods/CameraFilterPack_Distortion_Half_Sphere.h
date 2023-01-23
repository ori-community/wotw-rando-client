#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Half_Sphere.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Half_Sphere {
    IL2CPP_REGISTER_METHOD(0x024E8DC0, app::Material*, get_material, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8FA0, void, Start, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9120, void, OnRenderImage, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E9570, void, OnValidate, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9610, void, Update, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E96B0, void, OnDisable, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9790, void, ctor, (app::CameraFilterPack_Distortion_Half_Sphere * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Half_Sphere
