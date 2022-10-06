#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_AxisDirection {
        namespace {
            app::IKSolverLimb_AxisDirection__Class* type_info_ref = nullptr;
        }
        app::IKSolverLimb_AxisDirection__Class** type_info = &type_info_ref;
        inline app::IKSolverLimb_AxisDirection__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverLimb_AxisDirection__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb", "AxisDirection");
        }
        inline app::IKSolverLimb_AxisDirection* create() {
            return il2cpp::create_object<app::IKSolverLimb_AxisDirection>(get_class());
        }
        inline app::IKSolverLimb_AxisDirection__Boxed* box(app::IKSolverLimb_AxisDirection value) {
            return il2cpp::box_value<app::IKSolverLimb_AxisDirection__Boxed>(get_class(), value);
        }
        inline app::IKSolverLimb_AxisDirection__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolverLimb_AxisDirection__Array>(get_class(), size);
        }
        inline app::IKSolverLimb_AxisDirection__Array* create_array(const std::vector<app::IKSolverLimb_AxisDirection__Boxed>& items) {
            return il2cpp::array_new<app::IKSolverLimb_AxisDirection__Array>(get_class(), items);
        }
    } // namespace IKSolverLimb_AxisDirection
} // namespace app::classes::types
