#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleIKSolver_JointEntity {
        namespace {
            app::SimpleIKSolver_JointEntity__Class* type_info_ref = nullptr;
        }
        app::SimpleIKSolver_JointEntity__Class** type_info = &type_info_ref;
        inline app::SimpleIKSolver_JointEntity__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleIKSolver_JointEntity__Class>(type_info, "", "SimpleIKSolver", "JointEntity");
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
