#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Fly_Vision.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Fly_Vision {
    IL2CPP_REGISTER_METHOD(0x024772A0, app::Material*, get_material, (app::CameraFilterPack_Fly_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477480, void, Start, (app::CameraFilterPack_Fly_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477600, void, OnRenderImage, (app::CameraFilterPack_Fly_Vision * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Fly_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477A10, void, OnDisable, (app::CameraFilterPack_Fly_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477AF0, void, ctor, (app::CameraFilterPack_Fly_Vision * this_ptr))
} // namespace app::classes::CameraFilterPack_Fly_Vision
