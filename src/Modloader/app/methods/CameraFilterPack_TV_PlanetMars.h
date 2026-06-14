#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_TV_PlanetMars.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_PlanetMars {
    IL2CPP_REGISTER_METHOD(0x020EC4D0, app::Material*, get_material, app::CameraFilterPack_TV_PlanetMars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020EC6B0, void, Start, app::CameraFilterPack_TV_PlanetMars* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020EC800,
        void,
        OnRenderImage,
        app::CameraFilterPack_TV_PlanetMars* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_TV_PlanetMars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020ECB20, void, OnDisable, app::CameraFilterPack_TV_PlanetMars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, app::CameraFilterPack_TV_PlanetMars* this_ptr)
} // namespace app::classes::CameraFilterPack_TV_PlanetMars
