#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Lighten.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Lighten {
    IL2CPP_REGISTER_METHOD(0x02750C30, app::Material*, get_material, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02750E10, void, Start, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027511D0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blend2Camera_Lighten* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x027515C0, void, OnValidate, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027518B0, void, Update, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02751940, void, OnEnable, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02751C10, void, OnDisable, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02751E00, void, ctor, app::CameraFilterPack_Blend2Camera_Lighten* this_ptr)
} // namespace app::classes::CameraFilterPack_Blend2Camera_Lighten
