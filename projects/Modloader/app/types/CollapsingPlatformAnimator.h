#pragma once
#include <Modloader/app/structs/CollapsingPlatformAnimator.h>
#include <Modloader/app/structs/CollapsingPlatformAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatformAnimator {
        inline app::CollapsingPlatformAnimator__Class** type_info() {
            static app::CollapsingPlatformAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollapsingPlatformAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollapsingPlatformAnimator__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformAnimator__Class>(type_info(), "", "CollapsingPlatformAnimator");
        }
        inline app::CollapsingPlatformAnimator* create() {
            return il2cpp::create_object<app::CollapsingPlatformAnimator>(get_class());
        }
    } // namespace CollapsingPlatformAnimator
} // namespace app::classes::types
