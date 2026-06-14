#pragma once
#include <Modloader/app/structs/BilateralGaussianBlur.h>
#include <Modloader/app/structs/BilateralGaussianBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BilateralGaussianBlur {
        inline app::BilateralGaussianBlur__Class** type_info() {
            static app::BilateralGaussianBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BilateralGaussianBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BilateralGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::BilateralGaussianBlur__Class>(type_info(), "Colorful", "BilateralGaussianBlur");
        }
        inline app::BilateralGaussianBlur* create() {
            return il2cpp::create_object<app::BilateralGaussianBlur>(get_class());
        }
    } // namespace BilateralGaussianBlur
} // namespace app::classes::types
