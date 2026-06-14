#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Screen.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Screen {
    IL2CPP_REGISTER_METHOD(0x0275DB40, app::Material*, get_material, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0275DD20, void, Start, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0275E0E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blend2Camera_Screen* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x0275E4D0, void, OnValidate, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0275E7C0, void, Update, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0275E850, void, OnEnable, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0275EB20, void, OnDisable, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0275ED10, void, ctor, app::CameraFilterPack_Blend2Camera_Screen* this_ptr)
} // namespace app::classes::CameraFilterPack_Blend2Camera_Screen
