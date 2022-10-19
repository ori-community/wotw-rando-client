#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver_JointEntity {
        namespace {
            inline app::InverseKinematicsSolver_JointEntity__Class* type_info_ref = nullptr;
        }
        inline app::InverseKinematicsSolver_JointEntity__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSolver_JointEntity__Class* get_class() {
            return il2cpp::get_nested_class<app::InverseKinematicsSolver_JointEntity__Class>(type_info, "Moon", "InverseKinematicsSolver", "JointEntity");
        }
        inline app::InverseKinematicsSolver_JointEntity* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver_JointEntity>(get_class());
        }
        inline app::InverseKinematicsSolver_JointEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::InverseKinematicsSolver_JointEntity__Array>(get_class(), size);
        }
        inline app::InverseKinematicsSolver_JointEntity__Array* create_array(const std::vector<app::InverseKinematicsSolver_JointEntity*>& items) {
            return il2cpp::array_new<app::InverseKinematicsSolver_JointEntity__Array>(get_class(), items);
        }
    } // namespace InverseKinematicsSolver_JointEntity
} // namespace app::classes::types
