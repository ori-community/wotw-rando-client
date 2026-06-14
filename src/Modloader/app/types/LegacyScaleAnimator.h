#pragma once
#include <Modloader/app/structs/LegacyScaleAnimator.h>
#include <Modloader/app/structs/LegacyScaleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyScaleAnimator {
        inline app::LegacyScaleAnimator__Class** type_info() {
            static app::LegacyScaleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyScaleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyScaleAnimator__Class>(type_info(), "", "LegacyScaleAnimator");
        }
        inline app::LegacyScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyScaleAnimator>(get_class());
        }
    } // namespace LegacyScaleAnimator
} // namespace app::classes::types
