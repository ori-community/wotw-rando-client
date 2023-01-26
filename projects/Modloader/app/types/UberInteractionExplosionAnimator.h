#pragma once
#include <Modloader/app/structs/UberInteractionExplosionAnimator.h>
#include <Modloader/app/structs/UberInteractionExplosionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionExplosionAnimator {
        inline app::UberInteractionExplosionAnimator__Class** type_info() {
            static app::UberInteractionExplosionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionExplosionAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionExplosionAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionExplosionAnimator__Class>(type_info(), "", "UberInteractionExplosionAnimator");
        }
        inline app::UberInteractionExplosionAnimator* create() {
            return il2cpp::create_object<app::UberInteractionExplosionAnimator>(get_class());
        }
    } // namespace UberInteractionExplosionAnimator
} // namespace app::classes::types
