#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverTrigonometric_TrigonometricBone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverTrigonometric_TrigonometricBone__Class** type_info;
        inline app::IKSolverTrigonometric_TrigonometricBone__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverTrigonometric_TrigonometricBone__Class>(type_info, "RootMotion.FinalIK", "IKSolverTrigonometric", "TrigonometricBone");
        }
        inline app::IKSolverTrigonometric_TrigonometricBone* create() {
            return il2cpp::create_object<app::IKSolverTrigonometric_TrigonometricBone>(get_class());
        }
    } // namespace IKSolverTrigonometric_TrigonometricBone
} // namespace app::classes::types
