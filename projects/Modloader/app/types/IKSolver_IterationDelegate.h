#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolver_IterationDelegate {
        inline app::IKSolver_IterationDelegate__Class** type_info = (app::IKSolver_IterationDelegate__Class**)(modloader::win::memory::resolve_rva(0x04710B58));
        inline app::IKSolver_IterationDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_IterationDelegate__Class>(type_info, "RootMotion.FinalIK", "IKSolver", "IterationDelegate");
        }
        inline app::IKSolver_IterationDelegate* create() {
            return il2cpp::create_object<app::IKSolver_IterationDelegate>(get_class());
        }
    } // namespace IKSolver_IterationDelegate
} // namespace app::classes::types
