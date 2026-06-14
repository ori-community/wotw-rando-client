#pragma once
#include <Modloader/app/structs/LegacyMaterialColorAnimator.h>
#include <Modloader/app/structs/LegacyMaterialColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator {
        inline app::LegacyMaterialColorAnimator__Class** type_info() {
            static app::LegacyMaterialColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyMaterialColorAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyMaterialColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorAnimator__Class>(type_info(), "", "LegacyMaterialColorAnimator");
        }
        inline app::LegacyMaterialColorAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator>(get_class());
        }
    } // namespace LegacyMaterialColorAnimator
} // namespace app::classes::types
