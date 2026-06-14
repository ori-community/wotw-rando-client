#pragma once
#include <Modloader/app/structs/ActivateDamageAnimator.h>
#include <Modloader/app/structs/ActivateDamageAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateDamageAnimator {
        inline app::ActivateDamageAnimator__Class** type_info() {
            static app::ActivateDamageAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateDamageAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateDamageAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateDamageAnimator__Class>(type_info(), "Moon.Timeline", "ActivateDamageAnimator");
        }
        inline app::ActivateDamageAnimator* create() {
            return il2cpp::create_object<app::ActivateDamageAnimator>(get_class());
        }
    } // namespace ActivateDamageAnimator
} // namespace app::classes::types
