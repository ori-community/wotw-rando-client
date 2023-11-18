#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Difference.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Difference {
    IL2CPP_REGISTER_METHOD(0x027490F0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027492D0, void, Start, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02749690, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02749A80, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02749D70, void, Update, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02749E00, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274A0D0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274A2C0, void, ctor, (app::CameraFilterPack_Blend2Camera_Difference * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Difference
