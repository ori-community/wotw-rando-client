#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Glitch_Mozaic.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Glitch_Mozaic {
    IL2CPP_REGISTER_METHOD(0x02477B20, app::Material*, get_material, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477D00, void, Start, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477E80, void, OnRenderImage, (app::CameraFilterPack_Glitch_Mozaic * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02478250, void, OnValidate, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024782F0, void, Update, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02478390, void, OnDisable, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7040, void, ctor, (app::CameraFilterPack_Glitch_Mozaic * this_ptr))
} // namespace app::classes::CameraFilterPack_Glitch_Mozaic
