#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InverseKinematicsSolver__Class.h>
#include <Modloader/app/structs/InverseKinematicsSolver.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver {
        namespace {
            inline app::InverseKinematicsSolver__Class* type_info_ref = nullptr;
        }
        inline app::InverseKinematicsSolver__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSolver__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSolver__Class>(type_info, "Moon", "InverseKinematicsSolver");
        }
        inline app::InverseKinematicsSolver* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver>(get_class());
        }
    } // namespace InverseKinematicsSolver
} // namespace app::classes::types
