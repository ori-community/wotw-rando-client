#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostProcessAnimator {
        namespace {
            app::UberPostProcessAnimator__Class* type_info_ref = nullptr;
        }
        app::UberPostProcessAnimator__Class** type_info = &type_info_ref;
        inline app::UberPostProcessAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcessAnimator__Class>(type_info, "", "UberPostProcessAnimator");
        }
        inline app::UberPostProcessAnimator* create() {
            return il2cpp::create_object<app::UberPostProcessAnimator>(get_class());
        }
    } // namespace UberPostProcessAnimator
} // namespace app::classes::types
