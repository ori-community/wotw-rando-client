#pragma once
#include <Modloader/app/structs/LegacyInputLockAnimator.h>
#include <Modloader/app/structs/LegacyInputLockAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyInputLockAnimator {
        inline app::LegacyInputLockAnimator__Class** type_info() {
            static app::LegacyInputLockAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyInputLockAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyInputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInputLockAnimator__Class>(type_info(), "", "LegacyInputLockAnimator");
        }
        inline app::LegacyInputLockAnimator* create() {
            return il2cpp::create_object<app::LegacyInputLockAnimator>(get_class());
        }
    } // namespace LegacyInputLockAnimator
} // namespace app::classes::types
