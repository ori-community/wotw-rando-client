#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blizzard {
    IL2CPP_REGISTER_METHOD(0x02763440, app::Material *, get_material, (app::CameraFilterPack_Blizzard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02763620, void, Start, (app::CameraFilterPack_Blizzard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027637A0, void, OnRenderImage, (app::CameraFilterPack_Blizzard * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Blizzard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02763A90, void, OnDisable, (app::CameraFilterPack_Blizzard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E5E50, void, ctor, (app::CameraFilterPack_Blizzard * this_ptr))
}
