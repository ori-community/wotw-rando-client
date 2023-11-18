#pragma once
#include <Modloader/app/structs/LegacyMaterialFloatAnimator.h>
#include <Modloader/app/structs/LegacyMaterialFloatAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator {
        inline app::LegacyMaterialFloatAnimator__Class** type_info() {
            static app::LegacyMaterialFloatAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyMaterialFloatAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyMaterialFloatAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialFloatAnimator__Class>(type_info(), "", "LegacyMaterialFloatAnimator");
        }
        inline app::LegacyMaterialFloatAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialFloatAnimator>(get_class());
        }
    } // namespace LegacyMaterialFloatAnimator
} // namespace app::classes::types
