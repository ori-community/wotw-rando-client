#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MocupAnimator_Curve {
        namespace {
            inline app::MocupAnimator_Curve__Class* type_info_ref = nullptr;
        }
        inline app::MocupAnimator_Curve__Class** type_info = &type_info_ref;
        inline app::MocupAnimator_Curve__Class* get_class() {
            return il2cpp::get_nested_class<app::MocupAnimator_Curve__Class>(type_info, "", "MocupAnimator", "Curve");
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
