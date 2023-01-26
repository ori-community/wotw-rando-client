#pragma once
#include <Modloader/app/structs/LegacyDistanceAnimator.h>
#include <Modloader/app/structs/LegacyDistanceAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDistanceAnimator {
        inline app::LegacyDistanceAnimator__Class** type_info() {
            static app::LegacyDistanceAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyDistanceAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyDistanceAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyDistanceAnimator__Class>(type_info(), "", "LegacyDistanceAnimator");
        }
        inline app::LegacyDistanceAnimator* create() {
            return il2cpp::create_object<app::LegacyDistanceAnimator>(get_class());
        }
    } // namespace LegacyDistanceAnimator
} // namespace app::classes::types
