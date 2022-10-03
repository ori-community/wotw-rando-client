#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostAnimator {
        namespace {
            app::UberPostAnimator__Class* type_info_ref = nullptr;
        }
        app::UberPostAnimator__Class** type_info = &type_info_ref;
        inline app::UberPostAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostAnimator__Class>(type_info, "", "UberPostAnimator");
        }
        inline app::UberPostAnimator* create() {
            return il2cpp::create_object<app::UberPostAnimator>(get_class());
        }
    } // namespace UberPostAnimator
} // namespace app::classes::types
