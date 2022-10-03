#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyScaleAnimator {
        namespace {
            app::LegacyScaleAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyScaleAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyScaleAnimator__Class>(type_info, "", "LegacyScaleAnimator");
        }
        inline app::LegacyScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyScaleAnimator>(get_class());
        }
    } // namespace LegacyScaleAnimator
} // namespace app::classes::types
