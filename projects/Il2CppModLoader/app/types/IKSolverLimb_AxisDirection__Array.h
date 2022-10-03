#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_AxisDirection__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverLimb_AxisDirection__Array__Class** type_info;
        inline app::IKSolverLimb_AxisDirection__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb_AxisDirection__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb+AxisDirection[]");
        }
        inline app::IKSolverLimb_AxisDirection__Array* create() {
            return il2cpp::create_object<app::IKSolverLimb_AxisDirection__Array>(get_class());
        }
    } // namespace IKSolverLimb_AxisDirection__Array
} // namespace app::classes::types
