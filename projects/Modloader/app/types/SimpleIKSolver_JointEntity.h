#pragma once
#include <Modloader/app/structs/SimpleIKSolver_JointEntity.h>
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array.h>
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver_JointEntity {
        inline app::SimpleIKSolver_JointEntity__Class** type_info() {
            static app::SimpleIKSolver_JointEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleIKSolver_JointEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleIKSolver_JointEntity__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleIKSolver_JointEntity__Class>(type_info(), "", "SimpleIKSolver", "JointEntity");
        }
        inline app::SimpleIKSolver_JointEntity* create() {
            return il2cpp::create_object<app::SimpleIKSolver_JointEntity>(get_class());
        }
        inline app::SimpleIKSolver_JointEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleIKSolver_JointEntity__Array>(get_class(), size);
        }
        inline app::SimpleIKSolver_JointEntity__Array* create_array(const std::vector<app::SimpleIKSolver_JointEntity*>& items) {
            return il2cpp::array_new<app::SimpleIKSolver_JointEntity__Array>(get_class(), items);
        }
    } // namespace SimpleIKSolver_JointEntity
} // namespace app::classes::types
