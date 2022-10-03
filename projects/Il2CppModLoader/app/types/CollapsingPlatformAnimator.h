#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatformAnimator {
        namespace {
            app::CollapsingPlatformAnimator__Class* type_info_ref = nullptr;
        }
        app::CollapsingPlatformAnimator__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatformAnimator__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformAnimator__Class>(type_info, "", "CollapsingPlatformAnimator");
        }
        inline app::CollapsingPlatformAnimator* create() {
            return il2cpp::create_object<app::CollapsingPlatformAnimator>(get_class());
        }
    } // namespace CollapsingPlatformAnimator
} // namespace app::classes::types
