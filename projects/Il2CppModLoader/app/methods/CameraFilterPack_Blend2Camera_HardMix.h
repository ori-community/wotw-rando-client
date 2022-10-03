#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_HardMix {
    IL2CPP_REGISTER_METHOD(0x0274E750, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274E930, void, Start, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274ECF0, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0274F0E0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274F3D0, void, Update, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274F460, void, OnEnable, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274F730, void, OnDisable, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274F920, void, ctor, (app::CameraFilterPack_Blend2Camera_HardMix * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_HardMix
