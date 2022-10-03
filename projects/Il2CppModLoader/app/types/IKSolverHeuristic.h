#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverHeuristic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverHeuristic__Class** type_info;
        inline app::IKSolverHeuristic__Class* get_class() {
            return il2cpp::get_class<app::IKSolverHeuristic__Class>(type_info, "RootMotion.FinalIK", "IKSolverHeuristic");
        }
        inline app::IKSolverHeuristic* create() {
            return il2cpp::create_object<app::IKSolverHeuristic>(get_class());
        }
    } // namespace IKSolverHeuristic
} // namespace app::classes::types
