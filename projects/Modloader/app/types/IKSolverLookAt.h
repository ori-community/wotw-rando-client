#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverLookAt {
        inline app::IKSolverLookAt__Class** type_info = (app::IKSolverLookAt__Class**)(modloader::win::memory::resolve_rva(0x047729B8));
        inline app::IKSolverLookAt__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLookAt__Class>(type_info, "RootMotion.FinalIK", "IKSolverLookAt");
        }
        inline app::IKSolverLookAt* create() {
            return il2cpp::create_object<app::IKSolverLookAt>(get_class());
        }
    } // namespace IKSolverLookAt
} // namespace app::classes::types
