#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_AAA_SuperComputer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_AAA_SuperComputer {
    IL2CPP_REGISTER_METHOD(0x0273C630, app::Material*, get_material, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273C810, void, Start, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0273CA00,
        void,
        OnRenderImage,
        app::CameraFilterPack_AAA_SuperComputer* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x0273CF40, void, OnValidate, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273D050, void, Update, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273D180, void, OnDisable, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273D260, void, ctor, app::CameraFilterPack_AAA_SuperComputer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273D2B0, void, cctor, )
} // namespace app::classes::CameraFilterPack_AAA_SuperComputer
