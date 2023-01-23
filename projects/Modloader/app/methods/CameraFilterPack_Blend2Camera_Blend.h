#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Blend.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Blend {
    IL2CPP_REGISTER_METHOD(0x027415A0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02741780, void, Start, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02741B40, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02741EA0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02742180, void, Update, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02742210, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027424E0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027426D0, void, ctor, (app::CameraFilterPack_Blend2Camera_Blend * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Blend
