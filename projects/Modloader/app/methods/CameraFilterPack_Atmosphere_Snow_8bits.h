#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Atmosphere_Snow_8bits.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Atmosphere_Snow_8bits {
    IL2CPP_REGISTER_METHOD(0x02740D90, app::Material*, get_material, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02740F70, void, Start, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027410C0, void, OnRenderImage, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02741490, void, OnDisable, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02741570, void, ctor, (app::CameraFilterPack_Atmosphere_Snow_8bits * this_ptr))
} // namespace app::classes::CameraFilterPack_Atmosphere_Snow_8bits
