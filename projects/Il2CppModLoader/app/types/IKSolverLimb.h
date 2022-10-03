#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverLimb__Class** type_info;
        inline app::IKSolverLimb__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb");
        }
        inline app::IKSolverLimb* create() {
            return il2cpp::create_object<app::IKSolverLimb>(get_class());
        }
        inline app::IKSolverLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolverLimb__Array>(get_class(), size);
        }
    } // namespace IKSolverLimb
} // namespace app::classes::types
