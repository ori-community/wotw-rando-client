#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverLimb__Array {
        inline app::IKSolverLimb__Array__Class** type_info = (app::IKSolverLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x04753880));
        inline app::IKSolverLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb[]");
        }
        inline app::IKSolverLimb__Array* create() {
            return il2cpp::create_object<app::IKSolverLimb__Array>(get_class());
        }
    } // namespace IKSolverLimb__Array
} // namespace app::classes::types
