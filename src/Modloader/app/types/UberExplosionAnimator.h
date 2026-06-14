#pragma once
#include <Modloader/app/structs/UberExplosionAnimator.h>
#include <Modloader/app/structs/UberExplosionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberExplosionAnimator {
        inline app::UberExplosionAnimator__Class** type_info() {
            static app::UberExplosionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberExplosionAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberExplosionAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberExplosionAnimator__Class>(type_info(), "", "UberExplosionAnimator");
        }
        inline app::UberExplosionAnimator* create() {
            return il2cpp::create_object<app::UberExplosionAnimator>(get_class());
        }
    } // namespace UberExplosionAnimator
} // namespace app::classes::types
