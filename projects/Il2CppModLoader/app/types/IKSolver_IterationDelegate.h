#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver_IterationDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver_IterationDelegate__Class** type_info;
        inline app::IKSolver_IterationDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_IterationDelegate__Class>(type_info, "RootMotion.FinalIK", "IKSolver", "IterationDelegate");
        }
        inline app::IKSolver_IterationDelegate* create() {
            return il2cpp::create_object<app::IKSolver_IterationDelegate>(get_class());
        }
    } // namespace IKSolver_IterationDelegate
} // namespace app::classes::types
