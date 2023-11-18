#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Special_Bubble.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Special_Bubble {
    IL2CPP_REGISTER_METHOD(0x020E24C0, app::Material*, get_material, (app::CameraFilterPack_Special_Bubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E26A0, void, Start, (app::CameraFilterPack_Special_Bubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2820, void, OnRenderImage, (app::CameraFilterPack_Special_Bubble * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E2BF0, void, OnValidate, (app::CameraFilterPack_Special_Bubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2C90, void, Update, (app::CameraFilterPack_Special_Bubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2D30, void, OnDisable, (app::CameraFilterPack_Special_Bubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2E10, void, ctor, (app::CameraFilterPack_Special_Bubble * this_ptr))
} // namespace app::classes::CameraFilterPack_Special_Bubble
