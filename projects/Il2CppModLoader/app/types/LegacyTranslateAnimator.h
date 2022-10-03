#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTranslateAnimator {
        namespace {
            app::LegacyTranslateAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyTranslateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyTranslateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTranslateAnimator__Class>(type_info, "", "LegacyTranslateAnimator");
        }
        inline app::LegacyTranslateAnimator* create() {
            return il2cpp::create_object<app::LegacyTranslateAnimator>(get_class());
        }
    } // namespace LegacyTranslateAnimator
} // namespace app::classes::types
