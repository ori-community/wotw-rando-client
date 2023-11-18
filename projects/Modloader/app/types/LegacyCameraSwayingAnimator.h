#pragma once
#include <Modloader/app/structs/LegacyCameraSwayingAnimator.h>
#include <Modloader/app/structs/LegacyCameraSwayingAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSwayingAnimator {
        inline app::LegacyCameraSwayingAnimator__Class** type_info() {
            static app::LegacyCameraSwayingAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyCameraSwayingAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyCameraSwayingAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSwayingAnimator__Class>(type_info(), "", "LegacyCameraSwayingAnimator");
        }
        inline app::LegacyCameraSwayingAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSwayingAnimator>(get_class());
        }
    } // namespace LegacyCameraSwayingAnimator
} // namespace app::classes::types
