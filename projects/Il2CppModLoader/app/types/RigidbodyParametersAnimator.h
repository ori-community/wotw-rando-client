#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyParametersAnimator {
        namespace {
            app::RigidbodyParametersAnimator__Class* type_info_ref = nullptr;
        }
        app::RigidbodyParametersAnimator__Class** type_info = &type_info_ref;
        inline app::RigidbodyParametersAnimator__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyParametersAnimator__Class>(type_info, "Moon.Timeline", "RigidbodyParametersAnimator");
        }
        inline app::RigidbodyParametersAnimator* create() {
            return il2cpp::create_object<app::RigidbodyParametersAnimator>(get_class());
        }
    } // namespace RigidbodyParametersAnimator
} // namespace app::classes::types
