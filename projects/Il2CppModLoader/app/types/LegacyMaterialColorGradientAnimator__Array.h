#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator__Array {
        namespace {
            app::LegacyMaterialColorGradientAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::LegacyMaterialColorGradientAnimator__Array__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialColorGradientAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorGradientAnimator__Array__Class>(type_info, "", "LegacyMaterialColorGradientAnimator[]");
        }
        inline app::LegacyMaterialColorGradientAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyMaterialColorGradientAnimator__Array>(get_class());
        }
    } // namespace LegacyMaterialColorGradientAnimator__Array
} // namespace app::classes::types
