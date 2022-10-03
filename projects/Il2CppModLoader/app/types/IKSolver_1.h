#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver_1 {
        namespace {
            app::IKSolver_1__Class* type_info_ref = nullptr;
        }
        app::IKSolver_1__Class** type_info = &type_info_ref;
        inline app::IKSolver_1__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_1__Class>(type_info, "", "IKSolver");
        }
        inline app::IKSolver_1* create() {
            return il2cpp::create_object<app::IKSolver_1>(get_class());
        }
    } // namespace IKSolver_1
} // namespace app::classes::types
