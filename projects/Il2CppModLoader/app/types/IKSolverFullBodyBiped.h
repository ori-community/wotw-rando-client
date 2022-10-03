#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverFullBodyBiped {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverFullBodyBiped__Class** type_info;
        inline app::IKSolverFullBodyBiped__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFullBodyBiped__Class>(type_info, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
        }
        inline app::IKSolverFullBodyBiped* create() {
            return il2cpp::create_object<app::IKSolverFullBodyBiped>(get_class());
        }
    } // namespace IKSolverFullBodyBiped
} // namespace app::classes::types
