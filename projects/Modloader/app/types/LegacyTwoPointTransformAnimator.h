#pragma once
#include <Modloader/app/structs/LegacyTwoPointTransformAnimator.h>
#include <Modloader/app/structs/LegacyTwoPointTransformAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTwoPointTransformAnimator {
        inline app::LegacyTwoPointTransformAnimator__Class** type_info() {
            static app::LegacyTwoPointTransformAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTwoPointTransformAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTwoPointTransformAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTwoPointTransformAnimator__Class>(type_info(), "", "LegacyTwoPointTransformAnimator");
        }
        inline app::LegacyTwoPointTransformAnimator* create() {
            return il2cpp::create_object<app::LegacyTwoPointTransformAnimator>(get_class());
        }
    } // namespace LegacyTwoPointTransformAnimator
} // namespace app::classes::types
