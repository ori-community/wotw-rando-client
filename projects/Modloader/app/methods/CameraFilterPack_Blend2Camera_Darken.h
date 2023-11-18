#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Darken.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Darken {
    IL2CPP_REGISTER_METHOD(0x02746C10, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02746DF0, void, Start, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027471B0, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x027475A0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02747890, void, Update, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02747920, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02747BF0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02747DE0, void, ctor, (app::CameraFilterPack_Blend2Camera_Darken * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Darken
