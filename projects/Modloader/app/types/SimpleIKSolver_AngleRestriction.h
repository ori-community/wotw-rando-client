#pragma once
#include <Modloader/app/structs/SimpleIKSolver_AngleRestriction.h>
#include <Modloader/app/structs/SimpleIKSolver_AngleRestriction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver_AngleRestriction {
        inline app::SimpleIKSolver_AngleRestriction__Class** type_info() {
            static app::SimpleIKSolver_AngleRestriction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleIKSolver_AngleRestriction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleIKSolver_AngleRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleIKSolver_AngleRestriction__Class>(type_info(), "", "SimpleIKSolver", "AngleRestriction");
        }
        inline app::SimpleIKSolver_AngleRestriction* create() {
            return il2cpp::create_object<app::SimpleIKSolver_AngleRestriction>(get_class());
        }
    } // namespace SimpleIKSolver_AngleRestriction
} // namespace app::classes::types
