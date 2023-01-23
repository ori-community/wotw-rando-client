#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ColorUsageAttribute.h>

namespace app::classes::UnityEngine::ColorUsageAttribute {
    IL2CPP_REGISTER_METHOD(0x02428BE0, void, ctor_1, (app::ColorUsageAttribute * this_ptr, bool show_alpha))
    IL2CPP_REGISTER_METHOD(0x02428C10, void, ctor_2, (app::ColorUsageAttribute * this_ptr, bool show_alpha, bool hdr))
    IL2CPP_REGISTER_METHOD(0x02428C40, void, ctor_3, (app::ColorUsageAttribute * this_ptr, bool show_alpha, bool hdr, float min_brightness, float max_brightness, float min_exposure_value, float max_exposure_value))
} // namespace app::classes::UnityEngine::ColorUsageAttribute
