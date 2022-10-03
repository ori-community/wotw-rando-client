#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverFABRIK {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverFABRIK__Class** type_info;
        inline app::IKSolverFABRIK__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFABRIK__Class>(type_info, "RootMotion.FinalIK", "IKSolverFABRIK");
        }
        inline app::IKSolverFABRIK* create() {
            return il2cpp::create_object<app::IKSolverFABRIK>(get_class());
        }
    } // namespace IKSolverFABRIK
} // namespace app::classes::types
