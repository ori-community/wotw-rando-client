#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver_Bone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver_Bone__Class** type_info;
        inline app::IKSolver_Bone__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_Bone__Class>(type_info, "RootMotion.FinalIK", "IKSolver", "Bone");
        }
        inline app::IKSolver_Bone* create() {
            return il2cpp::create_object<app::IKSolver_Bone>(get_class());
        }
        inline app::IKSolver_Bone__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolver_Bone__Array>(get_class(), size);
        }
        inline app::IKSolver_Bone__Array* create_array(const std::vector<app::IKSolver_Bone*>& items) {
            return il2cpp::array_new<app::IKSolver_Bone__Array>(get_class(), items);
        }
    } // namespace IKSolver_Bone
} // namespace app::classes::types
