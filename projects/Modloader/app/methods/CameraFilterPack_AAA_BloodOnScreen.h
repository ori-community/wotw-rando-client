#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_BloodOnScreen.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_AAA_BloodOnScreen {
    IL2CPP_REGISTER_METHOD(0x0273A7E0, app::Material*, get_material, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273A9C0, void, Start, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273AB40, void, OnRenderImage, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273AFD0, void, OnDisable, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273B0B0, void, ctor, (app::CameraFilterPack_AAA_BloodOnScreen * this_ptr))
} // namespace app::classes::CameraFilterPack_AAA_BloodOnScreen
