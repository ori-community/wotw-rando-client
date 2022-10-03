#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyMaterialColorGradientAnimator__Class** type_info;
        inline app::LegacyMaterialColorGradientAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorGradientAnimator__Class>(type_info, "", "LegacyMaterialColorGradientAnimator");
        }
        inline app::LegacyMaterialColorGradientAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialColorGradientAnimator>(get_class());
        }
        inline app::LegacyMaterialColorGradientAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialColorGradientAnimator__Array>(get_class(), size);
        }
    } // namespace LegacyMaterialColorGradientAnimator
} // namespace app::classes::types
