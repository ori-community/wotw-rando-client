#pragma once
#include <Modloader/app/structs/LegacyMaterialTransparencyAnimator.h>
#include <Modloader/app/structs/LegacyMaterialTransparencyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialTransparencyAnimator {
        inline app::LegacyMaterialTransparencyAnimator__Class** type_info() {
            static app::LegacyMaterialTransparencyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyMaterialTransparencyAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyMaterialTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialTransparencyAnimator__Class>(type_info(), "", "LegacyMaterialTransparencyAnimator");
        }
        inline app::LegacyMaterialTransparencyAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialTransparencyAnimator>(get_class());
        }
    } // namespace LegacyMaterialTransparencyAnimator
} // namespace app::classes::types
