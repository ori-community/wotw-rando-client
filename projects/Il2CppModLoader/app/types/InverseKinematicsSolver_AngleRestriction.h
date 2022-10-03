#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver_AngleRestriction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InverseKinematicsSolver_AngleRestriction__Class** type_info;
        inline app::InverseKinematicsSolver_AngleRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::InverseKinematicsSolver_AngleRestriction__Class>(type_info, "Moon", "InverseKinematicsSolver", "AngleRestriction");
        }
        inline app::InverseKinematicsSolver_AngleRestriction* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver_AngleRestriction>(get_class());
        }
    } // namespace InverseKinematicsSolver_AngleRestriction
} // namespace app::classes::types
