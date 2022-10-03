#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BilateralGaussianBlur {
        namespace {
            app::BilateralGaussianBlur__Class* type_info_ref = nullptr;
        }
        app::BilateralGaussianBlur__Class** type_info = &type_info_ref;
        inline app::BilateralGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::BilateralGaussianBlur__Class>(type_info, "Colorful", "BilateralGaussianBlur");
        }
        inline app::BilateralGaussianBlur* create() {
            return il2cpp::create_object<app::BilateralGaussianBlur>(get_class());
        }
    } // namespace BilateralGaussianBlur
} // namespace app::classes::types
