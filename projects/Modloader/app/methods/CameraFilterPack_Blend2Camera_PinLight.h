#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_PinLight.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_PinLight {
    IL2CPP_REGISTER_METHOD(0x0275B660, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275B840, void, Start, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275BC00, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0275BFF0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275C2E0, void, Update, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275C370, void, OnEnable, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275C640, void, OnDisable, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275C830, void, ctor, (app::CameraFilterPack_Blend2Camera_PinLight * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_PinLight
