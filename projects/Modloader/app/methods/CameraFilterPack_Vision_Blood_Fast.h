#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Blood_Fast.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Vision_Blood_Fast {
    IL2CPP_REGISTER_METHOD(0x020F5F10, app::Material*, get_material, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F60F0, void, Start, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F6240, void, OnRenderImage, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F6610, void, OnDisable, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5EE0, void, ctor, (app::CameraFilterPack_Vision_Blood_Fast * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Blood_Fast
