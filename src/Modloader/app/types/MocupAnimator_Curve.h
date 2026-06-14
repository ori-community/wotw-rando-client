#pragma once
#include <Modloader/app/structs/MocupAnimator_Curve.h>
#include <Modloader/app/structs/MocupAnimator_Curve__Array.h>
#include <Modloader/app/structs/MocupAnimator_Curve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MocupAnimator_Curve {
        inline app::MocupAnimator_Curve__Class** type_info() {
            static app::MocupAnimator_Curve__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MocupAnimator_Curve__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MocupAnimator_Curve__Class* get_class() {
            return il2cpp::get_nested_class<app::MocupAnimator_Curve__Class>(type_info(), "", "MocupAnimator", "Curve");
        }
        inline app::MocupAnimator_Curve* create() {
            return il2cpp::create_object<app::MocupAnimator_Curve>(get_class());
        }
        inline app::MocupAnimator_Curve__Array* create_array(int size) {
            return il2cpp::array_new<app::MocupAnimator_Curve__Array>(get_class(), size);
        }
        inline app::MocupAnimator_Curve__Array* create_array(const std::vector<app::MocupAnimator_Curve*>& items) {
            return il2cpp::array_new<app::MocupAnimator_Curve__Array>(get_class(), items);
        }
    } // namespace MocupAnimator_Curve
} // namespace app::classes::types
