#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Oculus_ThermaVision.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Oculus_ThermaVision {
    IL2CPP_REGISTER_METHOD(0x02486E40, app::Material*, get_material, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02487020, void, Start, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024871A0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Oculus_ThermaVision* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02487570, void, OnValidate, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02487610, void, Update, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024876B0, void, OnDisable, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02487790, void, ctor, app::CameraFilterPack_Oculus_ThermaVision* this_ptr)
} // namespace app::classes::CameraFilterPack_Oculus_ThermaVision
