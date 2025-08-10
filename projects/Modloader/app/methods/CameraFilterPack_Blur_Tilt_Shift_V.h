#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_V.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Tilt_Shift_V {
    IL2CPP_REGISTER_METHOD(0x024D74D0, app::Material*, get_material, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D76B0, void, Start, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D7820,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D7E30, void, OnValidate, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D7EC0, void, Update, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D7F60, void, OnDisable, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D68B0, void, ctor, app::CameraFilterPack_Blur_Tilt_Shift_V* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_Tilt_Shift_V
