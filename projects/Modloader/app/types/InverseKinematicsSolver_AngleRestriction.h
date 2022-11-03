#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver_AngleRestriction {
        inline app::InverseKinematicsSolver_AngleRestriction__Class** type_info = (app::InverseKinematicsSolver_AngleRestriction__Class**)(modloader::win::memory::resolve_rva(0x047436C0));
        inline app::InverseKinematicsSolver_AngleRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::InverseKinematicsSolver_AngleRestriction__Class>(type_info, "Moon", "InverseKinematicsSolver", "AngleRestriction");
        }
        inline app::InverseKinematicsSolver_AngleRestriction* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver_AngleRestriction>(get_class());
        }
    } // namespace InverseKinematicsSolver_AngleRestriction
} // namespace app::classes::types
