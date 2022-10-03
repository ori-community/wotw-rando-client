#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverFABRIKRoot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverFABRIKRoot__Class** type_info;
        inline app::IKSolverFABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFABRIKRoot__Class>(type_info, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
        }
        inline app::IKSolverFABRIKRoot* create() {
            return il2cpp::create_object<app::IKSolverFABRIKRoot>(get_class());
        }
    } // namespace IKSolverFABRIKRoot
} // namespace app::classes::types
