#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Drawing_EnhancedComics.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_EnhancedComics {
    IL2CPP_REGISTER_METHOD(0x024F14D0, app::Material*, get_material, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F16B0, void, Start, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024F1820,
        void,
        OnRenderImage,
        app::CameraFilterPack_Drawing_EnhancedComics* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024F1C40, void, OnValidate, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F1CD0, void, Update, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F1D60, void, OnDisable, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F1E40, void, ctor, app::CameraFilterPack_Drawing_EnhancedComics* this_ptr)
} // namespace app::classes::CameraFilterPack_Drawing_EnhancedComics
