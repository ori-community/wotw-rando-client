#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberVignettingAnimator {
        namespace {
            app::UberVignettingAnimator__Class* type_info_ref = nullptr;
        }
        app::UberVignettingAnimator__Class** type_info = &type_info_ref;
        inline app::UberVignettingAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberVignettingAnimator__Class>(type_info, "", "UberVignettingAnimator");
        }
        inline app::UberVignettingAnimator* create() {
            return il2cpp::create_object<app::UberVignettingAnimator>(get_class());
        }
    } // namespace UberVignettingAnimator
} // namespace app::classes::types
