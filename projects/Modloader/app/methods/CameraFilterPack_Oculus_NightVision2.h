#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision2.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Oculus_NightVision2 {
    IL2CPP_REGISTER_METHOD(0x024849F0, app::Material*, get_material, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484BD0, void, ChangeFilters, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484C80, void, Start, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484D70, void, OnRenderImage, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024855B0, void, OnValidate, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024855C0, void, OnDisable, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024856A0, void, ctor, (app::CameraFilterPack_Oculus_NightVision2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Oculus_NightVision2
