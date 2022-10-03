#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver_UpdateDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver_UpdateDelegate__Class** type_info;
        inline app::IKSolver_UpdateDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_UpdateDelegate__Class>(type_info, "RootMotion.FinalIK", "IKSolver", "UpdateDelegate");
        }
        inline app::IKSolver_UpdateDelegate* create() {
            return il2cpp::create_object<app::IKSolver_UpdateDelegate>(get_class());
        }
    } // namespace IKSolver_UpdateDelegate
} // namespace app::classes::types
