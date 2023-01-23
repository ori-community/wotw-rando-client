#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Glow_Glow.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Glow_Glow {
    IL2CPP_REGISTER_METHOD(0x02478470, app::Material*, get_material, (app::CameraFilterPack_Glow_Glow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02478650, void, Start, (app::CameraFilterPack_Glow_Glow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024787C0, void, OnRenderImage, (app::CameraFilterPack_Glow_Glow * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02478F70, void, OnValidate, (app::CameraFilterPack_Glow_Glow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479000, void, Update, (app::CameraFilterPack_Glow_Glow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024790A0, void, OnDisable, (app::CameraFilterPack_Glow_Glow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479180, void, ctor, (app::CameraFilterPack_Glow_Glow * this_ptr))
} // namespace app::classes::CameraFilterPack_Glow_Glow
