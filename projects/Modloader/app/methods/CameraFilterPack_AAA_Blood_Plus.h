#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood_Plus.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_AAA_Blood_Plus {
    IL2CPP_REGISTER_METHOD(0x0273BBA0, app::Material*, get_material, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273BD80, void, Start, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273BF00, void, OnRenderImage, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273C550, void, OnDisable, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273BB80, void, ctor, (app::CameraFilterPack_AAA_Blood_Plus * this_ptr))
} // namespace app::classes::CameraFilterPack_AAA_Blood_Plus
