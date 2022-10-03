#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKWeightAnimator {
        namespace {
            app::IKWeightAnimator__Class* type_info_ref = nullptr;
        }
        app::IKWeightAnimator__Class** type_info = &type_info_ref;
        inline app::IKWeightAnimator__Class* get_class() {
            return il2cpp::get_class<app::IKWeightAnimator__Class>(type_info, "Moon.Timeline", "IKWeightAnimator");
        }
        inline app::IKWeightAnimator* create() {
            return il2cpp::create_object<app::IKWeightAnimator>(get_class());
        }
    } // namespace IKWeightAnimator
} // namespace app::classes::types
