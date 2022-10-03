#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaderAnimator {
        namespace {
            app::FaderAnimator__Class* type_info_ref = nullptr;
        }
        app::FaderAnimator__Class** type_info = &type_info_ref;
        inline app::FaderAnimator__Class* get_class() {
            return il2cpp::get_class<app::FaderAnimator__Class>(type_info, "", "FaderAnimator");
        }
        inline app::FaderAnimator* create() {
            return il2cpp::create_object<app::FaderAnimator>(get_class());
        }
    } // namespace FaderAnimator
} // namespace app::classes::types
