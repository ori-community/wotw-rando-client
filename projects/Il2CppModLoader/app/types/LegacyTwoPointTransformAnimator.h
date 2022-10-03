#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTwoPointTransformAnimator {
        namespace {
            app::LegacyTwoPointTransformAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyTwoPointTransformAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyTwoPointTransformAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTwoPointTransformAnimator__Class>(type_info, "", "LegacyTwoPointTransformAnimator");
        }
        inline app::LegacyTwoPointTransformAnimator* create() {
            return il2cpp::create_object<app::LegacyTwoPointTransformAnimator>(get_class());
        }
    } // namespace LegacyTwoPointTransformAnimator
} // namespace app::classes::types
