#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverFABRIK {
        inline app::IKSolverFABRIK__Class** type_info = (app::IKSolverFABRIK__Class**)(modloader::win::memory::resolve_rva(0x047780B0));
        inline app::IKSolverFABRIK__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFABRIK__Class>(type_info, "RootMotion.FinalIK", "IKSolverFABRIK");
        }
        inline app::IKSolverFABRIK* create() {
            return il2cpp::create_object<app::IKSolverFABRIK>(get_class());
        }
    } // namespace IKSolverFABRIK
} // namespace app::classes::types
