#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSwayingAnimator {
        namespace {
            app::LegacyCameraSwayingAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyCameraSwayingAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSwayingAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSwayingAnimator__Class>(type_info, "", "LegacyCameraSwayingAnimator");
        }
        inline app::LegacyCameraSwayingAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSwayingAnimator>(get_class());
        }
    } // namespace LegacyCameraSwayingAnimator
} // namespace app::classes::types
