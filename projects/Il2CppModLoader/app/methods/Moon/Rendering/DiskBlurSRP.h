#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::DiskBlurSRP {
    IL2CPP_REGISTER_METHOD(0x00C55F60, void, InitMaterials, (app::DiskBlurSRP * this_ptr, int32_t slice_count, app::Material * material))
    IL2CPP_REGISTER_METHOD(0x00C56340, void, Dispose, (app::DiskBlurSRP * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C565E0, void, SetInterestZone, (app::DiskBlurSRP * this_ptr, int32_t index, app::Vector4 screen_pos))
    IL2CPP_REGISTER_METHOD(0x00C56630, void, ClearInterestZones, (app::DiskBlurSRP * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C567A0, app::Material *, setupMaterial, (app::DiskBlurSRP * this_ptr, int32_t slice_index, app::Int2 slice_size, float kernel_radius, app::Vector2 r_t_pixel_size))
    IL2CPP_REGISTER_METHOD(0x00C56DB0, app::Material *, setupMaterialMB, (app::DiskBlurSRP * this_ptr, int32_t slice_index, app::Vector2 r_t_pixel_size))
    IL2CPP_REGISTER_METHOD(0x00C57360, void, ctor, (app::DiskBlurSRP * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C57440, void, cctor, ())
}
