#pragma once
#include <Modloader/app/structs/LegacySinMovementAnimator.h>
#include <Modloader/app/structs/LegacySinMovementAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySinMovementAnimator {
        inline app::LegacySinMovementAnimator__Class** type_info() {
            static app::LegacySinMovementAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySinMovementAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySinMovementAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySinMovementAnimator__Class>(type_info(), "", "LegacySinMovementAnimator");
        }
        inline app::LegacySinMovementAnimator* create() {
            return il2cpp::create_object<app::LegacySinMovementAnimator>(get_class());
        }
    } // namespace LegacySinMovementAnimator
} // namespace app::classes::types
