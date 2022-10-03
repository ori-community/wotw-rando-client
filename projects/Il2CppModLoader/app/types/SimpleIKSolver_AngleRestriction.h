#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver_AngleRestriction {
        namespace {
            app::SimpleIKSolver_AngleRestriction__Class* type_info_ref = nullptr;
        }
        app::SimpleIKSolver_AngleRestriction__Class** type_info = &type_info_ref;
        inline app::SimpleIKSolver_AngleRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleIKSolver_AngleRestriction__Class>(type_info, "", "SimpleIKSolver", "AngleRestriction");
        }
        inline app::SimpleIKSolver_AngleRestriction* create() {
            return il2cpp::create_object<app::SimpleIKSolver_AngleRestriction>(get_class());
        }
    } // namespace SimpleIKSolver_AngleRestriction
} // namespace app::classes::types
