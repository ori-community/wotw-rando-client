#pragma once
#include <Modloader/app/structs/SimpleIKSolver.h>
#include <Modloader/app/structs/SimpleIKSolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver {
        inline app::SimpleIKSolver__Class** type_info() {
            static app::SimpleIKSolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleIKSolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleIKSolver__Class* get_class() {
            return il2cpp::get_class<app::SimpleIKSolver__Class>(type_info(), "", "SimpleIKSolver");
        }
        inline app::SimpleIKSolver* create() {
            return il2cpp::create_object<app::SimpleIKSolver>(get_class());
        }
    } // namespace SimpleIKSolver
} // namespace app::classes::types
