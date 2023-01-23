#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_Rotation.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_EXTRA_Rotation {
    IL2CPP_REGISTER_METHOD(0x024623D0, app::Material*, get_material, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024625B0, void, Start, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462730, void, OnRenderImage, (app::CameraFilterPack_EXTRA_Rotation * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02462B10, void, OnValidate, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462BB0, void, Update, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462C50, void, OnDisable, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462D30, void, ctor, (app::CameraFilterPack_EXTRA_Rotation * this_ptr))
} // namespace app::classes::CameraFilterPack_EXTRA_Rotation
