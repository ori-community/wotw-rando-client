#pragma once
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator__Array.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator__Array {
        inline app::LegacyMaterialColorGradientAnimator__Array__Class** type_info() {
            static app::LegacyMaterialColorGradientAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyMaterialColorGradientAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyMaterialColorGradientAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorGradientAnimator__Array__Class>(type_info(), "", "LegacyMaterialColorGradientAnimator[]");
        }
        inline app::LegacyMaterialColorGradientAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyMaterialColorGradientAnimator__Array>(get_class());
        }
    } // namespace LegacyMaterialColorGradientAnimator__Array
} // namespace app::classes::types
