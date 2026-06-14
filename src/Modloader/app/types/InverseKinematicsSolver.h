#pragma once
#include <Modloader/app/structs/InverseKinematicsSolver.h>
#include <Modloader/app/structs/InverseKinematicsSolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver {
        inline app::InverseKinematicsSolver__Class** type_info() {
            static app::InverseKinematicsSolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InverseKinematicsSolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InverseKinematicsSolver__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSolver__Class>(type_info(), "Moon", "InverseKinematicsSolver");
        }
        inline app::InverseKinematicsSolver* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver>(get_class());
        }
    } // namespace InverseKinematicsSolver
} // namespace app::classes::types
