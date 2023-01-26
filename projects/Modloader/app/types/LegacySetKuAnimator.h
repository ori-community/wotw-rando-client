#pragma once
#include <Modloader/app/structs/LegacySetKuAnimator.h>
#include <Modloader/app/structs/LegacySetKuAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySetKuAnimator {
        inline app::LegacySetKuAnimator__Class** type_info() {
            static app::LegacySetKuAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySetKuAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySetKuAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySetKuAnimator__Class>(type_info(), "", "LegacySetKuAnimator");
        }
        inline app::LegacySetKuAnimator* create() {
            return il2cpp::create_object<app::LegacySetKuAnimator>(get_class());
        }
    } // namespace LegacySetKuAnimator
} // namespace app::classes::types
