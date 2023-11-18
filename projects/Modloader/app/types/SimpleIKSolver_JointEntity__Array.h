#pragma once
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array.h>
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver_JointEntity__Array {
        inline app::SimpleIKSolver_JointEntity__Array__Class** type_info() {
            static app::SimpleIKSolver_JointEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleIKSolver_JointEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleIKSolver_JointEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleIKSolver_JointEntity__Array__Class>(type_info(), "", "SimpleIKSolver+JointEntity[]");
        }
        inline app::SimpleIKSolver_JointEntity__Array* create() {
            return il2cpp::create_object<app::SimpleIKSolver_JointEntity__Array>(get_class());
        }
    } // namespace SimpleIKSolver_JointEntity__Array
} // namespace app::classes::types
