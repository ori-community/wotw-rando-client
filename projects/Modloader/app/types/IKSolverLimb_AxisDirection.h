#pragma once
#include <Modloader/app/structs/IKSolverLimb_AxisDirection.h>
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Array.h>
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Boxed.h>
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_AxisDirection {
        inline app::IKSolverLimb_AxisDirection__Class** type_info() {
            static app::IKSolverLimb_AxisDirection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSolverLimb_AxisDirection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSolverLimb_AxisDirection__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverLimb_AxisDirection__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLimb", "AxisDirection");
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
        inline app::IKSolverLimb_AxisDirection__Array* create_array(const std::vector<app::IKSolverLimb_AxisDirection>& items) {
            return il2cpp::array_new<app::IKSolverLimb_AxisDirection__Array>(get_class(), items);
        }
    } // namespace IKSolverLimb_AxisDirection
} // namespace app::classes::types
