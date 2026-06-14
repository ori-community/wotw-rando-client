#pragma once
#include <Modloader/app/structs/InverseKinematicsSolver_JointEntity__Array.h>
#include <Modloader/app/structs/InverseKinematicsSolver_JointEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver_JointEntity__Array {
        inline app::InverseKinematicsSolver_JointEntity__Array__Class** type_info() {
            static app::InverseKinematicsSolver_JointEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InverseKinematicsSolver_JointEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InverseKinematicsSolver_JointEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSolver_JointEntity__Array__Class>(type_info(), "Moon", "InverseKinematicsSolver+JointEntity[]");
        }
        inline app::InverseKinematicsSolver_JointEntity__Array* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver_JointEntity__Array>(get_class());
        }
    } // namespace InverseKinematicsSolver_JointEntity__Array
} // namespace app::classes::types
