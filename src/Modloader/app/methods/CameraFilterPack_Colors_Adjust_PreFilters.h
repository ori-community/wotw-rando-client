#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_PreFilters.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_Adjust_PreFilters {
    IL2CPP_REGISTER_METHOD(0x024DE600, app::Material*, get_material, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DE7E0, void, ChangeFilters, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DEE60, void, Start, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024DEF50,
        void,
        OnRenderImage,
        app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024DF790, void, OnValidate, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DF7A0, void, OnDisable, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DF880, void, ctor, app::CameraFilterPack_Colors_Adjust_PreFilters* this_ptr)
} // namespace app::classes::CameraFilterPack_Colors_Adjust_PreFilters
