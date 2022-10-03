#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverLookAt_LookAtBone__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverLookAt_LookAtBone__Array__Class** type_info;
        inline app::IKSolverLookAt_LookAtBone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLookAt_LookAtBone__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolverLookAt+LookAtBone[]");
        }
        inline app::IKSolverLookAt_LookAtBone__Array* create() {
            return il2cpp::create_object<app::IKSolverLookAt_LookAtBone__Array>(get_class());
        }
    } // namespace IKSolverLookAt_LookAtBone__Array
} // namespace app::classes::types
