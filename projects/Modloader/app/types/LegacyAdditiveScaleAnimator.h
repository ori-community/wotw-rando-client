#pragma once
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator.h>
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAdditiveScaleAnimator {
        inline app::LegacyAdditiveScaleAnimator__Class** type_info() {
            static app::LegacyAdditiveScaleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAdditiveScaleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAdditiveScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyAdditiveScaleAnimator__Class>(type_info(), "", "LegacyAdditiveScaleAnimator");
        }
        inline app::LegacyAdditiveScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyAdditiveScaleAnimator>(get_class());
        }
    } // namespace LegacyAdditiveScaleAnimator
} // namespace app::classes::types
