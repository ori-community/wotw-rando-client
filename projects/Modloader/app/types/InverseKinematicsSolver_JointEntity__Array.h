#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InverseKinematicsSolver_JointEntity__Array__Class.h>
#include <Modloader/app/structs/InverseKinematicsSolver_JointEntity__Array.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver_JointEntity__Array {
        namespace {
            inline app::InverseKinematicsSolver_JointEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::InverseKinematicsSolver_JointEntity__Array__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSolver_JointEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSolver_JointEntity__Array__Class>(type_info, "Moon", "InverseKinematicsSolver+JointEntity[]");
        }
        inline app::InverseKinematicsSolver_JointEntity__Array* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver_JointEntity__Array>(get_class());
        }
    } // namespace InverseKinematicsSolver_JointEntity__Array
} // namespace app::classes::types
