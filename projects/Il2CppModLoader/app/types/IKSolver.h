#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver__Class** type_info;
        inline app::IKSolver__Class* get_class() {
            return il2cpp::get_class<app::IKSolver__Class>(type_info, "RootMotion.FinalIK", "IKSolver");
        }
        inline app::IKSolver* create() {
            return il2cpp::create_object<app::IKSolver>(get_class());
        }
        inline app::IKSolver__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolver__Array>(get_class(), size);
        }
        inline app::IKSolver__Array* create_array(const std::vector<app::IKSolver*>& items) {
            return il2cpp::array_new<app::IKSolver__Array>(get_class(), items);
        }
    } // namespace IKSolver
} // namespace app::classes::types
