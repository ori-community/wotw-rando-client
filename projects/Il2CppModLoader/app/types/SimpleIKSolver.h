#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver {
        namespace {
            app::SimpleIKSolver__Class* type_info_ref = nullptr;
        }
        app::SimpleIKSolver__Class** type_info = &type_info_ref;
        inline app::SimpleIKSolver__Class* get_class() {
            return il2cpp::get_class<app::SimpleIKSolver__Class>(type_info, "", "SimpleIKSolver");
        }
        inline app::SimpleIKSolver* create() {
            return il2cpp::create_object<app::SimpleIKSolver>(get_class());
        }
    } // namespace SimpleIKSolver
} // namespace app::classes::types
