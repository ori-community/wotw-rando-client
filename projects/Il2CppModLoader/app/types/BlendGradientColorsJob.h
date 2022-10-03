#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendGradientColorsJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlendGradientColorsJob__Class** type_info;
        inline app::BlendGradientColorsJob__Class* get_class() {
            return il2cpp::get_class<app::BlendGradientColorsJob__Class>(type_info, "", "BlendGradientColorsJob");
        }
        inline app::BlendGradientColorsJob* create() {
            return il2cpp::create_object<app::BlendGradientColorsJob>(get_class());
        }
        inline app::BlendGradientColorsJob__Boxed* box(app::BlendGradientColorsJob value) {
            return il2cpp::box_value<app::BlendGradientColorsJob__Boxed>(get_class(), value);
        }
    } // namespace BlendGradientColorsJob
} // namespace app::classes::types
