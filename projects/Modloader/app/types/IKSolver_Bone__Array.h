#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolver_Bone__Array {
        inline app::IKSolver_Bone__Array__Class** type_info = (app::IKSolver_Bone__Array__Class**)(modloader::win::memory::resolve_rva(0x04774B60));
        inline app::IKSolver_Bone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_Bone__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolver+Bone[]");
        }
        inline app::IKSolver_Bone__Array* create() {
            return il2cpp::create_object<app::IKSolver_Bone__Array>(get_class());
        }
    } // namespace IKSolver_Bone__Array
} // namespace app::classes::types
